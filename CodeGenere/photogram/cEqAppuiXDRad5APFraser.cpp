/*Header-MicMac-eLiSe-25/06/2007

    MicMac : Multi Image Correspondances par Methodes Automatiques de Correlation
    eLiSe  : ELements of an Image Software Environnement

    www.micmac.ign.fr

   
    Copyright : Institut Geographique National
    Author : Marc Pierrot Deseilligny
    Contributors : Gregoire Maillet, Didier Boldo.

[1] M. Pierrot-Deseilligny, N. Paparoditis.
    "A multiresolution and optimization-based image matching approach:
    An application to surface reconstruction from SPOT5-HRS stereo imagery."
    In IAPRS vol XXXVI-1/W41 in ISPRS Workshop On Topographic Mapping From Space
    (With Special Emphasis on Small Satellites), Ankara, Turquie, 02-2006.

[2] M. Pierrot-Deseilligny, "MicMac, un lociel de mise en correspondance
    d'images, adapte au contexte geograhique" to appears in 
    Bulletin d'information de l'Institut Geographique National, 2007.

Francais :

   MicMac est un logiciel de mise en correspondance d'image adapte 
   au contexte de recherche en information geographique. Il s'appuie sur
   la bibliotheque de manipulation d'image eLiSe. Il est distibue sous la
   licences Cecill-B.  Voir en bas de fichier et  http://www.cecill.info.


English :

    MicMac is an open source software specialized in image matching
    for research in geographic information. MicMac is built on the
    eLiSe image library. MicMac is governed by the  "Cecill-B licence".
    See below and http://www.cecill.info.

Header-MicMac-eLiSe-25/06/2007*/
// File Automatically generated by eLiSe

#include "general/all.h"
#include "private/all.h"
#include "cEqAppuiXDRad5APFraser.h"


cEqAppuiXDRad5APFraser::cEqAppuiXDRad5APFraser():
    cElCompiledFonc(1)
{
   AddIntRef (cIncIntervale("Intr",0,14));
   AddIntRef (cIncIntervale("Orient",14,20));
   Close(false);
}



void cEqAppuiXDRad5APFraser::ComputeVal()
{
   double tmp0_ = mCompCoord[3];
   double tmp1_ = mLocXIm-tmp0_;
   double tmp2_ = mCompCoord[4];
   double tmp3_ = mLocYIm-tmp2_;
   double tmp4_ = (tmp1_)*(tmp1_);
   double tmp5_ = (tmp3_)*(tmp3_);
   double tmp6_ = tmp4_+tmp5_;
   double tmp7_ = (tmp6_)*(tmp6_);
   double tmp8_ = tmp7_*(tmp6_);
   double tmp9_ = tmp8_*(tmp6_);
   double tmp10_ = ElSquare(tmp1_);
   double tmp11_ = mCompCoord[14];
   double tmp12_ = mCompCoord[15];
   double tmp13_ = cos(tmp12_);
   double tmp14_ = sin(tmp11_);
   double tmp15_ = cos(tmp11_);
   double tmp16_ = sin(tmp12_);
   double tmp17_ = mCompCoord[16];
   double tmp18_ = mCompCoord[17];
   double tmp19_ = mLocXTer-tmp18_;
   double tmp20_ = sin(tmp17_);
   double tmp21_ = -(tmp20_);
   double tmp22_ = -(tmp16_);
   double tmp23_ = cos(tmp17_);
   double tmp24_ = mCompCoord[18];
   double tmp25_ = mLocYTer-tmp24_;
   double tmp26_ = mCompCoord[19];
   double tmp27_ = mLocZTer-tmp26_;

  mVal[0] = ((tmp0_+(tmp1_)*(1+(tmp6_)*mCompCoord[5]+tmp7_*mCompCoord[6]+tmp8_*mCompCoord[7]+tmp9_*mCompCoord[8]+tmp9_*(tmp6_)*mCompCoord[9])+(2*tmp10_+tmp10_+ElSquare(tmp3_))*mCompCoord[10]+2*(tmp1_)*(tmp3_)*mCompCoord[11]+mCompCoord[12]*(tmp1_)+mCompCoord[13]*(tmp3_))-mCompCoord[1])/mCompCoord[0]-(tmp15_*tmp13_*(tmp19_)+tmp14_*tmp13_*(tmp25_)+tmp16_*(tmp27_))/((-(tmp14_)*tmp21_+tmp15_*tmp22_*tmp23_)*(tmp19_)+(tmp15_*tmp21_+tmp14_*tmp22_*tmp23_)*(tmp25_)+tmp13_*tmp23_*(tmp27_));

}


void cEqAppuiXDRad5APFraser::ComputeValDeriv()
{
   double tmp0_ = mCompCoord[3];
   double tmp1_ = mLocXIm-tmp0_;
   double tmp2_ = mCompCoord[4];
   double tmp3_ = mLocYIm-tmp2_;
   double tmp4_ = (tmp1_)*(tmp1_);
   double tmp5_ = (tmp3_)*(tmp3_);
   double tmp6_ = tmp4_+tmp5_;
   double tmp7_ = (tmp6_)*(tmp6_);
   double tmp8_ = tmp7_*(tmp6_);
   double tmp9_ = tmp8_*(tmp6_);
   double tmp10_ = ElSquare(tmp1_);
   double tmp11_ = mCompCoord[14];
   double tmp12_ = mCompCoord[15];
   double tmp13_ = cos(tmp12_);
   double tmp14_ = sin(tmp11_);
   double tmp15_ = cos(tmp11_);
   double tmp16_ = sin(tmp12_);
   double tmp17_ = mCompCoord[16];
   double tmp18_ = mCompCoord[17];
   double tmp19_ = mLocXTer-tmp18_;
   double tmp20_ = sin(tmp17_);
   double tmp21_ = -(tmp20_);
   double tmp22_ = -(tmp16_);
   double tmp23_ = cos(tmp17_);
   double tmp24_ = mCompCoord[18];
   double tmp25_ = mLocYTer-tmp24_;
   double tmp26_ = mCompCoord[19];
   double tmp27_ = mLocZTer-tmp26_;
   double tmp28_ = mCompCoord[5];
   double tmp29_ = (tmp6_)*tmp28_;
   double tmp30_ = 1+tmp29_;
   double tmp31_ = mCompCoord[6];
   double tmp32_ = tmp7_*tmp31_;
   double tmp33_ = tmp30_+tmp32_;
   double tmp34_ = mCompCoord[7];
   double tmp35_ = tmp8_*tmp34_;
   double tmp36_ = tmp33_+tmp35_;
   double tmp37_ = mCompCoord[8];
   double tmp38_ = tmp9_*tmp37_;
   double tmp39_ = tmp36_+tmp38_;
   double tmp40_ = tmp9_*(tmp6_);
   double tmp41_ = mCompCoord[9];
   double tmp42_ = tmp40_*tmp41_;
   double tmp43_ = tmp39_+tmp42_;
   double tmp44_ = (tmp1_)*(tmp43_);
   double tmp45_ = tmp0_+tmp44_;
   double tmp46_ = 2*tmp10_;
   double tmp47_ = ElSquare(tmp3_);
   double tmp48_ = tmp10_+tmp47_;
   double tmp49_ = tmp46_+tmp48_;
   double tmp50_ = mCompCoord[10];
   double tmp51_ = (tmp49_)*tmp50_;
   double tmp52_ = 2*(tmp1_);
   double tmp53_ = tmp52_*(tmp3_);
   double tmp54_ = mCompCoord[11];
   double tmp55_ = tmp53_*tmp54_;
   double tmp56_ = tmp51_+tmp55_;
   double tmp57_ = mCompCoord[12];
   double tmp58_ = tmp57_*(tmp1_);
   double tmp59_ = tmp56_+tmp58_;
   double tmp60_ = mCompCoord[13];
   double tmp61_ = tmp60_*(tmp3_);
   double tmp62_ = tmp59_+tmp61_;
   double tmp63_ = tmp45_+tmp62_;
   double tmp64_ = mCompCoord[1];
   double tmp65_ = (tmp63_)-tmp64_;
   double tmp66_ = mCompCoord[0];
   double tmp67_ = ElSquare(tmp66_);
   double tmp68_ = -(1);
   double tmp69_ = tmp68_*(tmp1_);
   double tmp70_ = tmp69_+tmp69_;
   double tmp71_ = (tmp70_)*(tmp6_);
   double tmp72_ = tmp71_+tmp71_;
   double tmp73_ = (tmp72_)*(tmp6_);
   double tmp74_ = (tmp70_)*tmp7_;
   double tmp75_ = tmp73_+tmp74_;
   double tmp76_ = (tmp75_)*(tmp6_);
   double tmp77_ = (tmp70_)*tmp8_;
   double tmp78_ = tmp76_+tmp77_;
   double tmp79_ = 2*tmp68_;
   double tmp80_ = tmp79_*(tmp1_);
   double tmp81_ = tmp68_*(tmp3_);
   double tmp82_ = tmp81_+tmp81_;
   double tmp83_ = (tmp82_)*(tmp6_);
   double tmp84_ = tmp83_+tmp83_;
   double tmp85_ = (tmp84_)*(tmp6_);
   double tmp86_ = (tmp82_)*tmp7_;
   double tmp87_ = tmp85_+tmp86_;
   double tmp88_ = (tmp87_)*(tmp6_);
   double tmp89_ = (tmp82_)*tmp8_;
   double tmp90_ = tmp88_+tmp89_;
   double tmp91_ = tmp15_*tmp13_;
   double tmp92_ = -(tmp14_);
   double tmp93_ = tmp92_*tmp21_;
   double tmp94_ = tmp15_*tmp22_;
   double tmp95_ = tmp94_*tmp23_;
   double tmp96_ = tmp93_+tmp95_;
   double tmp97_ = (tmp96_)*(tmp19_);
   double tmp98_ = tmp15_*tmp21_;
   double tmp99_ = tmp14_*tmp22_;
   double tmp100_ = tmp99_*tmp23_;
   double tmp101_ = tmp98_+tmp100_;
   double tmp102_ = (tmp101_)*(tmp25_);
   double tmp103_ = tmp97_+tmp102_;
   double tmp104_ = tmp13_*tmp23_;
   double tmp105_ = tmp104_*(tmp27_);
   double tmp106_ = tmp103_+tmp105_;
   double tmp107_ = tmp91_*(tmp19_);
   double tmp108_ = tmp14_*tmp13_;
   double tmp109_ = tmp108_*(tmp25_);
   double tmp110_ = tmp107_+tmp109_;
   double tmp111_ = tmp16_*(tmp27_);
   double tmp112_ = tmp110_+tmp111_;
   double tmp113_ = tmp68_*tmp14_;
   double tmp114_ = tmp68_*tmp16_;
   double tmp115_ = -(tmp13_);
   double tmp116_ = ElSquare(tmp106_);
   double tmp117_ = -(tmp23_);
   double tmp118_ = tmp68_*tmp20_;

  mVal[0] = (tmp65_)/tmp66_-(tmp112_)/(tmp106_);

  mCompDer[0][0] = -(tmp65_)/tmp67_;
  mCompDer[0][1] = (tmp68_*tmp66_)/tmp67_;
  mCompDer[0][2] = 0;
  mCompDer[0][3] = ((1+tmp68_*(tmp43_)+((tmp70_)*tmp28_+(tmp72_)*tmp31_+(tmp75_)*tmp34_+(tmp78_)*tmp37_+((tmp78_)*(tmp6_)+(tmp70_)*tmp9_)*tmp41_)*(tmp1_)+(tmp80_*2+tmp80_)*tmp50_+tmp68_*2*(tmp3_)*tmp54_+tmp68_*tmp57_)*tmp66_)/tmp67_;
  mCompDer[0][4] = ((((tmp82_)*tmp28_+(tmp84_)*tmp31_+(tmp87_)*tmp34_+(tmp90_)*tmp37_+((tmp90_)*(tmp6_)+(tmp82_)*tmp9_)*tmp41_)*(tmp1_)+tmp79_*(tmp3_)*tmp50_+tmp68_*tmp52_*tmp54_+tmp68_*tmp60_)*tmp66_)/tmp67_;
  mCompDer[0][5] = ((tmp6_)*(tmp1_)*tmp66_)/tmp67_;
  mCompDer[0][6] = (tmp7_*(tmp1_)*tmp66_)/tmp67_;
  mCompDer[0][7] = (tmp8_*(tmp1_)*tmp66_)/tmp67_;
  mCompDer[0][8] = (tmp9_*(tmp1_)*tmp66_)/tmp67_;
  mCompDer[0][9] = (tmp40_*(tmp1_)*tmp66_)/tmp67_;
  mCompDer[0][10] = ((tmp49_)*tmp66_)/tmp67_;
  mCompDer[0][11] = (tmp53_*tmp66_)/tmp67_;
  mCompDer[0][12] = ((tmp1_)*tmp66_)/tmp67_;
  mCompDer[0][13] = ((tmp3_)*tmp66_)/tmp67_;
  mCompDer[0][14] = -(((tmp113_*tmp13_*(tmp19_)+tmp91_*(tmp25_))*(tmp106_)-(tmp112_)*((-(tmp15_)*tmp21_+tmp113_*tmp22_*tmp23_)*(tmp19_)+(tmp113_*tmp21_+tmp95_)*(tmp25_)))/tmp116_);
  mCompDer[0][15] = -(((tmp114_*tmp15_*(tmp19_)+tmp114_*tmp14_*(tmp25_)+tmp13_*(tmp27_))*(tmp106_)-(tmp112_)*(tmp115_*tmp15_*tmp23_*(tmp19_)+tmp115_*tmp14_*tmp23_*(tmp25_)+tmp114_*tmp23_*(tmp27_)))/tmp116_);
  mCompDer[0][16] = -(-((tmp112_)*((tmp117_*tmp92_+tmp118_*tmp94_)*(tmp19_)+(tmp117_*tmp15_+tmp118_*tmp99_)*(tmp25_)+tmp118_*tmp13_*(tmp27_)))/tmp116_);
  mCompDer[0][17] = -((tmp68_*tmp91_*(tmp106_)-(tmp112_)*tmp68_*(tmp96_))/tmp116_);
  mCompDer[0][18] = -((tmp68_*tmp108_*(tmp106_)-(tmp112_)*tmp68_*(tmp101_))/tmp116_);
  mCompDer[0][19] = -((tmp114_*(tmp106_)-(tmp112_)*tmp68_*tmp104_)/tmp116_);
}


