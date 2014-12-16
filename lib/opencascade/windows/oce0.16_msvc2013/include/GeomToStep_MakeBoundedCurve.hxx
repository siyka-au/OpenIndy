// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _GeomToStep_MakeBoundedCurve_HeaderFile
#define _GeomToStep_MakeBoundedCurve_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Handle_StepGeom_BoundedCurve_HeaderFile
#include <Handle_StepGeom_BoundedCurve.hxx>
#endif
#ifndef _GeomToStep_Root_HeaderFile
#include <GeomToStep_Root.hxx>
#endif
#ifndef _Handle_Geom_BoundedCurve_HeaderFile
#include <Handle_Geom_BoundedCurve.hxx>
#endif
#ifndef _Handle_Geom2d_BoundedCurve_HeaderFile
#include <Handle_Geom2d_BoundedCurve.hxx>
#endif
class StepGeom_BoundedCurve;
class StdFail_NotDone;
class Geom_BoundedCurve;
class Geom2d_BoundedCurve;


//! This class implements the mapping between classes <br>
//!          BoundedCurve from Geom, Geom2d and the class BoundedCurve from <br>
//!          StepGeom which describes a BoundedCurve from prostep. <br>
//!          As BoundedCurve is an abstract BoundedCurve this class <br>
//!          is an access to the sub-class required. <br>
class GeomToStep_MakeBoundedCurve  : public GeomToStep_Root {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   GeomToStep_MakeBoundedCurve(const Handle(Geom_BoundedCurve)& C);
  
  Standard_EXPORT   GeomToStep_MakeBoundedCurve(const Handle(Geom2d_BoundedCurve)& C);
  
  Standard_EXPORT    const Handle_StepGeom_BoundedCurve& Value() const;





protected:





private:



Handle_StepGeom_BoundedCurve theBoundedCurve;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif