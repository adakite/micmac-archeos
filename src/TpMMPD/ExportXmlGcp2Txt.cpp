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

#include "StdAfx.h"

int ExportXmlGcp2Txt_main(int argc,char ** argv)
{
	std::string aFile, aDir, aOut="Output.txt";
	bool addInc = false;
	
	ElInitArgMain
    (
          argc, argv,
          LArgMain() << EAMC(aDir, "Directory")
					 << EAMC(aFile, "xml Gcps file",  eSAM_IsExistFile),
          LArgMain() << EAM(aOut,"Out",false,"output txt file name : def=Output.txt")
					 << EAM(addInc,"addInc",false,"export also uncertainty values : def=flase",eSAM_IsBool)
    );
    
    //read .xml file
    cDicoAppuisFlottant aDico = StdGetFromPCP(aFile,DicoAppuisFlottant);
	std::list<cOneAppuisDAF> aOneAppuisDAFList = aDico.OneAppuisDAF();
	
	//write data in .txt file
	if (!MMVisualMode)
	{
		FILE * aFP = FopenNN(aOut,"w","OrthoShifting_main");
		cElemAppliSetFile aEASF(aDir + ELISE_CAR_DIR + aOut);
		
		for (std::list<cOneAppuisDAF>::iterator itP=aOneAppuisDAFList.begin(); itP != aOneAppuisDAFList.end(); itP ++)
		{
			fprintf(aFP,"%s %.5f %.5f %.5f", itP->NamePt().c_str(), itP->Pt().x, itP->Pt().y, itP->Pt().z);
			
			if(addInc)
				fprintf(aFP,"%.5f %.5f %.5f\n", itP->Incertitude().x, itP->Incertitude().y, itP->Incertitude().z);
			else
				fprintf(aFP,"\n");
		}
		
		ElFclose(aFP);
	}
    
	return EXIT_SUCCESS;
}

/*Footer-MicMac-eLiSe-25/06/2007

Ce logiciel est un programme informatique servant Ã  la mise en
correspondances d'images pour la reconstruction du relief.

Ce logiciel est rÃ©gi par la licence CeCILL-B soumise au droit franÃ§ais et
respectant les principes de diffusion des logiciels libres. Vous pouvez
utiliser, modifier et/ou redistribuer ce programme sous les conditions
de la licence CeCILL-B telle que diffusÃ©e par le CEA, le CNRS et l'INRIA
sur le site "http://www.cecill.info".

En contrepartie de l'accessibilitÃ© au code source et des droits de copie,
de modification et de redistribution accordÃ©s par cette licence, il n'est
offert aux utilisateurs qu'une garantie limitÃ©e.  Pour les mÃªmes raisons,
seule une responsabilitÃ© restreinte pÃ¨se sur l'auteur du programme,  le
titulaire des droits patrimoniaux et les concÃ©dants successifs.

A cet Ã©gard  l'attention de l'utilisateur est attirÃ©e sur les risques
associÃ©s au chargement,  Ã  l'utilisation,  Ã  la modification et/ou au
dÃ©veloppement et Ã  la reproduction du logiciel par l'utilisateur Ã©tant
donnÃ© sa spÃ©cificitÃ© de logiciel libre, qui peut le rendre complexe Ã
manipuler et qui le rÃ©serve donc Ã  des dÃ©veloppeurs et des professionnels
avertis possÃ©dant  des  connaissances  informatiques approfondies.  Les
utilisateurs sont donc invitÃ©s Ã  charger  et  tester  l'adÃ©quation  du
logiciel Ã  leurs besoins dans des conditions permettant d'assurer la
sÃ©curitÃ© de leurs systÃ¨mes et ou de leurs donnÃ©es et, plus gÃ©nÃ©ralement,
Ã  l'utiliser et l'exploiter dans les mÃªmes conditions de sÃ©curitÃ©.

Le fait que vous puissiez accÃ©der Ã  cet en-tÃªte signifie que vous avez
pris connaissance de la licence CeCILL-B, et que vous en avez acceptÃ© les
termes.
Footer-MicMac-eLiSe-25/06/2007*/