void cEqAppuiXDRad5APFraser::ComputeValDerivHessian()
{
  ELISE_ASSERT(false,"Foncteur cEqAppuiXDRad5APFraser Has no Der Sec");
}

void cEqAppuiXDRad5APFraser::SetXIm(double aVal){ mLocXIm = aVal;}
void cEqAppuiXDRad5APFraser::SetXTer(double aVal){ mLocXTer = aVal;}
void cEqAppuiXDRad5APFraser::SetYIm(double aVal){ mLocYIm = aVal;}
void cEqAppuiXDRad5APFraser::SetYTer(double aVal){ mLocYTer = aVal;}
void cEqAppuiXDRad5APFraser::SetZTer(double aVal){ mLocZTer = aVal;}



double * cEqAppuiXDRad5APFraser::AdrVarLocFromString(const std::string & aName)
{
   if (aName == "XIm") return & mLocXIm;
   if (aName == "XTer") return & mLocXTer;
   if (aName == "YIm") return & mLocYIm;
   if (aName == "YTer") return & mLocYTer;
   if (aName == "ZTer") return & mLocZTer;
   return 0;
}


cElCompiledFonc::cAutoAddEntry cEqAppuiXDRad5APFraser::mTheAuto("cEqAppuiXDRad5APFraser",cEqAppuiXDRad5APFraser::Alloc);


cElCompiledFonc *  cEqAppuiXDRad5APFraser::Alloc()
{  return new cEqAppuiXDRad5APFraser();
}



/*Footer-MicMac-eLiSe-25/06/2007

Ce logiciel est un programme informatique servant à la mise en
correspondances d'images pour la reconstruction du relief.

Ce logiciel est régi par la licence CeCILL-B soumise au droit français et
respectant les principes de diffusion des logiciels libres. Vous pouvez
utiliser, modifier et/ou redistribuer ce programme sous les conditions
de la licence CeCILL-B telle que diffusée par le CEA, le CNRS et l'INRIA 
sur le site "http://www.cecill.info".

En contrepartie de l'accessibilité au code source et des droits de copie,
de modification et de redistribution accordés par cette licence, il n'est
offert aux utilisateurs qu'une garantie limitée.  Pour les mêmes raisons,
seule une responsabilité restreinte pèse sur l'auteur du programme,  le
titulaire des droits patrimoniaux et les concédants successifs.

A cet égard  l'attention de l'utilisateur est attirée sur les risques
associés au chargement,  à l'utilisation,  à la modification et/ou au
développement et à la reproduction du logiciel par l'utilisateur étant 
donné sa spécificité de logiciel libre, qui peut le rendre complexe à 
manipuler et qui le réserve donc à des développeurs et des professionnels
avertis possédant  des  connaissances  informatiques approfondies.  Les
utilisateurs sont donc invités à charger  et  tester  l'adéquation  du
logiciel à leurs besoins dans des conditions permettant d'assurer la
sécurité de leurs systèmes et ou de leurs données et, plus généralement, 
à l'utiliser et l'exploiter dans les mêmes conditions de sécurité. 

Le fait que vous puissiez accéder à cet en-tête signifie que vous avez 
pris connaissance de la licence CeCILL-B, et que vous en avez accepté les
termes.
Footer-MicMac-eLiSe-25/06/2007*/