#include <QString>
#include <QtTest>
#include <QPointer>
#include <QList>
#include <QStringList>
#include <QStringListModel>
#include "createfeaturedialog.h"
#include "availablefunctionslistproxymodel.h"

// recomended readings:
// https://gist.github.com/peteristhegreat/cbd8eaa0e565d0b82dbfb5c7fdc61c8d
// https://vicrucann.github.io/tutorials/qttest-signals-qtreewidget/

using namespace oi;

class DialogsTest : public QObject
{
    Q_OBJECT

public:
    DialogsTest();

private Q_SLOTS:
    void initTestCase();
    void createPoint();
    void createCircle();
    void createPlane();
    void createLevel();

private:


};

DialogsTest::DialogsTest() {

}

void DialogsTest::initTestCase() {
    // create in memory database
    QFile sqlFile1(INIT_SQL);
    sqlFile1.open(QFile::ReadOnly | QFile::Text);
    QTextStream in1(&sqlFile1);
    QStringList statements = in1.readAll().split(";");

    QFile sqlFile2(ELEMENT_SQL);
    sqlFile2.open(QFile::ReadOnly | QFile::Text);
    QTextStream in2(&sqlFile2);
    statements.append(in2.readAll().split(";"));

    SystemDbManager::initInMemoryDB(statements);


    QStringList entityTypes;
    entityTypes << "point" << "circle" << "plane"; // comboBox_entityType order

    QPointer<MeasurementConfigManager> measurementConfigManager = new MeasurementConfigManager();

    MeasurementConfig fastPointConfig;
    fastPointConfig.setName("fastpoint");
    fastPointConfig.setTypeOfReading(ReadingTypes::eCartesianReading);
    measurementConfigManager->addProjectMeasurementConfig(fastPointConfig); // add as project config ... seams ok

    MeasurementConfig levelConfig;
    levelConfig.setName("level");
    levelConfig.setTypeOfReading(ReadingTypes::eLevelReading);
    measurementConfigManager->addProjectMeasurementConfig(levelConfig); // add as project config ... seams ok

    MeasurementConfig scanTimeConfig;
    scanTimeConfig.setName("scantime");
    scanTimeConfig.setTypeOfReading(ReadingTypes::eCartesianReading);
    scanTimeConfig.setTimeDependent(true);
    measurementConfigManager->addProjectMeasurementConfig(scanTimeConfig); // add as project config ... seams ok

    MeasurementConfig scanDistanceConfig;
    scanDistanceConfig.setName("scandistance");
    scanDistanceConfig.setTypeOfReading(ReadingTypes::eCartesianReading);
    scanDistanceConfig.setDistanceDependent(true);
    measurementConfigManager->addProjectMeasurementConfig(scanDistanceConfig); // add as project config ... seams ok

    // create plugin with some functions
    QList<sdb::Plugin> plugins;
    sdb::Plugin testPlugin;
    testPlugin.name = "testplugin";
    testPlugin.author = "esc";


    sdb::Function point;
    point.name = "fitpoint";
    point.iid = OiMetaData::iid_FitFunction;
    point.applicableFor << FeatureTypes::ePointFeature;
    point.neededElements << ElementTypes::eObservationElement;

    sdb::Function plane;
    plane.name = "fitplane";
    plane.iid = OiMetaData::iid_FitFunction;
    plane.applicableFor << FeatureTypes::ePlaneFeature;
    plane.neededElements << ElementTypes::eObservationElement;

    sdb::Function level;
    level.name = "fitlevel";
    level.iid = OiMetaData::iid_FitFunction;
    level.applicableFor << FeatureTypes::ePlaneFeature;
    level.neededElements << ElementTypes::eReadingLevelElement;

    sdb::Function planefrompoints;
    planefrompoints.name = "planefrompoints";
    planefrompoints.iid = OiMetaData::iid_ConstructFunction;
    planefrompoints.applicableFor << FeatureTypes::ePlaneFeature;
    planefrompoints.neededElements << ElementTypes::eObservationElement;

    sdb::Function circle;
    circle.name = "fitcircle";
    circle.iid = OiMetaData::iid_FitFunction;
    circle.applicableFor << FeatureTypes::eCircleFeature;

    testPlugin.functions << plane << point << level << circle << planefrompoints;

    plugins << testPlugin;

    // add plugin to database
    SystemDbManager::addPlugin(testPlugin);


    // init ModelManager
    ModelManager::testInit(entityTypes, measurementConfigManager, plugins);

}

void DialogsTest::createPoint()
{

    // create dialog
    CreateFeatureDialog dialog;

    // comboBox_entityType currently not usesd, type is set directly
    dialog.setFeatureType(FeatureTypes::ePointFeature);
    dialog.show(); // to call: void showEvent(QShowEvent *event); and initialize dialog
    QSignalSpy spy_initialized(&dialog, SIGNAL(initialized()));
    spy_initialized.wait(500);

    // check function
    QPointer<QComboBox> functionCB;
    QPointer<QListView> functionLV;

    // check for default function
    functionCB = dialog.findChild<QComboBox *>("comboBox_function");
    functionLV = functionCB->findChild<QListView *>();
    qDebug() << "rowCount" << functionLV->model()->rowCount();
    qDebug() << functionLV->model()->index(0,0).data( Qt::DisplayRole ).toString();
    qDebug() << "currentIndex" << functionCB->currentIndex();
    QVERIFY("fitpoint" == functionLV->model()->index(0,0).data( Qt::DisplayRole ).toString());

}

