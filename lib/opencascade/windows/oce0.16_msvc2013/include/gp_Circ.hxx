// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _gp_Circ_HeaderFile
#define _gp_Circ_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _gp_Ax2_HeaderFile
#include <gp_Ax2.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Standard_Storable_HeaderFile
#include <Standard_Storable.hxx>
#endif
#ifndef _gp_Ax1_HeaderFile
#include <gp_Ax1.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_PrimitiveTypes_HeaderFile
#include <Standard_PrimitiveTypes.hxx>
#endif
class Standard_ConstructionError;
class gp_Ax2;
class gp_Ax1;
class gp_Pnt;
class gp_Trsf;
class gp_Vec;


Standard_EXPORT const Handle(Standard_Type)& STANDARD_TYPE(gp_Circ);


//!  Describes a circle in 3D space. <br>
//! A circle is defined by its radius and positioned in space <br>
//! with a coordinate system (a gp_Ax2 object) as follows: <br>
//! -   the origin of the coordinate system is the center of the circle, and <br>
//! -   the origin, "X Direction" and "Y Direction" of the <br>
//!   coordinate system define the plane of the circle. <br>
//! This positioning coordinate system is the "local <br>
//! coordinate system" of the circle. Its "main Direction" <br>
//! gives the normal vector to the plane of the circle. The <br>
//! "main Axis" of the coordinate system is referred to as <br>
//! the "Axis" of the circle. <br>
//! Note: when a gp_Circ circle is converted into a <br>
//! Geom_Circle circle, some implicit properties of the <br>
//! circle are used explicitly: <br>
//! -   the "main Direction" of the local coordinate system <br>
//!   gives an implicit orientation to the circle (and defines <br>
//!   its trigonometric sense), <br>
//! -   this orientation corresponds to the direction in <br>
//!   which parameter values increase, <br>
//! -   the starting point for parameterization is that of the <br>
//! "X Axis" of the local coordinate system (i.e. the "X Axis" of the circle). <br>
//! See Also <br>
//! gce_MakeCirc which provides functions for more complex circle constructions <br>
//! Geom_Circle which provides additional functions for <br>
//! constructing circles and works, in particular, with the <br>
//! parametric equations of circles <br>
class gp_Circ  {

public:

  DEFINE_STANDARD_ALLOC

  //! Creates an indefinite circle. <br>
      gp_Circ();
  
//!  A2 locates the circle and gives its orientation in 3D space. <br>
//! Warnings : <br>
//!  It is not forbidden to create a circle with Radius = 0.0  Raises ConstructionError if Radius < 0.0 <br>
      gp_Circ(const gp_Ax2& A2,const Standard_Real Radius);
  
//!  Changes the main axis of the circle. It is the axis <br>
//!  perpendicular to the plane of the circle. <br>
//! Raises ConstructionError if the direction of A1 <br>
//! is parallel to the "XAxis" of the circle. <br>
        void SetAxis(const gp_Ax1& A1) ;
  
//!  Changes the "Location" point (center) of the circle. <br>
        void SetLocation(const gp_Pnt& P) ;
  //! Changes the position of the circle. <br>
        void SetPosition(const gp_Ax2& A2) ;
  //! Modifies the radius of this circle. <br>
//! Warning. This class does not prevent the creation of a circle where Radius is null. <br>
//! Exceptions <br>
//! Standard_ConstructionError if Radius is negative. <br>
        void SetRadius(const Standard_Real Radius) ;
  //! Computes the area of the circle. <br>
        Standard_Real Area() const;
  
//!  Returns the main axis of the circle. <br>
//!  It is the axis perpendicular to the plane of the circle, <br>
//!  passing through the "Location" point (center) of the circle. <br>
       const gp_Ax1& Axis() const;
  //!  Computes the circumference of the circle. <br>
        Standard_Real Length() const;
  
//!  Returns the center of the circle. It is the <br>
//!  "Location" point of the local coordinate system <br>
//!  of the circle <br>
       const gp_Pnt& Location() const;
  
//!  Returns the position of the circle. <br>
//!  It is the local coordinate system of the circle. <br>
       const gp_Ax2& Position() const;
  //!  Returns the radius of this circle. <br>
        Standard_Real Radius() const;
  
//!  Returns the "XAxis" of the circle. <br>
//!  This axis is perpendicular to the axis of the conic. <br>
//!  This axis and the "Yaxis" define the plane of the conic. <br>
        gp_Ax1 XAxis() const;
  
//!  Returns the "YAxis" of the circle. <br>
//!  This axis and the "Xaxis" define the plane of the conic. <br>
//!  The "YAxis" is perpendicular to the "Xaxis". <br>
        gp_Ax1 YAxis() const;
  
//!  Computes the minimum of distance between the point P and <br>
//!  any point on the circumference of the circle. <br>
        Standard_Real Distance(const gp_Pnt& P) const;
  
//!  Computes the square distance between <me> and the point P. <br>
        Standard_Real SquareDistance(const gp_Pnt& P) const;
  
//!  Returns True if the point P is on the circumference. <br>
//!  The distance between <me> and <P> must be lower or <br>
//!  equal to LinearTolerance. <br>
        Standard_Boolean Contains(const gp_Pnt& P,const Standard_Real LinearTolerance) const;
  
