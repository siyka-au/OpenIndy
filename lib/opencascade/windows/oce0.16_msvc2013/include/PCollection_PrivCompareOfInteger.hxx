// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PCollection_PrivCompareOfInteger_HeaderFile
#define _PCollection_PrivCompareOfInteger_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Storable_HeaderFile
#include <Standard_Storable.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_PrimitiveTypes_HeaderFile
#include <Standard_PrimitiveTypes.hxx>
#endif


Standard_EXPORT const Handle(Standard_Type)& STANDARD_TYPE(PCollection_PrivCompareOfInteger);


class PCollection_PrivCompareOfInteger  {

public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   virtual  Standard_Boolean IsLower(const Standard_Integer& Left,const Standard_Integer& Right) const;
  
  Standard_EXPORT   virtual  Standard_Boolean IsGreater(const Standard_Integer& Left,const Standard_Integer& Right) const;
  
  Standard_EXPORT     Standard_Boolean IsEqual(const Standard_Integer& Left,const Standard_Integer& Right) const;



protected:




private: 




};





// other Inline functions and methods (like "C++: function call" methods)


#endif