void DialogsTest::createCircle() {
    // create dialog
    CreateFeatureDialog dialog;

    // comboBox_entityType currently not usesd, type is set directly
    dialog.setFeatureType(FeatureTypes::eCircleFeature);
    dialog.show(); // to call: void showEvent(QShowEvent *event); and initialize dialog
    QSignalSpy spy_initialized(&dialog, SIGNAL(initialized()));
    spy_initialized.wait(500);

    // check function
    QPointer<QComboBox> functionCB;
    QPointer<QListView> functionLV;

    // check for default function
    functionCB = dialog.findChild<QComboBox *>("comboBox_function");
    functionLV = functionCB->findChild<QListView *>();
    qDebug() << "rowCount" << functionLV->model()->rowCount();
    qDebug() << functionLV->model()->index(0,0).data( Qt::DisplayRole ).toString();
    qDebug() << "currentIndex" << functionCB->currentIndex();
    QVERIFY("fitcircle" == functionLV->model()->index(0,0).data( Qt::DisplayRole ).toString());
}

void DialogsTest::createPlane() {
    // create dialog
    CreateFeatureDialog dialog;

    // comboBox_entityType currently not usesd, type is set directly
    dialog.setFeatureType(FeatureTypes::ePlaneFeature);
    dialog.show(); // to call: void showEvent(QShowEvent *event); and initialize dialog
    QSignalSpy spy_initialized(&dialog, SIGNAL(initialized()));
    spy_initialized.wait(500);

    // check function
    QPointer<QComboBox> functionCB;
    QPointer<QListView> functionLV;

    // check for default function
    functionCB = dialog.findChild<QComboBox *>("comboBox_function");
    functionLV = functionCB->findChild<QListView *>();
    qDebug() << "rowCount" << functionLV->model()->rowCount();
    qDebug() << functionLV->model()->index(0,0).data( Qt::DisplayRole ).toString();
    qDebug() << "currentIndex" << functionCB->currentIndex();
    QVERIFY(3 == functionCB->currentIndex());
    QVERIFY("fitplane" == functionLV->model()->index(functionCB->currentIndex(),0).data( Qt::DisplayRole ).toString());

}

void DialogsTest::createLevel() {
}

/*

    // create dialog
    CreateFeatureDialog dialog;

    dialog.setFeatureType(FeatureTypes::ePointFeature);
    // check function

    QStringList entityTypes = ModelManager::getScalarEntityTypeNamesModel().stringList();

    QPointer<QComboBox> functionCB;
    QPointer<QListView> functionLV;

    // default behavoir: create point
    functionCB = dialog.findChild<QComboBox *>("comboBox_function");
    functionLV = functionCB->findChild<QListView *>();
    qDebug() << functionLV->model()->rowCount();
    qDebug() << functionLV->model()->index(0,0).data( Qt::DisplayRole ).toString();
    QVERIFY("fitpoint" == functionLV->model()->index(0,0).data( Qt::DisplayRole ).toString());


    // create circle
    QPointer<QComboBox> entityTypeCB = dialog.findChild<QComboBox *>("comboBox_entityType");
    qDebug() << entityTypeCB;
    qDebug() << entityTypeCB->currentIndex();
    QVERIFY(0 == entityTypeCB->currentIndex());
    QTest::mouseClick(entityTypeCB, Qt::LeftButton);
    QTest::qWait(1000);

    QPointer<QListView> entityTypeLV = entityTypeCB->findChild<QListView *>();
    qDebug() << entityTypeLV;

    int i = entityTypes.indexOf("circle");
    QModelIndex idx = entityTypeLV->model()->index(i,0);
    entityTypeLV->scrollTo(idx);

    QPoint itemPt = entityTypeLV->visualRect(idx).center();
    QString entityTypeName = entityTypeLV->model()->index(i,0).data( Qt::DisplayRole ).toString();
    qDebug() << "clicking on" << entityTypeName ;
    QVERIFY("circle" == entityTypeName);

    QTest::mouseClick(entityTypeLV->viewport(), Qt::LeftButton, 0, itemPt);
    QTest::qWait(1000);
    // Reopen the combobox
    QTest::mouseClick(entityTypeCB, Qt::LeftButton);
    QTest::qWait(1000);

    qDebug() << entityTypeCB->currentIndex();
    QVERIFY(1 == entityTypeCB->currentIndex());

    functionCB = dialog.findChild<QComboBox *>("comboBox_function");
    functionLV = functionCB->findChild<QListView *>();
    qDebug() << functionLV->model()->rowCount();
    qDebug() << functionLV->model()->index(0,0).data( Qt::DisplayRole ).toString();
 */
QTEST_MAIN(DialogsTest)

#include "dialogstest.moc"
