// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PColStd_SeqExplorerOfHSequenceOfPersistent_HeaderFile
#define _PColStd_SeqExplorerOfHSequenceOfPersistent_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Handle_PColStd_SeqNodeOfHSequenceOfPersistent_HeaderFile
#include <Handle_PColStd_SeqNodeOfHSequenceOfPersistent.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_PColStd_HSequenceOfPersistent_HeaderFile
#include <Handle_PColStd_HSequenceOfPersistent.hxx>
#endif
#ifndef _Handle_Standard_Persistent_HeaderFile
#include <Handle_Standard_Persistent.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class PColStd_SeqNodeOfHSequenceOfPersistent;
class PColStd_HSequenceOfPersistent;
class Standard_NoSuchObject;
class Standard_OutOfRange;
class Standard_Persistent;



class PColStd_SeqExplorerOfHSequenceOfPersistent  {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   PColStd_SeqExplorerOfHSequenceOfPersistent(const Handle(PColStd_HSequenceOfPersistent)& S);
  
  Standard_EXPORT     Handle_Standard_Persistent Value(const Standard_Integer Index) ;
  
  Standard_EXPORT     Standard_Boolean Contains(const Handle(Standard_Persistent)& T) ;
  
  Standard_EXPORT     Standard_Integer Location(const Standard_Integer N,const Handle(Standard_Persistent)& T,const Standard_Integer FromIndex,const Standard_Integer ToIndex) ;
  
  Standard_EXPORT     Standard_Integer Location(const Standard_Integer N,const Handle(Standard_Persistent)& T) ;





protected:





private:



Handle_PColStd_SeqNodeOfHSequenceOfPersistent CurrentItem;
Standard_Integer CurrentIndex;
Handle_PColStd_HSequenceOfPersistent TheSequence;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif