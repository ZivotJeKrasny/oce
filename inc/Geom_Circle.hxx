// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Geom_Circle_HeaderFile
#define _Geom_Circle_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_Geom_Circle.hxx>

#include <Standard_Real.hxx>
#include <Geom_Conic.hxx>
#include <Standard_Boolean.hxx>
#include <Standard_Integer.hxx>
#include <Handle_Geom_Geometry.hxx>
class Standard_ConstructionError;
class Standard_RangeError;
class gp_Circ;
class gp_Ax2;
class gp_Pnt;
class gp_Vec;
class gp_Trsf;
class Geom_Geometry;


//! Describes a circle in 3D space.
//! A circle is defined by its radius and, as with any conic
//! curve, is positioned in space with a right-handed
//! coordinate system (gp_Ax2 object) where:
//! - the origin is the center of the circle, and
//! - the origin, "X Direction" and "Y Direction" define the
//! plane of the circle.
//! This coordinate system is the local coordinate
//! system of the circle.
//! The "main Direction" of this coordinate system is the
//! vector normal to the plane of the circle. The axis, of
//! which the origin and unit vector are respectively the
//! origin and "main Direction" of the local coordinate
//! system, is termed the "Axis" or "main Axis" of the circle.
//! The "main Direction" of the local coordinate system
//! gives an explicit orientation to the circle (definition of
//! the trigonometric sense), determining the direction in
//! which the parameter increases along the circle.
//! The Geom_Circle circle is parameterized by an angle:
//! P(U) = O + R*Cos(U)*XDir + R*Sin(U)*YDir, where:
//! - P is the point of parameter U,
//! - O, XDir and YDir are respectively the origin, "X
//! Direction" and "Y Direction" of its local coordinate system,
//! - R is the radius of the circle.
//! The "X Axis" of the local coordinate system therefore
//! defines the origin of the parameter of the circle. The
//! parameter is the angle with this "X Direction".
//! A circle is a closed and periodic curve. The period is
//! 2.*Pi and the parameter range is [ 0, 2.*Pi [.
class Geom_Circle : public Geom_Conic
{

public:

  
  //! Constructs a circle by conversion of the gp_Circ circle C.
  Standard_EXPORT Geom_Circle(const gp_Circ& C);
  
  //! Constructs a circle of radius Radius, where A2 locates the circle and
  //! defines its orientation in 3D space such that:
  //! - the center of the circle is the origin of A2,
  //! - the origin, "X Direction" and "Y Direction" of A2
  //! define the plane of the circle,
  //! - A2 is the local coordinate system of the circle.
  //! Note: It is possible to create a circle where Radius is equal to 0.0.
  //! raised if Radius < 0.
  Standard_EXPORT Geom_Circle(const gp_Ax2& A2, const Standard_Real Radius);
  

  //! Set <me> so that <me> has the same geometric properties as C.
  Standard_EXPORT   void SetCirc (const gp_Circ& C) ;
  
  //! Assigns the value R to the radius of this circle.
  //! Note: it is possible to have a circle with a radius equal to 0.0.
  //! Exceptions - Standard_ConstructionError if R is negative.
  Standard_EXPORT   void SetRadius (const Standard_Real R) ;
  

  //! returns the non transient circle from gp with the same
  //! geometric properties as <me>.
  Standard_EXPORT   gp_Circ Circ()  const;
  
  //! Returns the radius of this circle.
  Standard_EXPORT   Standard_Real Radius()  const;
  
  //! Computes the parameter on the reversed circle for
  //! the point of parameter U on this circle.
  //! For a circle, the returned value is: 2.*Pi - U.
  Standard_EXPORT   Standard_Real ReversedParameter (const Standard_Real U)  const;
  
  //! Returns the eccentricity  e = 0 for a circle.
  Standard_EXPORT   Standard_Real Eccentricity()  const;
  
  //! Returns the value of the first parameter of this
  //! circle. This is  0.0, which gives the start point of this circle, or
  //! The start point and end point of a circle are coincident.
  Standard_EXPORT   Standard_Real FirstParameter()  const;
  
  //! Returns the value of the last parameter of this
  //! circle. This is 2.*Pi, which gives the end point of this circle.
  //! The start point and end point of a circle are coincident.
  Standard_EXPORT   Standard_Real LastParameter()  const;
  
  //! returns True.
  Standard_EXPORT   Standard_Boolean IsClosed()  const;
  
  //! returns True.
  Standard_EXPORT   Standard_Boolean IsPeriodic()  const;
  
  //! Returns in P the point of parameter U.
  //! P = C + R * Cos (U) * XDir + R * Sin (U) * YDir
  //! where C is the center of the circle , XDir the XDirection and
  //! YDir the YDirection of the circle's local coordinate system.
  Standard_EXPORT   void D0 (const Standard_Real U, gp_Pnt& P)  const;
  

  //! Returns the point P of parameter U and the first derivative V1.
  Standard_EXPORT   void D1 (const Standard_Real U, gp_Pnt& P, gp_Vec& V1)  const;
  

  //! Returns the point P of parameter U, the first and second
  //! derivatives V1 and V2.
  Standard_EXPORT   void D2 (const Standard_Real U, gp_Pnt& P, gp_Vec& V1, gp_Vec& V2)  const;
  

  //! Returns the point P of parameter u, the first second and third
  //! derivatives V1 V2 and V3.
  Standard_EXPORT   void D3 (const Standard_Real U, gp_Pnt& P, gp_Vec& V1, gp_Vec& V2, gp_Vec& V3)  const;
  

  //! The returned vector gives the value of the derivative for the
  //! order of derivation N.
  //! Raised if N < 1.
  Standard_EXPORT   gp_Vec DN (const Standard_Real U, const Standard_Integer N)  const;
  
  //! Applies the transformation T to this circle.
  Standard_EXPORT   void Transform (const gp_Trsf& T) ;
  
  //! Creates a new object which is a copy of this circle.
  Standard_EXPORT   Handle(Geom_Geometry) Copy()  const;




  DEFINE_STANDARD_RTTI(Geom_Circle)

protected:




private: 


  Standard_Real radius;


};







#endif // _Geom_Circle_HeaderFile
