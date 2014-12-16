// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepAP203_DateTimeItem_HeaderFile
#define _StepAP203_DateTimeItem_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _StepData_SelectType_HeaderFile
#include <StepData_SelectType.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_Standard_Transient_HeaderFile
#include <Handle_Standard_Transient.hxx>
#endif
#ifndef _Handle_StepBasic_ProductDefinition_HeaderFile
#include <Handle_StepBasic_ProductDefinition.hxx>
#endif
#ifndef _Handle_StepAP203_ChangeRequest_HeaderFile
#include <Handle_StepAP203_ChangeRequest.hxx>
#endif
#ifndef _Handle_StepAP203_StartRequest_HeaderFile
#include <Handle_StepAP203_StartRequest.hxx>
#endif
#ifndef _Handle_StepAP203_Change_HeaderFile
#include <Handle_StepAP203_Change.hxx>
#endif
#ifndef _Handle_StepAP203_StartWork_HeaderFile
#include <Handle_StepAP203_StartWork.hxx>
#endif
#ifndef _Handle_StepBasic_ApprovalPersonOrganization_HeaderFile
#include <Handle_StepBasic_ApprovalPersonOrganization.hxx>
#endif
#ifndef _Handle_StepBasic_Contract_HeaderFile
#include <Handle_StepBasic_Contract.hxx>
#endif
#ifndef _Handle_StepBasic_SecurityClassification_HeaderFile
#include <Handle_StepBasic_SecurityClassification.hxx>
#endif
#ifndef _Handle_StepBasic_Certification_HeaderFile
#include <Handle_StepBasic_Certification.hxx>
#endif
class Standard_Transient;
class StepBasic_ProductDefinition;
class StepAP203_ChangeRequest;
class StepAP203_StartRequest;
class StepAP203_Change;
class StepAP203_StartWork;
class StepBasic_ApprovalPersonOrganization;
class StepBasic_Contract;
class StepBasic_SecurityClassification;
class StepBasic_Certification;


//! Representation of STEP SELECT type DateTimeItem <br>
class StepAP203_DateTimeItem  : public StepData_SelectType {
public:

  DEFINE_STANDARD_ALLOC

  //! Empty constructor <br>
  Standard_EXPORT   StepAP203_DateTimeItem();
  //! Recognizes a kind of DateTimeItem select type <br>
//!          1 -> ProductDefinition from StepBasic <br>
//!          2 -> ChangeRequest from StepAP203 <br>
//!          3 -> StartRequest from StepAP203 <br>
//!          4 -> Change from StepAP203 <br>
//!          5 -> StartWork from StepAP203 <br>
//!          6 -> ApprovalPersonOrganization from StepBasic <br>
//!          7 -> Contract from StepBasic <br>
//!          8 -> SecurityClassification from StepBasic <br>
//!          9 -> Certification from StepBasic <br>
//!          0 else <br>
  Standard_EXPORT     Standard_Integer CaseNum(const Handle(Standard_Transient)& ent) const;
  //! Returns Value as ProductDefinition (or Null if another type) <br>
  Standard_EXPORT     Handle_StepBasic_ProductDefinition ProductDefinition() const;
  //! Returns Value as ChangeRequest (or Null if another type) <br>
  Standard_EXPORT     Handle_StepAP203_ChangeRequest ChangeRequest() const;
  //! Returns Value as StartRequest (or Null if another type) <br>
  Standard_EXPORT     Handle_StepAP203_StartRequest StartRequest() const;
  //! Returns Value as Change (or Null if another type) <br>
  Standard_EXPORT     Handle_StepAP203_Change Change() const;
  //! Returns Value as StartWork (or Null if another type) <br>
  Standard_EXPORT     Handle_StepAP203_StartWork StartWork() const;
  //! Returns Value as ApprovalPersonOrganization (or Null if another type) <br>
  Standard_EXPORT     Handle_StepBasic_ApprovalPersonOrganization ApprovalPersonOrganization() const;
  //! Returns Value as Contract (or Null if another type) <br>
  Standard_EXPORT     Handle_StepBasic_Contract Contract() const;
  //! Returns Value as SecurityClassification (or Null if another type) <br>
  Standard_EXPORT     Handle_StepBasic_SecurityClassification SecurityClassification() const;
  //! Returns Value as Certification (or Null if another type) <br>
  Standard_EXPORT     Handle_StepBasic_Certification Certification() const;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif