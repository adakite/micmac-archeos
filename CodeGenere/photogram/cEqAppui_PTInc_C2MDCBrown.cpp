// File Automatically generated by eLiSe
#include "general/all.h"
#include "private/all.h"
#include "cEqAppui_PTInc_C2MDCBrown.h"


cEqAppui_PTInc_C2MDCBrown::cEqAppui_PTInc_C2MDCBrown():
    cElCompiledFonc(2)
{
   AddIntRef (cIncIntervale("Intr",0,17));
   AddIntRef (cIncIntervale("Orient",17,23));
   AddIntRef (cIncIntervale("Tmp_PTer",23,26));
   Close(false);
}



void cEqAppui_PTInc_C2MDCBrown::ComputeVal()
{
   double tmp0_ = mCompCoord[17];
   double tmp1_ = mCompCoord[18];
   double tmp2_ = cos(tmp1_);
   double tmp3_ = sin(tmp0_);
   double tmp4_ = cos(tmp0_);
   double tmp5_ = sin(tmp1_);
   double tmp6_ = mCompCoord[19];
   double tmp7_ = mCompCoord[23];
   double tmp8_ = mCompCoord[20];
   double tmp9_ = tmp7_-tmp8_;
   double tmp10_ = sin(tmp6_);
   double tmp11_ = -(tmp10_);
   double tmp12_ = -(tmp5_);
   double tmp13_ = cos(tmp6_);
   double tmp14_ = mCompCoord[24];
   double tmp15_ = mCompCoord[21];
   double tmp16_ = tmp14_-tmp15_;
   double tmp17_ = mCompCoord[25];
   double tmp18_ = mCompCoord[22];
   double tmp19_ = tmp17_-tmp18_;
   double tmp20_ = mLocYIm*mLocYIm;
   double tmp21_ = mLocXIm*mLocXIm;
   double tmp22_ = tmp21_*tmp20_;
   double tmp23_ = mCompCoord[0];
   double tmp24_ = -(tmp3_);
   double tmp25_ = tmp4_*tmp12_;
   double tmp26_ = tmp3_*tmp12_;
   double tmp27_ = tmp24_*tmp11_;
   double tmp28_ = tmp25_*tmp13_;
   double tmp29_ = tmp27_+tmp28_;
   double tmp30_ = (tmp29_)*(tmp9_);
   double tmp31_ = tmp4_*tmp11_;
   double tmp32_ = tmp26_*tmp13_;
   double tmp33_ = tmp31_+tmp32_;
   double tmp34_ = (tmp33_)*(tmp16_);
   double tmp35_ = tmp30_+tmp34_;
   double tmp36_ = tmp2_*tmp13_;
   double tmp37_ = tmp36_*(tmp19_);
   double tmp38_ = tmp35_+tmp37_;
   double tmp39_ = mLocXIm*mLocYIm;
   double tmp40_ = tmp21_*mLocYIm;
   double tmp41_ = mLocXIm*tmp20_;
   double tmp42_ = mCompCoord[15];
   double tmp43_ = mCompCoord[16];
   double tmp44_ = tmp21_+tmp20_;

  mVal[0] = (mCompCoord[1]+tmp23_*((tmp4_*tmp2_*(tmp9_)+tmp3_*tmp2_*(tmp16_)+tmp5_*(tmp19_))/(tmp38_)))-((1+mCompCoord[3])*mLocXIm+mCompCoord[4]*mLocYIm+mCompCoord[5]*tmp39_+mCompCoord[6]*tmp20_+mCompCoord[7]*tmp40_+mCompCoord[8]*tmp41_+mCompCoord[9]*tmp22_+tmp42_*(mLocXIm/mLocDCBrown_State_0_0)*tmp22_+tmp43_*mLocXIm*(tmp44_));

  mVal[1] = (mCompCoord[2]+tmp23_*(((tmp24_*tmp13_+tmp25_*tmp10_)*(tmp9_)+(tmp4_*tmp13_+tmp26_*tmp10_)*(tmp16_)+tmp2_*tmp10_*(tmp19_))/(tmp38_)))-(mLocYIm+mCompCoord[10]*tmp39_+mCompCoord[11]*tmp21_+mCompCoord[12]*tmp40_+mCompCoord[13]*tmp41_+mCompCoord[14]*tmp22_+tmp42_*(mLocYIm/mLocDCBrown_State_0_0)*tmp22_+tmp43_*mLocYIm*(tmp44_));

}


void cEqAppui_PTInc_C2MDCBrown::ComputeValDeriv()
{
   double tmp0_ = mCompCoord[17];
   double tmp1_ = mCompCoord[18];
   double tmp2_ = cos(tmp1_);
   double tmp3_ = sin(tmp0_);
   double tmp4_ = cos(tmp0_);
   double tmp5_ = sin(tmp1_);
   double tmp6_ = mCompCoord[19];
   double tmp7_ = mCompCoord[23];
   double tmp8_ = mCompCoord[20];
   double tmp9_ = tmp7_-tmp8_;
   double tmp10_ = sin(tmp6_);
   double tmp11_ = -(tmp10_);
   double tmp12_ = -(tmp5_);
   double tmp13_ = cos(tmp6_);
   double tmp14_ = mCompCoord[24];
   double tmp15_ = mCompCoord[21];
   double tmp16_ = tmp14_-tmp15_;
   double tmp17_ = mCompCoord[25];
   double tmp18_ = mCompCoord[22];
   double tmp19_ = tmp17_-tmp18_;
   double tmp20_ = mLocYIm*mLocYIm;
   double tmp21_ = mLocXIm*mLocXIm;
   double tmp22_ = tmp21_*tmp20_;
   double tmp23_ = tmp4_*tmp2_;
   double tmp24_ = tmp23_*(tmp9_);
   double tmp25_ = tmp3_*tmp2_;
   double tmp26_ = tmp25_*(tmp16_);
   double tmp27_ = tmp24_+tmp26_;
   double tmp28_ = tmp5_*(tmp19_);
   double tmp29_ = tmp27_+tmp28_;
   double tmp30_ = -(tmp3_);
   double tmp31_ = tmp30_*tmp11_;
   double tmp32_ = tmp4_*tmp12_;
   double tmp33_ = tmp32_*tmp13_;
   double tmp34_ = tmp31_+tmp33_;
   double tmp35_ = (tmp34_)*(tmp9_);
   double tmp36_ = tmp4_*tmp11_;
   double tmp37_ = tmp3_*tmp12_;
   double tmp38_ = tmp37_*tmp13_;
   double tmp39_ = tmp36_+tmp38_;
   double tmp40_ = (tmp39_)*(tmp16_);
   double tmp41_ = tmp35_+tmp40_;
   double tmp42_ = tmp2_*tmp13_;
   double tmp43_ = tmp42_*(tmp19_);
   double tmp44_ = tmp41_+tmp43_;
   double tmp45_ = (tmp29_)/(tmp44_);
   double tmp46_ = mLocXIm*mLocYIm;
   double tmp47_ = tmp21_*mLocYIm;
   double tmp48_ = mLocXIm*tmp20_;
   double tmp49_ = mLocXIm/mLocDCBrown_State_0_0;
   double tmp50_ = tmp21_+tmp20_;
   double tmp51_ = -(1);
   double tmp52_ = tmp51_*tmp3_;
   double tmp53_ = mCompCoord[0];
   double tmp54_ = tmp51_*tmp5_;
   double tmp55_ = -(tmp2_);
   double tmp56_ = ElSquare(tmp44_);
   double tmp57_ = -(tmp13_);
   double tmp58_ = tmp51_*tmp10_;
   double tmp59_ = mCompCoord[15];
   double tmp60_ = mCompCoord[16];
   double tmp61_ = tmp30_*tmp13_;
   double tmp62_ = tmp32_*tmp10_;
   double tmp63_ = tmp61_+tmp62_;
   double tmp64_ = (tmp63_)*(tmp9_);
   double tmp65_ = tmp4_*tmp13_;
   double tmp66_ = tmp37_*tmp10_;
   double tmp67_ = tmp65_+tmp66_;
   double tmp68_ = (tmp67_)*(tmp16_);
   double tmp69_ = tmp64_+tmp68_;
   double tmp70_ = tmp2_*tmp10_;
   double tmp71_ = tmp70_*(tmp19_);
   double tmp72_ = tmp69_+tmp71_;
   double tmp73_ = (tmp72_)/(tmp44_);
   double tmp74_ = -(tmp46_);
   double tmp75_ = -(tmp47_);
   double tmp76_ = -(tmp48_);
   double tmp77_ = -(tmp22_);
   double tmp78_ = mLocYIm/mLocDCBrown_State_0_0;
   double tmp79_ = -(tmp4_);
   double tmp80_ = tmp52_*tmp12_;
   double tmp81_ = tmp79_*tmp11_;
   double tmp82_ = tmp80_*tmp13_;
   double tmp83_ = tmp81_+tmp82_;
   double tmp84_ = (tmp83_)*(tmp9_);
   double tmp85_ = tmp52_*tmp11_;
   double tmp86_ = tmp85_+tmp33_;
   double tmp87_ = (tmp86_)*(tmp16_);
   double tmp88_ = tmp84_+tmp87_;
   double tmp89_ = tmp55_*tmp4_;
   double tmp90_ = tmp55_*tmp3_;
   double tmp91_ = tmp89_*tmp13_;
   double tmp92_ = tmp91_*(tmp9_);
   double tmp93_ = tmp90_*tmp13_;
   double tmp94_ = tmp93_*(tmp16_);
   double tmp95_ = tmp92_+tmp94_;
   double tmp96_ = tmp54_*tmp13_;
   double tmp97_ = tmp96_*(tmp19_);
   double tmp98_ = tmp95_+tmp97_;
   double tmp99_ = tmp57_*tmp30_;
   double tmp100_ = tmp58_*tmp32_;
   double tmp101_ = tmp99_+tmp100_;
   double tmp102_ = (tmp101_)*(tmp9_);
   double tmp103_ = tmp57_*tmp4_;
   double tmp104_ = tmp58_*tmp37_;
   double tmp105_ = tmp103_+tmp104_;
   double tmp106_ = (tmp105_)*(tmp16_);
   double tmp107_ = tmp102_+tmp106_;
   double tmp108_ = tmp58_*tmp2_;
   double tmp109_ = tmp108_*(tmp19_);
   double tmp110_ = tmp107_+tmp109_;
   double tmp111_ = tmp51_*(tmp34_);
   double tmp112_ = tmp51_*(tmp39_);
   double tmp113_ = tmp51_*tmp42_;

  mVal[0] = (mCompCoord[1]+tmp53_*(tmp45_))-((1+mCompCoord[3])*mLocXIm+mCompCoord[4]*mLocYIm+mCompCoord[5]*tmp46_+mCompCoord[6]*tmp20_+mCompCoord[7]*tmp47_+mCompCoord[8]*tmp48_+mCompCoord[9]*tmp22_+tmp59_*(tmp49_)*tmp22_+tmp60_*mLocXIm*(tmp50_));

  mCompDer[0][0] = tmp45_;
  mCompDer[0][1] = 1;
  mCompDer[0][2] = 0;
  mCompDer[0][3] = -(mLocXIm);
  mCompDer[0][4] = -(mLocYIm);
  mCompDer[0][5] = tmp74_;
  mCompDer[0][6] = -(tmp20_);
  mCompDer[0][7] = tmp75_;
  mCompDer[0][8] = tmp76_;
  mCompDer[0][9] = tmp77_;
  mCompDer[0][10] = 0;
  mCompDer[0][11] = 0;
  mCompDer[0][12] = 0;
  mCompDer[0][13] = 0;
  mCompDer[0][14] = 0;
  mCompDer[0][15] = -((tmp49_)*tmp22_);
  mCompDer[0][16] = -(mLocXIm*(tmp50_));
  mCompDer[0][17] = (((tmp52_*tmp2_*(tmp9_)+tmp23_*(tmp16_))*(tmp44_)-(tmp29_)*(tmp88_))/tmp56_)*tmp53_;
  mCompDer[0][18] = (((tmp54_*tmp4_*(tmp9_)+tmp54_*tmp3_*(tmp16_)+tmp2_*(tmp19_))*(tmp44_)-(tmp29_)*(tmp98_))/tmp56_)*tmp53_;
  mCompDer[0][19] = (-((tmp29_)*(tmp110_))/tmp56_)*tmp53_;
  mCompDer[0][20] = ((tmp51_*tmp23_*(tmp44_)-(tmp29_)*tmp111_)/tmp56_)*tmp53_;
  mCompDer[0][21] = ((tmp51_*tmp25_*(tmp44_)-(tmp29_)*tmp112_)/tmp56_)*tmp53_;
  mCompDer[0][22] = ((tmp54_*(tmp44_)-(tmp29_)*tmp113_)/tmp56_)*tmp53_;
  mCompDer[0][23] = ((tmp23_*(tmp44_)-(tmp29_)*(tmp34_))/tmp56_)*tmp53_;
  mCompDer[0][24] = ((tmp25_*(tmp44_)-(tmp29_)*(tmp39_))/tmp56_)*tmp53_;
  mCompDer[0][25] = ((tmp5_*(tmp44_)-(tmp29_)*tmp42_)/tmp56_)*tmp53_;
  mVal[1] = (mCompCoord[2]+tmp53_*(tmp73_))-(mLocYIm+mCompCoord[10]*tmp46_+mCompCoord[11]*tmp21_+mCompCoord[12]*tmp47_+mCompCoord[13]*tmp48_+mCompCoord[14]*tmp22_+tmp59_*(tmp78_)*tmp22_+tmp60_*mLocYIm*(tmp50_));

  mCompDer[1][0] = tmp73_;
  mCompDer[1][1] = 0;
  mCompDer[1][2] = 1;
  mCompDer[1][3] = 0;
  mCompDer[1][4] = 0;
  mCompDer[1][5] = 0;
  mCompDer[1][6] = 0;
  mCompDer[1][7] = 0;
  mCompDer[1][8] = 0;
  mCompDer[1][9] = 0;
  mCompDer[1][10] = tmp74_;
  mCompDer[1][11] = -(tmp21_);
  mCompDer[1][12] = tmp75_;
  mCompDer[1][13] = tmp76_;
  mCompDer[1][14] = tmp77_;
  mCompDer[1][15] = -((tmp78_)*tmp22_);
  mCompDer[1][16] = -(mLocYIm*(tmp50_));
  mCompDer[1][17] = ((((tmp79_*tmp13_+tmp80_*tmp10_)*(tmp9_)+(tmp52_*tmp13_+tmp62_)*(tmp16_))*(tmp44_)-(tmp72_)*(tmp88_))/tmp56_)*tmp53_;
  mCompDer[1][18] = (((tmp89_*tmp10_*(tmp9_)+tmp90_*tmp10_*(tmp16_)+tmp54_*tmp10_*(tmp19_))*(tmp44_)-(tmp72_)*(tmp98_))/tmp56_)*tmp53_;
  mCompDer[1][19] = ((((tmp58_*tmp30_+tmp13_*tmp32_)*(tmp9_)+(tmp58_*tmp4_+tmp13_*tmp37_)*(tmp16_)+tmp13_*tmp2_*(tmp19_))*(tmp44_)-(tmp72_)*(tmp110_))/tmp56_)*tmp53_;
  mCompDer[1][20] = ((tmp51_*(tmp63_)*(tmp44_)-(tmp72_)*tmp111_)/tmp56_)*tmp53_;
  mCompDer[1][21] = ((tmp51_*(tmp67_)*(tmp44_)-(tmp72_)*tmp112_)/tmp56_)*tmp53_;
  mCompDer[1][22] = ((tmp51_*tmp70_*(tmp44_)-(tmp72_)*tmp113_)/tmp56_)*tmp53_;
  mCompDer[1][23] = (((tmp63_)*(tmp44_)-(tmp72_)*(tmp34_))/tmp56_)*tmp53_;
  mCompDer[1][24] = (((tmp67_)*(tmp44_)-(tmp72_)*(tmp39_))/tmp56_)*tmp53_;
  mCompDer[1][25] = ((tmp70_*(tmp44_)-(tmp72_)*tmp42_)/tmp56_)*tmp53_;
}


void cEqAppui_PTInc_C2MDCBrown::ComputeValDerivHessian()
{
  ELISE_ASSERT(false,"Foncteur cEqAppui_PTInc_C2MDCBrown Has no Der Sec");
}

void cEqAppui_PTInc_C2MDCBrown::SetDCBrown_State_0_0(double aVal){ mLocDCBrown_State_0_0 = aVal;}
void cEqAppui_PTInc_C2MDCBrown::SetXIm(double aVal){ mLocXIm = aVal;}
void cEqAppui_PTInc_C2MDCBrown::SetYIm(double aVal){ mLocYIm = aVal;}



double * cEqAppui_PTInc_C2MDCBrown::AdrVarLocFromString(const std::string & aName)
{
   if (aName == "DCBrown_State_0_0") return & mLocDCBrown_State_0_0;
   if (aName == "XIm") return & mLocXIm;
   if (aName == "YIm") return & mLocYIm;
   return 0;
}


cElCompiledFonc::cAutoAddEntry cEqAppui_PTInc_C2MDCBrown::mTheAuto("cEqAppui_PTInc_C2MDCBrown",cEqAppui_PTInc_C2MDCBrown::Alloc);


cElCompiledFonc *  cEqAppui_PTInc_C2MDCBrown::Alloc()
{  return new cEqAppui_PTInc_C2MDCBrown();
}

