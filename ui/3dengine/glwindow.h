/****************************************************************************
**
** Copyright (C) 2014 Klaralvdalens Datakonsult AB (KDAB).
** Contact: http://www.qt-project.org/legal
**
** This file is part of the Qt3D module of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL3$
** Commercial License Usage
** Licensees holding valid commercial Qt licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and The Qt Company. For licensing terms
** and conditions see http://www.qt.io/terms-conditions. For further
** information use the contact form at http://www.qt.io/contact-us.
**
** GNU Lesser General Public License Usage
** Alternatively, this file may be used under the terms of the GNU Lesser
** General Public License version 3 as published by the Free Software
** Foundation and appearing in the file LICENSE.LGPLv3 included in the
** packaging of this file. Please review the following information to
** ensure the GNU Lesser General Public License version 3 requirements
** will be met: https://www.gnu.org/licenses/lgpl.html.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU
** General Public License version 2.0 or later as published by the Free
** Software Foundation and appearing in the file LICENSE.GPL included in
** the packaging of this file. Please review the following information to
** ensure the GNU General Public License version 2.0 requirements will be
** met: http://www.gnu.org/licenses/gpl-2.0.html.
**
** $QT_END_LICENSE$
**
****************************************************************************/

#ifndef GLWINDOW_H
#define GLWINDOW_H

#include <QWindow>
#include <QDebug>

#include <QWheelEvent>
#include <QMouseEvent>

#include <QHBoxLayout>

#include <Qt3DCore/QEntity>
#include <Qt3DCore/QCamera>
#include <Qt3DCore/QCameraLens>
#include <Qt3DCore/QTransform>
#include <Qt3DCore/QLookAtTransform>
#include <Qt3DCore/QScaleTransform>
#include <Qt3DCore/QRotateTransform>
#include <Qt3DCore/QTranslateTransform>
#include <Qt3DCore/QAspectEngine>

#include <Qt3DInput/QInputAspect>

#include <Qt3DRenderer/QRenderAspect>
#include <Qt3DRenderer/QFrameGraph>
#include <Qt3DRenderer/QForwardRenderer>
#include <Qt3DRenderer/QPhongMaterial>

#include <Qt3DRenderer/QCylinderMesh>
#include <Qt3DRenderer/QSphereMesh>
#include <Qt3DRenderer/QTorusMesh>

#include <QPropertyAnimation>

#include "scenebuilder.h"

class GlWindow : public QWindow
{
    Q_OBJECT
public:
    explicit GlWindow(QScreen *screen = 0);
    ~GlWindow();

    QPointer<OiJob> getCurrentJob() const;
    void setCurrentJob(const QPointer<OiJob> &value);

protected:
    void wheelEvent(QWheelEvent * ev);
    void mouseDoubleClickEvent(QMouseEvent * event);

private:
    Qt3D::QAspectEngine engine;
    Qt3D::QCamera *cameraEntity;
    Qt3D::QInputAspect *input;
    Qt3D::QEntity *rootEntity;
    Qt3D::QFrameGraph *frameGraph;
    Qt3D::QForwardRenderer *forwardRenderer;

    QVector3D cameraPosition;

    SceneBuilder scene;

};

#endif // QT3D_GLWINDOW_H