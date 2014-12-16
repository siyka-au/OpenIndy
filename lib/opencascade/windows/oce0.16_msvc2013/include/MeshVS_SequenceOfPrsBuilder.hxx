// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _MeshVS_SequenceOfPrsBuilder_HeaderFile
#define _MeshVS_SequenceOfPrsBuilder_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TCollection_BaseSequence_HeaderFile
#include <TCollection_BaseSequence.hxx>
#endif
#ifndef _Handle_MeshVS_PrsBuilder_HeaderFile
#include <Handle_MeshVS_PrsBuilder.hxx>
#endif
#ifndef _Handle_MeshVS_SequenceNodeOfSequenceOfPrsBuilder_HeaderFile
#include <Handle_MeshVS_SequenceNodeOfSequenceOfPrsBuilder.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Standard_NoSuchObject;
class Standard_OutOfRange;
class MeshVS_PrsBuilder;
class MeshVS_SequenceNodeOfSequenceOfPrsBuilder;



class MeshVS_SequenceOfPrsBuilder  : public TCollection_BaseSequence {
public:

  DEFINE_STANDARD_ALLOC

  
      MeshVS_SequenceOfPrsBuilder();
  
  Standard_EXPORT     void Clear() ;
~MeshVS_SequenceOfPrsBuilder()
{
  Clear();
}
  
  Standard_EXPORT    const MeshVS_SequenceOfPrsBuilder& Assign(const MeshVS_SequenceOfPrsBuilder& Other) ;
   const MeshVS_SequenceOfPrsBuilder& operator =(const MeshVS_SequenceOfPrsBuilder& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT     void Append(const Handle(MeshVS_PrsBuilder)& T) ;
  
        void Append(MeshVS_SequenceOfPrsBuilder& S) ;
  
  Standard_EXPORT     void Prepend(const Handle(MeshVS_PrsBuilder)& T) ;
  
        void Prepend(MeshVS_SequenceOfPrsBuilder& S) ;
  
        void InsertBefore(const Standard_Integer Index,const Handle(MeshVS_PrsBuilder)& T) ;
  
        void InsertBefore(const Standard_Integer Index,MeshVS_SequenceOfPrsBuilder& S) ;
  
  Standard_EXPORT     void InsertAfter(const Standard_Integer Index,const Handle(MeshVS_PrsBuilder)& T) ;
  
        void InsertAfter(const Standard_Integer Index,MeshVS_SequenceOfPrsBuilder& S) ;
  
  Standard_EXPORT    const Handle_MeshVS_PrsBuilder& First() const;
  
  Standard_EXPORT    const Handle_MeshVS_PrsBuilder& Last() const;
  
        void Split(const Standard_Integer Index,MeshVS_SequenceOfPrsBuilder& Sub) ;
  
  Standard_EXPORT    const Handle_MeshVS_PrsBuilder& Value(const Standard_Integer Index) const;
   const Handle_MeshVS_PrsBuilder& operator()(const Standard_Integer Index) const
{
  return Value(Index);
}
  
  Standard_EXPORT     void SetValue(const Standard_Integer Index,const Handle(MeshVS_PrsBuilder)& I) ;
  
  Standard_EXPORT     Handle_MeshVS_PrsBuilder& ChangeValue(const Standard_Integer Index) ;
    Handle_MeshVS_PrsBuilder& operator()(const Standard_Integer Index) 
{
  return ChangeValue(Index);
}
  
  Standard_EXPORT     void Remove(const Standard_Integer Index) ;
  
  Standard_EXPORT     void Remove(const Standard_Integer FromIndex,const Standard_Integer ToIndex) ;





protected:





private:

  
  Standard_EXPORT   MeshVS_SequenceOfPrsBuilder(const MeshVS_SequenceOfPrsBuilder& Other);




};

#define SeqItem Handle_MeshVS_PrsBuilder
#define SeqItem_hxx <MeshVS_PrsBuilder.hxx>
#define TCollection_SequenceNode MeshVS_SequenceNodeOfSequenceOfPrsBuilder
#define TCollection_SequenceNode_hxx <MeshVS_SequenceNodeOfSequenceOfPrsBuilder.hxx>
#define Handle_TCollection_SequenceNode Handle_MeshVS_SequenceNodeOfSequenceOfPrsBuilder
#define TCollection_SequenceNode_Type_() MeshVS_SequenceNodeOfSequenceOfPrsBuilder_Type_()
#define TCollection_Sequence MeshVS_SequenceOfPrsBuilder
#define TCollection_Sequence_hxx <MeshVS_SequenceOfPrsBuilder.hxx>

#include <TCollection_Sequence.lxx>

#undef SeqItem
#undef SeqItem_hxx
#undef TCollection_SequenceNode
#undef TCollection_SequenceNode_hxx
#undef Handle_TCollection_SequenceNode
#undef TCollection_SequenceNode_Type_
#undef TCollection_Sequence
#undef TCollection_Sequence_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif