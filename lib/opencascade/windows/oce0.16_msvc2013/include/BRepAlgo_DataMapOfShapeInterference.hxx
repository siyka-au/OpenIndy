// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepAlgo_DataMapOfShapeInterference_HeaderFile
#define _BRepAlgo_DataMapOfShapeInterference_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TCollection_BasicMap_HeaderFile
#include <TCollection_BasicMap.hxx>
#endif
#ifndef _Handle_TopOpeBRepDS_Interference_HeaderFile
#include <Handle_TopOpeBRepDS_Interference.hxx>
#endif
#ifndef _Handle_BRepAlgo_DataMapNodeOfDataMapOfShapeInterference_HeaderFile
#include <Handle_BRepAlgo_DataMapNodeOfDataMapOfShapeInterference.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Address_HeaderFile
#include <Standard_Address.hxx>
#endif
class Standard_DomainError;
class Standard_NoSuchObject;
class TopoDS_Shape;
class TopOpeBRepDS_Interference;
class TopTools_ShapeMapHasher;
class BRepAlgo_DataMapNodeOfDataMapOfShapeInterference;
class BRepAlgo_DataMapIteratorOfDataMapOfShapeInterference;



class BRepAlgo_DataMapOfShapeInterference  : public TCollection_BasicMap {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   BRepAlgo_DataMapOfShapeInterference(const Standard_Integer NbBuckets = 1);
  
  Standard_EXPORT     BRepAlgo_DataMapOfShapeInterference& Assign(const BRepAlgo_DataMapOfShapeInterference& Other) ;
    BRepAlgo_DataMapOfShapeInterference& operator =(const BRepAlgo_DataMapOfShapeInterference& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT     void ReSize(const Standard_Integer NbBuckets) ;
  
  Standard_EXPORT     void Clear() ;
~BRepAlgo_DataMapOfShapeInterference()
{
  Clear();
}
  
  Standard_EXPORT     Standard_Boolean Bind(const TopoDS_Shape& K,const Handle(TopOpeBRepDS_Interference)& I) ;
  
  Standard_EXPORT     Standard_Boolean IsBound(const TopoDS_Shape& K) const;
  
  Standard_EXPORT     Standard_Boolean UnBind(const TopoDS_Shape& K) ;
  
  Standard_EXPORT    const Handle_TopOpeBRepDS_Interference& Find(const TopoDS_Shape& K) const;
   const Handle_TopOpeBRepDS_Interference& operator()(const TopoDS_Shape& K) const
{
  return Find(K);
}
  
  Standard_EXPORT     Handle_TopOpeBRepDS_Interference& ChangeFind(const TopoDS_Shape& K) ;
    Handle_TopOpeBRepDS_Interference& operator()(const TopoDS_Shape& K) 
{
  return ChangeFind(K);
}
  
  Standard_EXPORT     Standard_Address Find1(const TopoDS_Shape& K) const;
  
  Standard_EXPORT     Standard_Address ChangeFind1(const TopoDS_Shape& K) ;





protected:





private:

  
  Standard_EXPORT   BRepAlgo_DataMapOfShapeInterference(const BRepAlgo_DataMapOfShapeInterference& Other);




};





// other Inline functions and methods (like "C++: function call" methods)


#endif