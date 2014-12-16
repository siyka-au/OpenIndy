// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Visual3d_SetOfView_HeaderFile
#define _Visual3d_SetOfView_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Visual3d_SetListOfSetOfView_HeaderFile
#include <Visual3d_SetListOfSetOfView.hxx>
#endif
#ifndef _Handle_Visual3d_View_HeaderFile
#include <Handle_Visual3d_View.hxx>
#endif
#ifndef _Handle_Visual3d_ListNodeOfSetListOfSetOfView_HeaderFile
#include <Handle_Visual3d_ListNodeOfSetListOfSetOfView.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class Standard_NoSuchObject;
class Visual3d_SetIteratorOfSetOfView;
class Visual3d_View;
class Visual3d_SetListOfSetOfView;
class Visual3d_ListNodeOfSetListOfSetOfView;
class Visual3d_ListIteratorOfSetListOfSetOfView;



class Visual3d_SetOfView  {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   Visual3d_SetOfView();
  
        Standard_Integer Extent() const;
  
        Standard_Boolean IsEmpty() const;
  
        void Clear() ;
  
  Standard_EXPORT     Standard_Boolean Add(const Handle(Visual3d_View)& T) ;
  
  Standard_EXPORT     Standard_Boolean Remove(const Handle(Visual3d_View)& T) ;
  
  Standard_EXPORT     void Union(const Visual3d_SetOfView& B) ;
  
  Standard_EXPORT     void Intersection(const Visual3d_SetOfView& B) ;
  
  Standard_EXPORT     void Difference(const Visual3d_SetOfView& B) ;
  
  Standard_EXPORT     Standard_Boolean Contains(const Handle(Visual3d_View)& T) const;
  
  Standard_EXPORT     Standard_Boolean IsASubset(const Visual3d_SetOfView& S) const;
  
  Standard_EXPORT     Standard_Boolean IsAProperSubset(const Visual3d_SetOfView& S) const;


friend class Visual3d_SetIteratorOfSetOfView;



protected:





private:

  
  Standard_EXPORT   Visual3d_SetOfView(const Visual3d_SetOfView& Other);


Visual3d_SetListOfSetOfView myItems;


};

#define Item Handle_Visual3d_View
#define Item_hxx <Visual3d_View.hxx>
#define TCollection_SetList Visual3d_SetListOfSetOfView
#define TCollection_SetList_hxx <Visual3d_SetListOfSetOfView.hxx>
#define TCollection_ListNodeOfSetList Visual3d_ListNodeOfSetListOfSetOfView
#define TCollection_ListNodeOfSetList_hxx <Visual3d_ListNodeOfSetListOfSetOfView.hxx>
#define TCollection_ListIteratorOfSetList Visual3d_ListIteratorOfSetListOfSetOfView
#define TCollection_ListIteratorOfSetList_hxx <Visual3d_ListIteratorOfSetListOfSetOfView.hxx>
#define TCollection_ListNodeOfSetList Visual3d_ListNodeOfSetListOfSetOfView
#define TCollection_ListNodeOfSetList_hxx <Visual3d_ListNodeOfSetListOfSetOfView.hxx>
#define TCollection_ListIteratorOfSetList Visual3d_ListIteratorOfSetListOfSetOfView
#define TCollection_ListIteratorOfSetList_hxx <Visual3d_ListIteratorOfSetListOfSetOfView.hxx>
#define TCollection_SetIterator Visual3d_SetIteratorOfSetOfView
#define TCollection_SetIterator_hxx <Visual3d_SetIteratorOfSetOfView.hxx>
#define Handle_TCollection_ListNodeOfSetList Handle_Visual3d_ListNodeOfSetListOfSetOfView
#define TCollection_ListNodeOfSetList_Type_() Visual3d_ListNodeOfSetListOfSetOfView_Type_()
#define Handle_TCollection_ListNodeOfSetList Handle_Visual3d_ListNodeOfSetListOfSetOfView
#define TCollection_ListNodeOfSetList_Type_() Visual3d_ListNodeOfSetListOfSetOfView_Type_()
#define TCollection_Set Visual3d_SetOfView
#define TCollection_Set_hxx <Visual3d_SetOfView.hxx>

#include <TCollection_Set.lxx>

#undef Item
#undef Item_hxx
#undef TCollection_SetList
#undef TCollection_SetList_hxx
#undef TCollection_ListNodeOfSetList
#undef TCollection_ListNodeOfSetList_hxx
#undef TCollection_ListIteratorOfSetList
#undef TCollection_ListIteratorOfSetList_hxx
#undef TCollection_ListNodeOfSetList
#undef TCollection_ListNodeOfSetList_hxx
#undef TCollection_ListIteratorOfSetList
#undef TCollection_ListIteratorOfSetList_hxx
#undef TCollection_SetIterator
#undef TCollection_SetIterator_hxx
#undef Handle_TCollection_ListNodeOfSetList
#undef TCollection_ListNodeOfSetList_Type_
#undef Handle_TCollection_ListNodeOfSetList
#undef TCollection_ListNodeOfSetList_Type_
#undef TCollection_Set
#undef TCollection_Set_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif