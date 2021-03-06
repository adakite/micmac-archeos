// File Automatically generated by eLiSe

#include "general/all.h"
#include "private/all.h"


class cEqDirectDistDRad5Interp_CodGen: public cElCompiledFonc
{
   public :

      cEqDirectDistDRad5Interp_CodGen();
      void ComputeVal();
      void ComputeValDeriv();
      void ComputeValDerivHessian();
      double * AdrVarLocFromString(const std::string &);
      void SetPIm1_x(double);
      void SetPIm1_y(double);
      void SetPIm2_x(double);
      void SetPIm2_y(double);


      static cAutoAddEntry  mTheAuto;
      static cElCompiledFonc *  Alloc();
   private :

      double mLocPIm1_x;
      double mLocPIm1_y;
      double mLocPIm2_x;
      double mLocPIm2_y;
};
