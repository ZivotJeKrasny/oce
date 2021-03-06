// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _MAT2d_DataMapOfIntegerSequenceOfConnexion_HeaderFile
#define _MAT2d_DataMapOfIntegerSequenceOfConnexion_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <TCollection_BasicMap.hxx>
#include <Standard_Integer.hxx>
#include <Handle_MAT2d_DataMapNodeOfDataMapOfIntegerSequenceOfConnexion.hxx>
#include <Standard_Boolean.hxx>
#include <Standard_Address.hxx>
class Standard_DomainError;
class Standard_NoSuchObject;
class MAT2d_SequenceOfConnexion;
class TColStd_MapIntegerHasher;
class MAT2d_DataMapNodeOfDataMapOfIntegerSequenceOfConnexion;
class MAT2d_DataMapIteratorOfDataMapOfIntegerSequenceOfConnexion;



class MAT2d_DataMapOfIntegerSequenceOfConnexion  : public TCollection_BasicMap
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT MAT2d_DataMapOfIntegerSequenceOfConnexion(const Standard_Integer NbBuckets = 1);
  
  Standard_EXPORT   MAT2d_DataMapOfIntegerSequenceOfConnexion& Assign (const MAT2d_DataMapOfIntegerSequenceOfConnexion& Other) ;
  MAT2d_DataMapOfIntegerSequenceOfConnexion& operator = (const MAT2d_DataMapOfIntegerSequenceOfConnexion& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT   void ReSize (const Standard_Integer NbBuckets) ;
  
  Standard_EXPORT   void Clear() ;
~MAT2d_DataMapOfIntegerSequenceOfConnexion()
{
  Clear();
}
  
  Standard_EXPORT   Standard_Boolean Bind (const Standard_Integer& K, const MAT2d_SequenceOfConnexion& I) ;
  
  Standard_EXPORT   Standard_Boolean IsBound (const Standard_Integer& K)  const;
  
  Standard_EXPORT   Standard_Boolean UnBind (const Standard_Integer& K) ;
  
  Standard_EXPORT  const  MAT2d_SequenceOfConnexion& Find (const Standard_Integer& K)  const;
 const  MAT2d_SequenceOfConnexion& operator() (const Standard_Integer& K)  const
{
  return Find(K);
}
  
  Standard_EXPORT   MAT2d_SequenceOfConnexion& ChangeFind (const Standard_Integer& K) ;
  MAT2d_SequenceOfConnexion& operator() (const Standard_Integer& K) 
{
  return ChangeFind(K);
}
  
  Standard_EXPORT   Standard_Address Find1 (const Standard_Integer& K)  const;
  
  Standard_EXPORT   Standard_Address ChangeFind1 (const Standard_Integer& K) ;




protected:





private:

  
  Standard_EXPORT MAT2d_DataMapOfIntegerSequenceOfConnexion(const MAT2d_DataMapOfIntegerSequenceOfConnexion& Other);




};







#endif // _MAT2d_DataMapOfIntegerSequenceOfConnexion_HeaderFile
