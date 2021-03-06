// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Standard_Storable_HeaderFile
#define _Standard_Storable_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <Standard_Integer.hxx>
#include <Standard_Boolean.hxx>
#include <Standard_PrimitiveTypes.hxx>


Standard_EXPORT const Handle(Standard_Type)& STANDARD_TYPE(Standard_Storable);

//! This class Storable is an abstract class that allows built-in
//! primitive types to be extended. They are not themselves
//! persistent, but are known by the database, therefore can be used
//! to define the internal representation of persistent objects.
//! Otherwise, all the fields of subclasses of Object MUST inherit
//! from Storable.
//!
//! This class provides also a framework for copying, comparing and
//! printing.
class Standard_Storable 
{

public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT virtual   void Delete() ;
Standard_EXPORT virtual ~Standard_Storable(){Delete();}
  
  //! Returns a hashed value denoting <me>. This value is in
  //! the range 1..<Upper>.
  Standard_EXPORT virtual   Standard_Integer HashCode (const Standard_Integer Upper)  const;
  
  //! Returns true if the direct contents of <me> and
  //! <Other> are memberwise equal.
  Standard_EXPORT   Standard_Boolean IsEqual (const Standard_Storable& Other)  const;
  Standard_Boolean operator == (const Standard_Storable& Other)  const
{
  return IsEqual(Other);
}
  
  //! Returns true if the Deep contents of <me> and
  //! <Other> are memberwise equal.
  Standard_EXPORT   Standard_Boolean IsSimilar (const Standard_Storable& Other)  const;



protected:




private: 




};





inline Standard_Integer HashCode(const Standard_Storable& me,const Standard_Integer Upper) {
 return me.HashCode(Upper);
}

inline Standard_Boolean IsSimilar(const Standard_Storable& me,const Standard_Storable& Other) {
 return me.IsSimilar(Other);
}



#endif // _Standard_Storable_HeaderFile
