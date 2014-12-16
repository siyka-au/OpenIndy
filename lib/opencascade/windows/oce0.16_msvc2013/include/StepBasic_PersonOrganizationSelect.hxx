// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepBasic_PersonOrganizationSelect_HeaderFile
#define _StepBasic_PersonOrganizationSelect_HeaderFile

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
#ifndef _Handle_StepBasic_Person_HeaderFile
#include <Handle_StepBasic_Person.hxx>
#endif
#ifndef _Handle_StepBasic_Organization_HeaderFile
#include <Handle_StepBasic_Organization.hxx>
#endif
#ifndef _Handle_StepBasic_PersonAndOrganization_HeaderFile
#include <Handle_StepBasic_PersonAndOrganization.hxx>
#endif
class Standard_Transient;
class StepBasic_Person;
class StepBasic_Organization;
class StepBasic_PersonAndOrganization;



class StepBasic_PersonOrganizationSelect  : public StepData_SelectType {
public:

  DEFINE_STANDARD_ALLOC

  //! Returns a PersonOrganizationSelect SelectType <br>
  Standard_EXPORT   StepBasic_PersonOrganizationSelect();
  //! Recognizes a PersonOrganizationSelect Kind Entity that is : <br>
//!        1 -> Person <br>
//!        2 -> Organization <br>
//!        3 -> PersonAndOrganization <br>
//!        0 else <br>
  Standard_EXPORT     Standard_Integer CaseNum(const Handle(Standard_Transient)& ent) const;
  //! returns Value as a Person (Null if another type) <br>
  Standard_EXPORT     Handle_StepBasic_Person Person() const;
  //! returns Value as a Organization (Null if another type) <br>
  Standard_EXPORT     Handle_StepBasic_Organization Organization() const;
  //! returns Value as a PersonAndOrganization (Null if another type) <br>
  Standard_EXPORT     Handle_StepBasic_PersonAndOrganization PersonAndOrganization() const;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif