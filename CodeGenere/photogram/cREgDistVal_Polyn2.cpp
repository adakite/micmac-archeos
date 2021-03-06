// File Automatically generated by eLiSe
#include "StdAfx.h"
#include "cREgDistVal_Polyn2.h"


cREgDistVal_Polyn2::cREgDistVal_Polyn2():
    cElCompiledFonc(2)
{
   AddIntRef (cIncIntervale("Intr",0,9));
   Close(false);
}



void cREgDistVal_Polyn2::ComputeVal()
{
   double tmp0_ = mLocRegDistValP1_x - mLocPolyn2_State_1_0;
   double tmp1_ = (tmp0_) / mLocPolyn2_State_0_0;
   double tmp2_ = mLocRegDistValP1_y - mLocPolyn2_State_2_0;
   double tmp3_ = (tmp2_) / mLocPolyn2_State_0_0;
   double tmp4_ = mCompCoord[3];
   double tmp5_ = mCompCoord[4];
   double tmp6_ = mCompCoord[5];
   double tmp7_ = (tmp1_) * (tmp3_);
   double tmp8_ = mCompCoord[6];
   double tmp9_ = (tmp3_) * (tmp3_);
   double tmp10_ = (tmp1_) * (tmp1_);


  mVal[0] = (mLocPolyn2_State_1_0 + (((1 + tmp4_) * (tmp1_) + tmp5_ * (tmp3_)) - tmp6_ * 2 * tmp10_ + tmp8_ * tmp7_ + mCompCoord[7] * tmp9_) * mLocPolyn2_State_0_0) - mLocRegDistKnownVal_x;

  mVal[1] = (mLocPolyn2_State_2_0 + (((1 - tmp4_) * (tmp3_) + tmp5_ * (tmp1_) + tmp6_ * tmp7_) - tmp8_ * 2 * tmp9_ + mCompCoord[8] * tmp10_) * mLocPolyn2_State_0_0) - mLocRegDistKnownVal_y;



}


void cREgDistVal_Polyn2::ComputeValDeriv()
{
   double tmp0_ = mLocRegDistValP1_x - mLocPolyn2_State_1_0;
   double tmp1_ = (tmp0_) / mLocPolyn2_State_0_0;
   double tmp2_ = mLocRegDistValP1_y - mLocPolyn2_State_2_0;
   double tmp3_ = (tmp2_) / mLocPolyn2_State_0_0;
   double tmp4_ = (tmp1_) * (tmp1_);
   double tmp5_ = (tmp1_) * (tmp3_);
   double tmp6_ = (tmp3_) * (tmp3_);
   double tmp7_ = mCompCoord[3];
   double tmp8_ = mCompCoord[4];
   double tmp9_ = mCompCoord[5];
   double tmp10_ = mCompCoord[6];
   double tmp11_ = (tmp1_) * mLocPolyn2_State_0_0;
   double tmp12_ = tmp5_ * mLocPolyn2_State_0_0;

  mVal[0] = (mLocPolyn2_State_1_0 + (((1 + tmp7_) * (tmp1_) + tmp8_ * (tmp3_)) - tmp9_ * 2 * tmp4_ + tmp10_ * tmp5_ + mCompCoord[7] * tmp6_) * mLocPolyn2_State_0_0) - mLocRegDistKnownVal_x;

  mCompDer[0][0] = 0;
  mCompDer[0][1] = 0;
  mCompDer[0][2] = 0;
  mCompDer[0][3] = tmp11_;
  mCompDer[0][4] = (tmp3_) * mLocPolyn2_State_0_0;
  mCompDer[0][5] = -(2 * tmp4_) * mLocPolyn2_State_0_0;
  mCompDer[0][6] = tmp12_;
  mCompDer[0][7] = tmp6_ * mLocPolyn2_State_0_0;
  mCompDer[0][8] = 0;
  mVal[1] = (mLocPolyn2_State_2_0 + (((1 - tmp7_) * (tmp3_) + tmp8_ * (tmp1_) + tmp9_ * tmp5_) - tmp10_ * 2 * tmp6_ + mCompCoord[8] * tmp4_) * mLocPolyn2_State_0_0) - mLocRegDistKnownVal_y;

  mCompDer[1][0] = 0;
  mCompDer[1][1] = 0;
  mCompDer[1][2] = 0;
  mCompDer[1][3] = -(1) * (tmp3_) * mLocPolyn2_State_0_0;
  mCompDer[1][4] = tmp11_;
  mCompDer[1][5] = tmp12_;
  mCompDer[1][6] = -(2 * tmp6_) * mLocPolyn2_State_0_0;
  mCompDer[1][7] = 0;
  mCompDer[1][8] = tmp4_ * mLocPolyn2_State_0_0;

}


void cREgDistVal_Polyn2::ComputeValDerivHessian()
{
  ELISE_ASSERT(false,"Foncteur cREgDistVal_Polyn2 Has no Der Sec");
}

void cREgDistVal_Polyn2::SetPolyn2_State_0_0(double aVal){ mLocPolyn2_State_0_0 = aVal;}
void cREgDistVal_Polyn2::SetPolyn2_State_1_0(double aVal){ mLocPolyn2_State_1_0 = aVal;}
void cREgDistVal_Polyn2::SetPolyn2_State_2_0(double aVal){ mLocPolyn2_State_2_0 = aVal;}
void cREgDistVal_Polyn2::SetRegDistKnownVal_x(double aVal){ mLocRegDistKnownVal_x = aVal;}
void cREgDistVal_Polyn2::SetRegDistKnownVal_y(double aVal){ mLocRegDistKnownVal_y = aVal;}
void cREgDistVal_Polyn2::SetRegDistValP1_x(double aVal){ mLocRegDistValP1_x = aVal;}
void cREgDistVal_Polyn2::SetRegDistValP1_y(double aVal){ mLocRegDistValP1_y = aVal;}



double * cREgDistVal_Polyn2::AdrVarLocFromString(const std::string & aName)
{
   if (aName == "Polyn2_State_0_0") return & mLocPolyn2_State_0_0;
   if (aName == "Polyn2_State_1_0") return & mLocPolyn2_State_1_0;
   if (aName == "Polyn2_State_2_0") return & mLocPolyn2_State_2_0;
   if (aName == "RegDistKnownVal_x") return & mLocRegDistKnownVal_x;
   if (aName == "RegDistKnownVal_y") return & mLocRegDistKnownVal_y;
   if (aName == "RegDistValP1_x") return & mLocRegDistValP1_x;
   if (aName == "RegDistValP1_y") return & mLocRegDistValP1_y;
   return 0;
}


cElCompiledFonc::cAutoAddEntry cREgDistVal_Polyn2::mTheAuto("cREgDistVal_Polyn2",cREgDistVal_Polyn2::Alloc);


cElCompiledFonc *  cREgDistVal_Polyn2::Alloc()
{  return new cREgDistVal_Polyn2();
}