  Standard_EXPORT     void Mirror(const gp_Pnt& P) ;
  
//!  Performs the symmetrical transformation of a circle <br>
//!  with respect to the point P which is the center of the <br>
//!  symmetry. <br>
  Standard_EXPORT     gp_Circ Mirrored(const gp_Pnt& P) const;
  
  Standard_EXPORT     void Mirror(const gp_Ax1& A1) ;
  
//!  Performs the symmetrical transformation of a circle with <br>
//!  respect to an axis placement which is the axis of the <br>
//!  symmetry. <br>
  Standard_EXPORT     gp_Circ Mirrored(const gp_Ax1& A1) const;
  
  Standard_EXPORT     void Mirror(const gp_Ax2& A2) ;
  
//!  Performs the symmetrical transformation of a circle with respect <br>
//!  to a plane. The axis placement A2 locates the plane of the <br>
//!  of the symmetry : (Location, XDirection, YDirection). <br>
  Standard_EXPORT     gp_Circ Mirrored(const gp_Ax2& A2) const;
  
        void Rotate(const gp_Ax1& A1,const Standard_Real Ang) ;
  
//!  Rotates a circle. A1 is the axis of the rotation. <br>
//!  Ang is the angular value of the rotation in radians. <br>
        gp_Circ Rotated(const gp_Ax1& A1,const Standard_Real Ang) const;
  
        void Scale(const gp_Pnt& P,const Standard_Real S) ;
  
//!  Scales a circle. S is the scaling value. <br>
//!  Warnings : <br>
//!  If S is negative the radius stay positive but <br>
//!  the "XAxis" and the "YAxis" are  reversed as for <br>
//!  an ellipse. <br>
        gp_Circ Scaled(const gp_Pnt& P,const Standard_Real S) const;
  
        void Transform(const gp_Trsf& T) ;
  
//!  Transforms a circle with the transformation T from class Trsf. <br>
        gp_Circ Transformed(const gp_Trsf& T) const;
  
        void Translate(const gp_Vec& V) ;
  
//!  Translates a circle in the direction of the vector V. <br>
//!  The magnitude of the translation is the vector's magnitude. <br>
        gp_Circ Translated(const gp_Vec& V) const;
  
        void Translate(const gp_Pnt& P1,const gp_Pnt& P2) ;
  
//!  Translates a circle from the point P1 to the point P2. <br>
        gp_Circ Translated(const gp_Pnt& P1,const gp_Pnt& P2) const;
    const gp_Ax2& _CSFDB_Getgp_Circpos() const { return pos; }
    Standard_Real _CSFDB_Getgp_Circradius() const { return radius; }
    void _CSFDB_Setgp_Circradius(const Standard_Real p) { radius = p; }



protected:




private: 


gp_Ax2 pos;
Standard_Real radius;


};


#include <gp_Circ.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif