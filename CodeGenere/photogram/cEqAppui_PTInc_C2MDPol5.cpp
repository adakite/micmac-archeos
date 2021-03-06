// File Automatically generated by eLiSe

#include "general/all.h"
#include "private/all.h"
#include "cEqAppui_PTInc_C2MDPol5.h"


cEqAppui_PTInc_C2MDPol5::cEqAppui_PTInc_C2MDPol5():
    cElCompiledFonc(2)
{
   AddIntRef (cIncIntervale("Intr",0,42));
   AddIntRef (cIncIntervale("Orient",42,48));
   AddIntRef (cIncIntervale("Tmp_PTer",48,51));
   Close(false);
}



void cEqAppui_PTInc_C2MDPol5::ComputeVal()
{
   double tmp0_ = mCompCoord[42];
   double tmp1_ = mCompCoord[43];
   double tmp2_ = cos(tmp1_);
   double tmp3_ = sin(tmp0_);
   double tmp4_ = cos(tmp0_);
   double tmp5_ = sin(tmp1_);
   double tmp6_ = mCompCoord[44];
   double tmp7_ = mCompCoord[48];
   double tmp8_ = mCompCoord[45];
   double tmp9_ = tmp7_-tmp8_;
   double tmp10_ = sin(tmp6_);
   double tmp11_ = -(tmp10_);
   double tmp12_ = -(tmp5_);
   double tmp13_ = cos(tmp6_);
   double tmp14_ = mCompCoord[49];
   double tmp15_ = mCompCoord[46];
   double tmp16_ = tmp14_-tmp15_;
   double tmp17_ = mCompCoord[50];
   double tmp18_ = mCompCoord[47];
   double tmp19_ = tmp17_-tmp18_;
   double tmp20_ = ElSquare(mLocYIm);
   double tmp21_ = ElSquare(mLocXIm);
   double tmp22_ = VCube(mLocYIm);
   double tmp23_ = VCube(mLocXIm);
   double tmp24_ = VPow4(mLocYIm);
   double tmp25_ = VPow4(mLocXIm);
   double tmp26_ = -(tmp3_);
   double tmp27_ = tmp4_*tmp12_;
   double tmp28_ = tmp3_*tmp12_;
   double tmp29_ = tmp26_*tmp11_;
   double tmp30_ = tmp27_*tmp13_;
   double tmp31_ = tmp29_+tmp30_;
   double tmp32_ = (tmp31_)*(tmp9_);
   double tmp33_ = tmp4_*tmp11_;
   double tmp34_ = tmp28_*tmp13_;
   double tmp35_ = tmp33_+tmp34_;
   double tmp36_ = (tmp35_)*(tmp16_);
   double tmp37_ = tmp32_+tmp36_;
   double tmp38_ = tmp2_*tmp13_;
   double tmp39_ = tmp38_*(tmp19_);
   double tmp40_ = tmp37_+tmp39_;
   double tmp41_ = VPow5(mLocYIm);
   double tmp42_ = VPow5(mLocXIm);

  mVal[0] = (tmp4_*tmp2_*(tmp9_)+tmp3_*tmp2_*(tmp16_)+tmp5_*(tmp19_))/(tmp40_)-(mCompCoord[0]+mCompCoord[1]*mLocYIm+mCompCoord[2]*mLocXIm+mCompCoord[3]*tmp20_+mCompCoord[4]*mLocXIm*mLocYIm+mCompCoord[5]*tmp21_+mCompCoord[6]*tmp22_+mCompCoord[7]*mLocXIm*tmp20_+mCompCoord[8]*tmp21_*mLocYIm+mCompCoord[9]*tmp23_+mCompCoord[10]*tmp24_+mCompCoord[11]*mLocXIm*tmp22_+mCompCoord[12]*tmp21_*tmp20_+mCompCoord[13]*tmp23_*mLocYIm+mCompCoord[14]*tmp25_+mCompCoord[15]*tmp41_+mCompCoord[16]*mLocXIm*tmp24_+mCompCoord[17]*tmp21_*tmp22_+mCompCoord[18]*tmp23_*tmp20_+mCompCoord[19]*tmp25_*mLocYIm+mCompCoord[20]*tmp42_);

  mVal[1] = ((tmp26_*tmp13_+tmp27_*tmp10_)*(tmp9_)+(tmp4_*tmp13_+tmp28_*tmp10_)*(tmp16_)+tmp2_*tmp10_*(tmp19_))/(tmp40_)-(mCompCoord[21]+mCompCoord[22]*mLocYIm+mCompCoord[23]*mLocXIm+mCompCoord[24]*tmp20_+mCompCoord[25]*mLocXIm*mLocYIm+mCompCoord[26]*tmp21_+mCompCoord[27]*tmp22_+mCompCoord[28]*mLocXIm*tmp20_+mCompCoord[29]*tmp21_*mLocYIm+mCompCoord[30]*tmp23_+mCompCoord[31]*tmp24_+mCompCoord[32]*mLocXIm*tmp22_+mCompCoord[33]*tmp21_*tmp20_+mCompCoord[34]*tmp23_*mLocYIm+mCompCoord[35]*tmp25_+mCompCoord[36]*tmp41_+mCompCoord[37]*mLocXIm*tmp24_+mCompCoord[38]*tmp21_*tmp22_+mCompCoord[39]*tmp23_*tmp20_+mCompCoord[40]*tmp25_*mLocYIm+mCompCoord[41]*tmp42_);

}


void cEqAppui_PTInc_C2MDPol5::ComputeValDeriv()
{
   double tmp0_ = mCompCoord[42];
   double tmp1_ = mCompCoord[43];
   double tmp2_ = cos(tmp1_);
   double tmp3_ = sin(tmp0_);
   double tmp4_ = cos(tmp0_);
   double tmp5_ = sin(tmp1_);
   double tmp6_ = mCompCoord[44];
   double tmp7_ = mCompCoord[48];
   double tmp8_ = mCompCoord[45];
   double tmp9_ = tmp7_-tmp8_;
   double tmp10_ = sin(tmp6_);
   double tmp11_ = -(tmp10_);
   double tmp12_ = -(tmp5_);
   double tmp13_ = cos(tmp6_);
   double tmp14_ = mCompCoord[49];
   double tmp15_ = mCompCoord[46];
   double tmp16_ = tmp14_-tmp15_;
   double tmp17_ = mCompCoord[50];
   double tmp18_ = mCompCoord[47];
   double tmp19_ = tmp17_-tmp18_;
   double tmp20_ = ElSquare(mLocYIm);
   double tmp21_ = ElSquare(mLocXIm);
   double tmp22_ = VCube(mLocYIm);
   double tmp23_ = VCube(mLocXIm);
   double tmp24_ = VPow4(mLocYIm);
   double tmp25_ = VPow4(mLocXIm);
   double tmp26_ = VPow5(mLocYIm);
   double tmp27_ = VPow5(mLocXIm);
   double tmp28_ = -(1);
   double tmp29_ = tmp4_*tmp2_;
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
   double tmp45_ = tmp29_*(tmp9_);
   double tmp46_ = tmp3_*tmp2_;
   double tmp47_ = tmp46_*(tmp16_);
   double tmp48_ = tmp45_+tmp47_;
   double tmp49_ = tmp5_*(tmp19_);
   double tmp50_ = tmp48_+tmp49_;
   double tmp51_ = tmp28_*tmp3_;
   double tmp52_ = tmp28_*tmp5_;
   double tmp53_ = -(tmp2_);
   double tmp54_ = ElSquare(tmp44_);
   double tmp55_ = -(tmp13_);
   double tmp56_ = tmp28_*tmp10_;
   double tmp57_ = -(mLocYIm);
   double tmp58_ = -(mLocXIm);
   double tmp59_ = -(tmp20_);
   double tmp60_ = mLocXIm*mLocYIm;
   double tmp61_ = -(tmp60_);
   double tmp62_ = -(tmp21_);
   double tmp63_ = -(tmp22_);
   double tmp64_ = mLocXIm*tmp20_;
   double tmp65_ = -(tmp64_);
   double tmp66_ = tmp21_*mLocYIm;
   double tmp67_ = -(tmp66_);
   double tmp68_ = -(tmp23_);
   double tmp69_ = -(tmp24_);
   double tmp70_ = mLocXIm*tmp22_;
   double tmp71_ = -(tmp70_);
   double tmp72_ = tmp21_*tmp20_;
   double tmp73_ = -(tmp72_);
   double tmp74_ = tmp23_*mLocYIm;
   double tmp75_ = -(tmp74_);
   double tmp76_ = -(tmp25_);
   double tmp77_ = -(tmp26_);
   double tmp78_ = mLocXIm*tmp24_;
   double tmp79_ = -(tmp78_);
   double tmp80_ = tmp21_*tmp22_;
   double tmp81_ = -(tmp80_);
   double tmp82_ = tmp23_*tmp20_;
   double tmp83_ = -(tmp82_);
   double tmp84_ = tmp25_*mLocYIm;
   double tmp85_ = -(tmp84_);
   double tmp86_ = -(tmp27_);
   double tmp87_ = -(tmp4_);
   double tmp88_ = tmp51_*tmp12_;
   double tmp89_ = tmp32_*tmp10_;
   double tmp90_ = tmp30_*tmp13_;
   double tmp91_ = tmp90_+tmp89_;
   double tmp92_ = (tmp91_)*(tmp9_);
   double tmp93_ = tmp4_*tmp13_;
   double tmp94_ = tmp37_*tmp10_;
   double tmp95_ = tmp93_+tmp94_;
   double tmp96_ = (tmp95_)*(tmp16_);
   double tmp97_ = tmp92_+tmp96_;
   double tmp98_ = tmp2_*tmp10_;
   double tmp99_ = tmp98_*(tmp19_);
   double tmp100_ = tmp97_+tmp99_;
   double tmp101_ = tmp87_*tmp11_;
   double tmp102_ = tmp88_*tmp13_;
   double tmp103_ = tmp101_+tmp102_;
   double tmp104_ = (tmp103_)*(tmp9_);
   double tmp105_ = tmp51_*tmp11_;
   double tmp106_ = tmp105_+tmp33_;
   double tmp107_ = (tmp106_)*(tmp16_);
   double tmp108_ = tmp104_+tmp107_;
   double tmp109_ = tmp53_*tmp4_;
   double tmp110_ = tmp53_*tmp3_;
   double tmp111_ = tmp109_*tmp13_;
   double tmp112_ = tmp111_*(tmp9_);
   double tmp113_ = tmp110_*tmp13_;
   double tmp114_ = tmp113_*(tmp16_);
   double tmp115_ = tmp112_+tmp114_;
   double tmp116_ = tmp52_*tmp13_;
   double tmp117_ = tmp116_*(tmp19_);
   double tmp118_ = tmp115_+tmp117_;
   double tmp119_ = tmp55_*tmp30_;
   double tmp120_ = tmp56_*tmp32_;
   double tmp121_ = tmp119_+tmp120_;
   double tmp122_ = (tmp121_)*(tmp9_);
   double tmp123_ = tmp55_*tmp4_;
   double tmp124_ = tmp56_*tmp37_;
   double tmp125_ = tmp123_+tmp124_;
   double tmp126_ = (tmp125_)*(tmp16_);
   double tmp127_ = tmp122_+tmp126_;
   double tmp128_ = tmp56_*tmp2_;
   double tmp129_ = tmp128_*(tmp19_);
   double tmp130_ = tmp127_+tmp129_;
   double tmp131_ = tmp28_*(tmp34_);
   double tmp132_ = tmp28_*(tmp39_);
   double tmp133_ = tmp28_*tmp42_;

  mVal[0] = (tmp50_)/(tmp44_)-(mCompCoord[0]+mCompCoord[1]*mLocYIm+mCompCoord[2]*mLocXIm+mCompCoord[3]*tmp20_+mCompCoord[4]*mLocXIm*mLocYIm+mCompCoord[5]*tmp21_+mCompCoord[6]*tmp22_+mCompCoord[7]*mLocXIm*tmp20_+mCompCoord[8]*tmp21_*mLocYIm+mCompCoord[9]*tmp23_+mCompCoord[10]*tmp24_+mCompCoord[11]*mLocXIm*tmp22_+mCompCoord[12]*tmp21_*tmp20_+mCompCoord[13]*tmp23_*mLocYIm+mCompCoord[14]*tmp25_+mCompCoord[15]*tmp26_+mCompCoord[16]*mLocXIm*tmp24_+mCompCoord[17]*tmp21_*tmp22_+mCompCoord[18]*tmp23_*tmp20_+mCompCoord[19]*tmp25_*mLocYIm+mCompCoord[20]*tmp27_);

  mCompDer[0][0] = tmp28_;
  mCompDer[0][1] = tmp57_;
  mCompDer[0][2] = tmp58_;
  mCompDer[0][3] = tmp59_;
  mCompDer[0][4] = tmp61_;
  mCompDer[0][5] = tmp62_;
  mCompDer[0][6] = tmp63_;
  mCompDer[0][7] = tmp65_;
  mCompDer[0][8] = tmp67_;
  mCompDer[0][9] = tmp68_;
  mCompDer[0][10] = tmp69_;
  mCompDer[0][11] = tmp71_;
  mCompDer[0][12] = tmp73_;
  mCompDer[0][13] = tmp75_;
  mCompDer[0][14] = tmp76_;
  mCompDer[0][15] = tmp77_;
  mCompDer[0][16] = tmp79_;
  mCompDer[0][17] = tmp81_;
  mCompDer[0][18] = tmp83_;
  mCompDer[0][19] = tmp85_;
  mCompDer[0][20] = tmp86_;
  mCompDer[0][21] = 0;
  mCompDer[0][22] = 0;
  mCompDer[0][23] = 0;
  mCompDer[0][24] = 0;
  mCompDer[0][25] = 0;
  mCompDer[0][26] = 0;
  mCompDer[0][27] = 0;
  mCompDer[0][28] = 0;
  mCompDer[0][29] = 0;
  mCompDer[0][30] = 0;
  mCompDer[0][31] = 0;
  mCompDer[0][32] = 0;
  mCompDer[0][33] = 0;
  mCompDer[0][34] = 0;
  mCompDer[0][35] = 0;
  mCompDer[0][36] = 0;
  mCompDer[0][37] = 0;
  mCompDer[0][38] = 0;
  mCompDer[0][39] = 0;
  mCompDer[0][40] = 0;
  mCompDer[0][41] = 0;
  mCompDer[0][42] = ((tmp51_*tmp2_*(tmp9_)+tmp29_*(tmp16_))*(tmp44_)-(tmp50_)*(tmp108_))/tmp54_;
  mCompDer[0][43] = ((tmp52_*tmp4_*(tmp9_)+tmp52_*tmp3_*(tmp16_)+tmp2_*(tmp19_))*(tmp44_)-(tmp50_)*(tmp118_))/tmp54_;
  mCompDer[0][44] = -((tmp50_)*(tmp130_))/tmp54_;
  mCompDer[0][45] = (tmp28_*tmp29_*(tmp44_)-(tmp50_)*tmp131_)/tmp54_;
  mCompDer[0][46] = (tmp28_*tmp46_*(tmp44_)-(tmp50_)*tmp132_)/tmp54_;
  mCompDer[0][47] = (tmp52_*(tmp44_)-(tmp50_)*tmp133_)/tmp54_;
  mCompDer[0][48] = (tmp29_*(tmp44_)-(tmp50_)*(tmp34_))/tmp54_;
  mCompDer[0][49] = (tmp46_*(tmp44_)-(tmp50_)*(tmp39_))/tmp54_;
  mCompDer[0][50] = (tmp5_*(tmp44_)-(tmp50_)*tmp42_)/tmp54_;
  mVal[1] = (tmp100_)/(tmp44_)-(mCompCoord[21]+mCompCoord[22]*mLocYIm+mCompCoord[23]*mLocXIm+mCompCoord[24]*tmp20_+mCompCoord[25]*mLocXIm*mLocYIm+mCompCoord[26]*tmp21_+mCompCoord[27]*tmp22_+mCompCoord[28]*mLocXIm*tmp20_+mCompCoord[29]*tmp21_*mLocYIm+mCompCoord[30]*tmp23_+mCompCoord[31]*tmp24_+mCompCoord[32]*mLocXIm*tmp22_+mCompCoord[33]*tmp21_*tmp20_+mCompCoord[34]*tmp23_*mLocYIm+mCompCoord[35]*tmp25_+mCompCoord[36]*tmp26_+mCompCoord[37]*mLocXIm*tmp24_+mCompCoord[38]*tmp21_*tmp22_+mCompCoord[39]*tmp23_*tmp20_+mCompCoord[40]*tmp25_*mLocYIm+mCompCoord[41]*tmp27_);

  mCompDer[1][0] = 0;
  mCompDer[1][1] = 0;
  mCompDer[1][2] = 0;
  mCompDer[1][3] = 0;
  mCompDer[1][4] = 0;
  mCompDer[1][5] = 0;
  mCompDer[1][6] = 0;
  mCompDer[1][7] = 0;
  mCompDer[1][8] = 0;
  mCompDer[1][9] = 0;
  mCompDer[1][10] = 0;
  mCompDer[1][11] = 0;
  mCompDer[1][12] = 0;
  mCompDer[1][13] = 0;
  mCompDer[1][14] = 0;
  mCompDer[1][15] = 0;
  mCompDer[1][16] = 0;
  mCompDer[1][17] = 0;
  mCompDer[1][18] = 0;
  mCompDer[1][19] = 0;
  mCompDer[1][20] = 0;
  mCompDer[1][21] = tmp28_;
  mCompDer[1][22] = tmp57_;
  mCompDer[1][23] = tmp58_;
  mCompDer[1][24] = tmp59_;
  mCompDer[1][25] = tmp61_;
  mCompDer[1][26] = tmp62_;
  mCompDer[1][27] = tmp63_;
  mCompDer[1][28] = tmp65_;
  mCompDer[1][29] = tmp67_;
  mCompDer[1][30] = tmp68_;
  mCompDer[1][31] = tmp69_;
  mCompDer[1][32] = tmp71_;
  mCompDer[1][33] = tmp73_;
  mCompDer[1][34] = tmp75_;
  mCompDer[1][35] = tmp76_;
  mCompDer[1][36] = tmp77_;
  mCompDer[1][37] = tmp79_;
  mCompDer[1][38] = tmp81_;
  mCompDer[1][39] = tmp83_;
  mCompDer[1][40] = tmp85_;
  mCompDer[1][41] = tmp86_;
  mCompDer[1][42] = (((tmp87_*tmp13_+tmp88_*tmp10_)*(tmp9_)+(tmp51_*tmp13_+tmp89_)*(tmp16_))*(tmp44_)-(tmp100_)*(tmp108_))/tmp54_;
  mCompDer[1][43] = ((tmp109_*tmp10_*(tmp9_)+tmp110_*tmp10_*(tmp16_)+tmp52_*tmp10_*(tmp19_))*(tmp44_)-(tmp100_)*(tmp118_))/tmp54_;
  mCompDer[1][44] = (((tmp56_*tmp30_+tmp13_*tmp32_)*(tmp9_)+(tmp56_*tmp4_+tmp13_*tmp37_)*(tmp16_)+tmp13_*tmp2_*(tmp19_))*(tmp44_)-(tmp100_)*(tmp130_))/tmp54_;
  mCompDer[1][45] = (tmp28_*(tmp91_)*(tmp44_)-(tmp100_)*tmp131_)/tmp54_;
  mCompDer[1][46] = (tmp28_*(tmp95_)*(tmp44_)-(tmp100_)*tmp132_)/tmp54_;
  mCompDer[1][47] = (tmp28_*tmp98_*(tmp44_)-(tmp100_)*tmp133_)/tmp54_;
  mCompDer[1][48] = ((tmp91_)*(tmp44_)-(tmp100_)*(tmp34_))/tmp54_;
  mCompDer[1][49] = ((tmp95_)*(tmp44_)-(tmp100_)*(tmp39_))/tmp54_;
  mCompDer[1][50] = (tmp98_*(tmp44_)-(tmp100_)*tmp42_)/tmp54_;
}


void cEqAppui_PTInc_C2MDPol5::ComputeValDerivHessian()
{
  ELISE_ASSERT(false,"Foncteur cEqAppui_PTInc_C2MDPol5 Has no Der Sec");
}

void cEqAppui_PTInc_C2MDPol5::SetXIm(double aVal){ mLocXIm = aVal;}
void cEqAppui_PTInc_C2MDPol5::SetYIm(double aVal){ mLocYIm = aVal;}



double * cEqAppui_PTInc_C2MDPol5::AdrVarLocFromString(const std::string & aName)
{
   if (aName == "XIm") return & mLocXIm;
   if (aName == "YIm") return & mLocYIm;
   return 0;
}


cElCompiledFonc::cAutoAddEntry cEqAppui_PTInc_C2MDPol5::mTheAuto("cEqAppui_PTInc_C2MDPol5",cEqAppui_PTInc_C2MDPol5::Alloc);


cElCompiledFonc *  cEqAppui_PTInc_C2MDPol5::Alloc()
{  return new cEqAppui_PTInc_C2MDPol5();
}


