#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
	int choix;
	char verbe[25]; 
	printf("__________________________________________________________________________________________________________\n  ");
	printf("                 Bienvenue dans votre programme de conjugaison des verbes du second groupe                  \n");
   printf("------------------------------------------------------------------------------------------------------------\n");
	printf("                                          Les temps simples                                                \n" );
	printf("                          _____________________________________________________ \n  ");
	printf("                         |                1. Le Present                          |\n");
	printf("                           _____________________________________________________\n  ");
	printf("                         |                2. L'imparfait                         |\n");
	printf("                           _____________________________________________________\n  ");
	printf("                         |                3. Passe simple                        |\n");
	printf("                           _____________________________________________________\n  ");
	printf("                         |                4. Futur simple                        |\n");
	printf("                           _____________________________________________________\n  ");
   printf("__________________________________________________________________________________________________________\n  ");
	printf("Veuillez choisir un temps simple\n");
	scanf("%d",&choix);
   
		switch (choix)
		{
			case 1:
				{
               printf("Veuillez saisir un verbe du second groupe\n");
	            scanf("%s",verbe);
                if(strcmp(verbe,"finir")==0 || strcmp(verbe,"bondir")==0 || strcmp(verbe,"trahir")==0 || strcmp(verbe,"transir")==0 ||
    strcmp(verbe,"travestir")==0 || strcmp(verbe,"unir")==0 || strcmp(verbe,"rebatir")==0 || strcmp(verbe,"rebaudir")==0 || strcmp(verbe,"reblanchir")==0 ||
    strcmp(verbe,"vagir")==0 || strcmp(verbe,"verdir")==0 || strcmp(verbe,"vernir")==0 || strcmp(verbe,"vieillir")==0 || strcmp(verbe,"rebondir")==0 ||
    strcmp(verbe,"vioquir")==0 || strcmp(verbe,"vomir")==0 || strcmp(verbe,"vrombir")==0 || strcmp(verbe,"rondir")==0 || strcmp(verbe,"rosir")==0 ||
    strcmp(verbe,"rotir")==0 || strcmp(verbe,"rechampir")==0 || strcmp(verbe,"rouir")==0 || strcmp(verbe,"rougir")==0 || strcmp(verbe,"roussir")==0 ||
    strcmp(verbe,"roustir")==0 || strcmp(verbe,"rugir")==0 || strcmp(verbe,"saisir")==0 || strcmp(verbe,"rechampir")==0 || strcmp(verbe,"salir")==0 ||
    strcmp(verbe,"reconvertir")==0 || strcmp(verbe,"saurir")==0 || strcmp(verbe,"serfouir")==0 || strcmp(verbe,"sertir")==0 || strcmp(verbe,"servir")==0 ||
    strcmp(verbe,"sous-investir")==0 || strcmp(verbe,"subir")==0 || strcmp(verbe,"subvertir")==0 || strcmp(verbe,"superfinir")==0 || strcmp(verbe,"surir")==0 ||
    strcmp(verbe,"surencherir")==0 || strcmp(verbe,"surfleurir")==0 || strcmp(verbe,"surgir")==0 || strcmp(verbe,"surinvestir")==0 || strcmp(verbe,"recrepir")==0 ||
    strcmp(verbe,"tarir")==0 || strcmp(verbe,"redemolir")==0 || strcmp(verbe,"tartir")==0 || strcmp(verbe,"ternir")==0 || strcmp(verbe,"redefinir")==0 ||
    strcmp(verbe,"terrir")==0 || strcmp(verbe,"tiedir")==0 || strcmp(verbe,"ralentir")==0 || strcmp(verbe,"reflechir")==0 || strcmp(verbe,"ramollir")==0 ||
    strcmp(verbe,"refleurir")==0 || strcmp(verbe,"rancir")==0 || strcmp(verbe,"refroidir")==0 || strcmp(verbe,"raplatir")==0 || strcmp(verbe,"rapointir")==0 ||
    strcmp(verbe,"regir")==0 || strcmp(verbe,"rappointir")==0 || strcmp(verbe,"regarnir")==0 || strcmp(verbe,"rassortir")==0 || strcmp(verbe,"ravir")==0 ||
    strcmp(verbe,"ravilir")==0 || strcmp(verbe,"reagir")==0 || strcmp(verbe,"reassortir")==0 || strcmp(verbe,"regrossir")==0 || strcmp(verbe,"reinvestir")==0 ||
    strcmp(verbe,"rejaillir")==0 || strcmp(verbe,"rejouir")==0 || strcmp(verbe,"relargir")==0 || strcmp(verbe,"rembrunir")==0 || strcmp(verbe,"remplir")==0 ||
    strcmp(verbe,"rencherir")==0 || strcmp(verbe,"rendurcir")==0 || strcmp(verbe,"renformir")==0 || strcmp(verbe,"repartir")==0 || strcmp(verbe,"repolir")==0 || 
    strcmp(verbe,"resalir")==0 || strcmp(verbe,"resplendir")==0 || strcmp(verbe,"ressaisir")==0 || strcmp(verbe,"ressurgir")==0 || strcmp(verbe,"resurgir")==0 ||
    strcmp(verbe,"retablir")==0 || strcmp(verbe,"retentir")==0 || strcmp(verbe,"retrecir")==0 || strcmp(verbe,"retoagir")==0 || strcmp(verbe,"reunir")==0 || 
    strcmp(verbe,"reussir")==0 || strcmp(verbe,"reverdir")==0 || strcmp(verbe,"revenir")==0 || strcmp(verbe,"revomir")==0 || strcmp(verbe,"roidir")==0 ||
    strcmp(verbe,"rondir")==0 || strcmp(verbe,"rosir")==0 || strcmp(verbe,"rajeunir")==0 || strcmp(verbe,"raidir")==0 || strcmp(verbe,"ragaillardir")==0 ||
    strcmp(verbe,"prefinir")==0 || strcmp(verbe,"rafraichir")==0 || strcmp(verbe,"ragrandir")==0 || strcmp(verbe,"raffermir")==0 || strcmp(verbe,"rafantir")==0 ||
    strcmp(verbe,"preetablir")==0 || strcmp(verbe,"radoucir")==0 || strcmp(verbe,"racornir")==0 || strcmp(verbe,"raccourcir")==0 || strcmp(verbe,"rabonnir")==0 ||
    strcmp(verbe,"pourrir")==0 || strcmp(verbe,"rabougrir")==0 || strcmp(verbe,"rabetir")==0 || strcmp(verbe,"punir")==0 || strcmp(verbe,"premunir")==0 ||
    strcmp(verbe,"polir")==0 || strcmp(verbe,"petrir")==0 || strcmp(verbe,"pervertir")==0 || strcmp(verbe,"perir")==0 || strcmp(verbe,"patir")==0 ||
    strcmp(verbe,"obeir")==0 || strcmp(verbe,"nourrir")==0 || strcmp(verbe,"palir")==0 || strcmp(verbe,"ourdir")==0 || strcmp(verbe,"obscurcir")==0 ||
    strcmp(verbe,"nordir")==0 || strcmp(verbe,"noircir")==0 || strcmp(verbe,"nantir")==0 || strcmp(verbe,"murir")==0 || strcmp(verbe,"munir")==0 ||
    strcmp(verbe,"mugir")==0 || strcmp(verbe,"mollir")==0 || strcmp(verbe,"moitir")==0 || strcmp(verbe,"moisir")==0 || strcmp(verbe,"mincir")==0 ||
    strcmp(verbe,"meurtrir")==0 || strcmp(verbe,"megir")==0 || strcmp(verbe,"matir")==0 || strcmp(verbe,"louchir")==0 || strcmp(verbe,"lotir")==0 ||
    strcmp(verbe,"abaloudir")==0 || strcmp(verbe,"abasordir")==0 || strcmp(verbe,"abatardir")==0 || strcmp(verbe,"abetir")==0
      || strcmp(verbe,"abolir")==0 || strcmp(verbe,"abonnir")==0 || strcmp(verbe,"aboutir")==0 || strcmp(verbe,"abruitir")==0
      || strcmp(verbe,"accomplir")==0 || strcmp(verbe,"accourcir")==0 || strcmp(verbe,"accroupir")==0 || strcmp(verbe,"adoucir")==0
      || strcmp(verbe,"affadir")==0 || strcmp(verbe,"affaiblir")==0 || strcmp(verbe,"affermir")==0 || strcmp(verbe,"affranchir")==0
      || strcmp(verbe,"agir")==0 || strcmp(verbe,"agonir")==0 || strcmp(verbe,"agrandir")==0 || strcmp(verbe,"agueririr")==0
      || strcmp(verbe,"ahurir")==0 || strcmp(verbe,"aigrir")==0 || strcmp(verbe,"alanguir")==0 || strcmp(verbe,"alentir")==0
      || strcmp(verbe,"allegir")==0 || strcmp(verbe,"alourdir")==0 || strcmp(verbe,"alunir")==0 || strcmp(verbe,"amaigrir")==0
      || strcmp(verbe,"amatir")==0 || strcmp(verbe,"amerrir")==0 || strcmp(verbe,"ameublir")==0 || strcmp(verbe,"amincir")==0
      || strcmp(verbe,"amoindrir")==0 || strcmp(verbe,"amollir")==0 || strcmp(verbe,"amortir")==0 || strcmp(verbe,"amuir")==0
      || strcmp(verbe,"aneantir")==0 || strcmp(verbe,"anoblir")==0 || strcmp(verbe,"anordir")==0 || strcmp(verbe,"aplanir")==0
      || strcmp(verbe,"aplatir")==0 || strcmp(verbe,"appauvrir")==0 || strcmp(verbe,"appesantir")==0 || strcmp(verbe,"applaudir")==0
      || strcmp(verbe,"appointir")==0 || strcmp(verbe,"approfondir")==0 || strcmp(verbe,"arrondir")==0 || strcmp(verbe,"assagir")==0
      || strcmp(verbe,"assainir")==0 || strcmp(verbe,"asservir")==0 || strcmp(verbe,"assombrir")==0 || strcmp(verbe,"assortir")==0
      || strcmp(verbe,"assoupir")==0 || strcmp(verbe,"assouplir")==0 || strcmp(verbe,"assourdir")==0 || strcmp(verbe,"assouvrir")==0
      || strcmp(verbe,"assujettir")==0 || strcmp(verbe,"attendrir")==0 || strcmp(verbe,"atterir")==0 || strcmp(verbe,"attiedir")==0
      || strcmp(verbe,"avachir")==0 || strcmp(verbe,"avertir")==0  || strcmp(verbe,"aveulir")==0 || strcmp(verbe,"avilir")==0
      || strcmp(verbe,"aveulir")==0 || strcmp(verbe,"bannir")==0 || strcmp(verbe,"barrir")==0 || strcmp(verbe,"batir")==0
      || strcmp(verbe,"baudir")==0 || strcmp(verbe,"benir")==0 || strcmp(verbe,"blanchir")==0 || strcmp(verbe,"blemir")==0
      || strcmp(verbe,"blettir")==0 || strcmp(verbe,"bleuir")==0 || strcmp(verbe,"blondir")==0 || strcmp(verbe,"bonir")==0
      || strcmp(verbe,"bondir")==0 || strcmp(verbe,"bonnir")==0 || strcmp(verbe,"bouffir")==0 || strcmp(verbe,"brandir")==0
      || strcmp(verbe,"brouir")==0 || strcmp(verbe,"brunir")==0 ||  strcmp(verbe,"calmir")==0 || strcmp(verbe,"candir")==0
      || strcmp(verbe,"catir")==0 || strcmp(verbe,"chancir")==0 || strcmp(verbe,"chauvir")==0 || strcmp(verbe,"cherir")==0
      || strcmp(verbe,"choisir")==0 || strcmp(verbe,"clapir")==0 || strcmp(verbe,"compatir")==0 || strcmp(verbe,"conir")==0
      || strcmp(verbe,"conjouir")==0 || strcmp(verbe,"convertir")==0 || strcmp(verbe,"cotir")==0 || strcmp(verbe,"crepir")==0
      || strcmp(verbe,"cronir")==0 || strcmp(verbe,"crounir")==0 || strcmp(verbe,"croupir")==0 || strcmp(verbe,"debatir")==0
      || strcmp(verbe,"debleuir")==0 || strcmp(verbe,"debrutir")==0 || strcmp(verbe,"decatir")==0 || strcmp(verbe,"decrepir")==0
      || strcmp(verbe,"definir")==0 || strcmp(verbe,"deflechir")==0 || strcmp(verbe,"defleurir")==0 || strcmp(verbe,"defraichir")==0
      || strcmp(verbe,"degarnir")==0 || strcmp(verbe,"degauchir")==0 || strcmp(verbe,"deglutir")==0 || strcmp(verbe,"degourdir")==0
      || strcmp(verbe,"degrossir")==0 || strcmp(verbe,"deguerpir")==0 || strcmp(verbe,"dejaunir")==0 || strcmp(verbe,"demaigrir")==0
      || strcmp(verbe,"demolir")==0 || strcmp(verbe,"demunir")==0 || strcmp(verbe,"denantir")==0 || strcmp(verbe,"denoircir")==0
      || strcmp(verbe,"deperir")==0 || strcmp(verbe,"depolir")==0 || strcmp(verbe,"deraidir")==0 || strcmp(verbe,"derondir")==0
      || strcmp(verbe,"derougir")==0 || strcmp(verbe,"desassortir")==0 || strcmp(verbe,"desemplir")==0 || strcmp(verbe,"desengourdir")==0
      || strcmp(verbe,"desenlaidir")==0 || strcmp(verbe,"desetablir")==0 || strcmp(verbe,"desobeir")==0 || strcmp(verbe,"desepaissir")==0
      || strcmp(verbe,"desinvestir")==0 || strcmp(verbe,"dessaisir")==0 || strcmp(verbe,"dessertir")==0 || strcmp(verbe,"desunir")==0
      || strcmp(verbe,"deverdir")==0 || strcmp(verbe,"devernir")==0 || strcmp(verbe,"divertir")==0 || strcmp(verbe,"doucir")==0
      || strcmp(verbe,"durcir")==0 || strcmp(verbe,"ebahir")==0 || strcmp(verbe,"ebaubir")==0 || strcmp(verbe,"ebaudir")==0
      || strcmp(verbe,"eblouir")==0 || strcmp(verbe,"ecartir")==0 || strcmp(verbe,"echampir")==0 || strcmp(verbe,"eclaicir")==0
      || strcmp(verbe,"ecrouir")==0 || strcmp(verbe,"effleurir")==0 || strcmp(verbe,"elargir")==0 || strcmp(verbe,"elegir")==0
      || strcmp(verbe,"embellir")==0 || strcmp(verbe,"emboutir")==0 || strcmp(verbe,"embrunir")==0 || strcmp(verbe,"emplir")==0 
      || strcmp(verbe,"empuantir")==0 || strcmp(verbe,"encherir")==0 || strcmp(verbe,"endolorir")==0 || strcmp(verbe,"endurcir")==0
      || strcmp(verbe,"enforcir")==0 || strcmp(verbe,"enfouir")==0 || strcmp(verbe,"engloutir")==0 || strcmp(verbe,"engourdir")==0
      || strcmp(verbe,"enhardir")==0 || strcmp(verbe,"enlaidir")==0 || strcmp(verbe,"ennoblir")==0 || strcmp(verbe,"enorgueillir")==0
      || strcmp(verbe,"enrichir")==0 || strcmp(verbe,"ensevelir")==0 || strcmp(verbe,"envahir")==0 || strcmp(verbe,"envieillir")==0
      || strcmp(verbe,"epaissir")==0 || strcmp(verbe,"epanouir")==0 || strcmp(verbe,"epoutir")==0 || strcmp(verbe,"equarrir")==0
      || strcmp(verbe,"estourbir")==0 || strcmp(verbe,"etablir")==0  || strcmp(verbe,"etourdir")==0 || strcmp(verbe,"etrecir")==0
      || strcmp(verbe,"evanouir")==0 || strcmp(verbe,"faiblir")==0 || strcmp(verbe,"farcir")==0 || strcmp(verbe,"finir")==0
      || strcmp(verbe,"flechir")==0 || strcmp(verbe,"fletrir")==0 || strcmp(verbe,"fleurir")==0 || strcmp(verbe,"forcir")==0
      || strcmp(verbe,"fouir")==0 || strcmp(verbe,"fourbir")==0 || strcmp(verbe,"fournir")==0 || strcmp(verbe,"fraichir")==0 
      || strcmp(verbe,"franchir")==0 || strcmp(verbe,"fremir")==0 || strcmp(verbe,"froidir")==0 || strcmp(verbe,"garantir")==0
      || strcmp(verbe,"garnir")==0 || strcmp(verbe,"gauchir")==0 || strcmp(verbe,"gaudir")==0 || strcmp(verbe,"gemir")==0
      || strcmp(verbe,"glapir")==0 || strcmp(verbe,"glatir")==0 || strcmp(verbe,"grandir")==0 || strcmp(verbe,"gravir")==0 
      || strcmp(verbe,"grossir")==0 || strcmp(verbe,"guerir")==0 || strcmp(verbe,"hair")==0 || strcmp(verbe,"havir")==0
      || strcmp(verbe,"hennir")==0 || strcmp(verbe,"honnir")==0 || strcmp(verbe,"hourdir")==0 || strcmp(verbe,"impatir")==0
      || strcmp(verbe,"inflechir")==0 || strcmp(verbe,"interagir")==0 || strcmp(verbe,"intervertir")==0 
      || strcmp(verbe,"invertir")==0 || strcmp(verbe,"investir")==0 || strcmp(verbe,"jaillir")==0  || strcmp(verbe,"jaunir")==0 
      || strcmp(verbe,"jouir")==0)
               {
                  verbe[strlen(verbe)-2]='\0';
						printf("je %sis \n",verbe);
						printf("tu %sis \n",verbe);
						printf("il/elle %sit\n",verbe);
						printf("nous %sissons\n",verbe);
						printf("vous %sissez\n",verbe);
						printf("ils/elles %sissent\n",verbe);
               }
               else if (strcmp(verbe,"s'abatardir")==0 || strcmp(verbe,"s'accroupir")==0 || strcmp(verbe,"s'affaiblir")==0
                  || strcmp(verbe,"s'agir")==0 || strcmp(verbe,"s'agrandir")==0 || strcmp(verbe,"s'amoindrir")==0
                  || strcmp(verbe,"s'anoblir")==0 || strcmp(verbe,"s'aplanir")==0 || strcmp(verbe,"s'appesantir")==0
                  || strcmp(verbe,"s'assagir")==0 || strcmp(verbe,"s'asservir")==0 || strcmp(verbe,"s'assoupir")==0
                  || strcmp(verbe,"s'assouvir")==0 || strcmp(verbe,"s'avachir")==0 || strcmp(verbe,"s'aveulir")==0
                  || strcmp(verbe,"s'elargir")==0 || strcmp(verbe,"s'embellir")==0 || strcmp(verbe,"s'endurcir")==0
                  || strcmp(verbe,"s'enhardir")==0 || strcmp(verbe,"s'ensevelir")==0 || strcmp(verbe,"s'epaissir")==0
                  || strcmp(verbe,"s'épaissir")==0 || strcmp(verbe,"s'étrécir")==0 || strcmp(verbe,"s'obscurcir")==0
                  || strcmp(verbe,"s'accomplir")==0 || strcmp(verbe,"s'affranchir")==0 || strcmp(verbe,"s'alanguir")==0
                  || strcmp(verbe,"s'amincir")==0 || strcmp(verbe,"s'amortir")==0 || strcmp(verbe,"s'aneantir")==0
                  || strcmp(verbe,"s'appauvrir")==0 || strcmp(verbe,"s'arrondir")==0 || strcmp(verbe,"s'assortir")==0
                  || strcmp(verbe,"s'assourdir")==0 || strcmp(verbe,"s'attendrir")==0 || strcmp(verbe,"s'attiedir")==0
                  || strcmp(verbe,"s'emplir")==0 || strcmp(verbe,"s'engourdir")==0 || strcmp(verbe,"s'enrichir")==0
                  || strcmp(verbe,"s'entre-hair")==0 || strcmp(verbe,"s'envieillir")==0 || strcmp(verbe,"s'etourdir")==0
                  || strcmp(verbe,"s'evanouir")==0 || strcmp(verbe,"s'investir")==0 || strcmp(verbe,"s'unir")==0
                  || strcmp(verbe,"s'abetir")==0 || strcmp(verbe,"s'abonnir")==0 || strcmp(verbe,"s'abrutir")==0
                  || strcmp(verbe,"s'adoucir")==0 || strcmp(verbe,"s'affermir")==0 || strcmp(verbe,"s'aguerrir")==0
                  || strcmp(verbe,"s'aigrir")==0 || strcmp(verbe,"s'alourdir")==0 || strcmp(verbe,"s'amaigrir")==0
                  || strcmp(verbe,"s'amollir")==0 || strcmp(verbe,"s'amuïr")==0 || strcmp(verbe,"s'aplatir")==0
                  || strcmp(verbe,"s'applaudir")==0 || strcmp(verbe,"s'approfondir")==0 || strcmp(verbe,"s'assombrir")==0
                  || strcmp(verbe,"s'assouplir")==0 || strcmp(verbe,"s'assujettir")==0 || strcmp(verbe,"s'avilir")==0
                  || strcmp(verbe,"s'ebahir")==0 || strcmp(verbe,"s'eclaircir")==0 || strcmp(verbe,"s'engloutir")==0
                  || strcmp(verbe,"s'enlaidir")==0 || strcmp(verbe,"s'enorgueillir")==0 || strcmp(verbe,"s'epanouir")==0
                  || strcmp(verbe,"s'esbaudir")==0 || strcmp(verbe,"s'établir")==0 || strcmp(verbe,"s'inflechir")==0
                  || strcmp(verbe,"s'ourdir")==0 )
               {
                  memmove(verbe,verbe+2,20);
                  verbe[strlen(verbe)-2]='\0';
						printf("je m'%sis \n",verbe);
						printf("tu t'%sis \n",verbe);
						printf("il/elle s'%sit\n",verbe);
						printf("nous nous %sissons\n",verbe);
						printf("vous vous %sissez\n",verbe);
						printf("ils/elles s'%sissent\n",verbe);
               }
               else if (strcmp(verbe,"se_batir")==0 || strcmp(verbe,"se_blanchir")==0 || strcmp(verbe,"se_blottir")==0 || strcmp(verbe,"se_brunir")==0 ||
         strcmp(verbe,"se_chancir")==0 || strcmp(verbe,"se_clapir")==0 || strcmp(verbe,"se_conjouir")==0 || strcmp(verbe,"se_convertir")==0 || strcmp(verbe,"se_decatir")==0 ||
         strcmp(verbe,"se_decrepir")==0 || strcmp(verbe,"se_definir")==0 || strcmp(verbe,"se_degarnir")==0 || strcmp(verbe,"se_degourdir")==0 || strcmp(verbe,"se_degrossir")==0 ||
         strcmp(verbe,"se_demunir")==0 || strcmp(verbe,"se_depolir")==0 || strcmp(verbe,"se_deraidir")==0 || strcmp(verbe,"se_desemplir")==0 || strcmp(verbe,"se_dessaisir")==0 ||
         strcmp(verbe,"se_desunir")==0 || strcmp(verbe,"se_divertir")==0 || strcmp(verbe,"se_durcir")==0 || strcmp(verbe,"se_farcir")==0 || strcmp(verbe,"se_flechir")==0 ||
         strcmp(verbe,"se_fletrir")==0 || strcmp(verbe,"se_fleurir")==0 || strcmp(verbe,"se_fournir")==0 || strcmp(verbe,"se_garnir")==0 || strcmp(verbe,"se_gauchir")==0 ||
         strcmp(verbe,"se_grandir")==0 || strcmp(verbe,"se_guerir")==0 || strcmp(verbe,"se_hair")==0 || strcmp(verbe,"se_languir")==0 || strcmp(verbe,"se_munir")==0 ||
         strcmp(verbe,"se_nantir")==0 || strcmp(verbe,"se_noircir")==0 || strcmp(verbe,"se_nourrir")==0 || strcmp(verbe,"se_pervertir")==0 || strcmp(verbe,"se_polir")==0 ||
         strcmp(verbe,"se_pourrir")==0 || strcmp(verbe,"se_premunir")==0 || strcmp(verbe,"se_rabougrir")==0 || strcmp(verbe,"se_raccourcir")==0 || strcmp(verbe,"se_racornir")==0 ||
         strcmp(verbe,"se_radoucir")==0 || strcmp(verbe,"se_raffermir")==0 || strcmp(verbe,"se_rafraichir")==0 || strcmp(verbe,"se_raidir")==0 || strcmp(verbe,"se_rajeunir")==0 ||
         strcmp(verbe,"se_ralentir")==0 || strcmp(verbe,"se_ramollir")==0 || strcmp(verbe,"se_rancir")==0 || strcmp(verbe,"se_rapointir")==0 || strcmp(verbe,"se_rappointir")==0 ||
         strcmp(verbe,"se_reassortir")==0 || strcmp(verbe,"se_reconvertir")==0 || strcmp(verbe,"se_reflechir")==0 || strcmp(verbe,"se_refroidir")==0 || strcmp(verbe,"se_rejouir")==0 ||
         strcmp(verbe,"se_rembrunir")==0 || strcmp(verbe,"se_remplir")==0 || strcmp(verbe,"se_repartir")==0 || strcmp(verbe,"se_resalir")==0 || strcmp(verbe,"se_ressaisir")==0 ||
         strcmp(verbe,"se_retablir")==0 || strcmp(verbe,"se_retrecir")==0 || strcmp(verbe,"se_reunir")==0 || strcmp(verbe,"se_roidir")==0 || strcmp(verbe,"se_rotir")==0 ||
         strcmp(verbe,"se_saisir")==0 || strcmp(verbe,"se_salir")==0 || strcmp(verbe,"se_tapir")==0 || strcmp(verbe,"se_tarir")==0 || strcmp(verbe,"se_ternir")==0 ||
         strcmp(verbe,"se_travestir")==0 || strcmp(verbe,"se_vieillir")==0)
         {
                  memmove(verbe,verbe+3,20);
                  verbe[strlen(verbe)-2]='\0';
						printf("je me %sis \n",verbe);
						printf("tu te %sis \n",verbe);
						printf("il/elle se %sit\n",verbe);
						printf("nous nous %sissons\n",verbe);
						printf("vous vous %sissez\n",verbe);
						printf("ils/elles se %sissent\n",verbe);
         }
               else printf("Ce verbe n'est pas du second groupe \n");
						break;
				}
		
		case 2 :
			{
            printf("Veuillez saisir un verbe du second groupe\n");
	            scanf("%s",verbe);
             if(strcmp(verbe,"finir")==0 || strcmp(verbe,"bondir")==0 || strcmp(verbe,"trahir")==0 || strcmp(verbe,"transir")==0 ||
    strcmp(verbe,"travestir")==0 || strcmp(verbe,"unir")==0 || strcmp(verbe,"rebatir")==0 || strcmp(verbe,"rebaudir")==0 || strcmp(verbe,"reblanchir")==0 ||
    strcmp(verbe,"vagir")==0 || strcmp(verbe,"verdir")==0 || strcmp(verbe,"vernir")==0 || strcmp(verbe,"vieillir")==0 || strcmp(verbe,"rebondir")==0 ||
    strcmp(verbe,"vioquir")==0 || strcmp(verbe,"vomir")==0 || strcmp(verbe,"vrombir")==0 || strcmp(verbe,"rondir")==0 || strcmp(verbe,"rosir")==0 ||
    strcmp(verbe,"rotir")==0 || strcmp(verbe,"rechampir")==0 || strcmp(verbe,"rouir")==0 || strcmp(verbe,"rougir")==0 || strcmp(verbe,"roussir")==0 ||
    strcmp(verbe,"roustir")==0 || strcmp(verbe,"rugir")==0 || strcmp(verbe,"saisir")==0 || strcmp(verbe,"rechampir")==0 || strcmp(verbe,"salir")==0 ||
    strcmp(verbe,"reconvertir")==0 || strcmp(verbe,"saurir")==0 || strcmp(verbe,"serfouir")==0 || strcmp(verbe,"sertir")==0 || strcmp(verbe,"servir")==0 ||
    strcmp(verbe,"sous-investir")==0 || strcmp(verbe,"subir")==0 || strcmp(verbe,"subvertir")==0 || strcmp(verbe,"superfinir")==0 || strcmp(verbe,"surir")==0 ||
    strcmp(verbe,"surencherir")==0 || strcmp(verbe,"surfleurir")==0 || strcmp(verbe,"surgir")==0 || strcmp(verbe,"surinvestir")==0 || strcmp(verbe,"recrepir")==0 ||
    strcmp(verbe,"tarir")==0 || strcmp(verbe,"redemolir")==0 || strcmp(verbe,"tartir")==0 || strcmp(verbe,"ternir")==0 || strcmp(verbe,"redefinir")==0 ||
    strcmp(verbe,"terrir")==0 || strcmp(verbe,"tiedir")==0 || strcmp(verbe,"ralentir")==0 || strcmp(verbe,"reflechir")==0 || strcmp(verbe,"ramollir")==0 ||
    strcmp(verbe,"refleurir")==0 || strcmp(verbe,"rancir")==0 || strcmp(verbe,"refroidir")==0 || strcmp(verbe,"raplatir")==0 || strcmp(verbe,"rapointir")==0 ||
    strcmp(verbe,"regir")==0 || strcmp(verbe,"rappointir")==0 || strcmp(verbe,"regarnir")==0 || strcmp(verbe,"rassortir")==0 || strcmp(verbe,"ravir")==0 ||
    strcmp(verbe,"ravilir")==0 || strcmp(verbe,"reagir")==0 || strcmp(verbe,"reassortir")==0 || strcmp(verbe,"regrossir")==0 || strcmp(verbe,"reinvestir")==0 ||
    strcmp(verbe,"rejaillir")==0 || strcmp(verbe,"rejouir")==0 || strcmp(verbe,"relargir")==0 || strcmp(verbe,"rembrunir")==0 || strcmp(verbe,"remplir")==0 ||
    strcmp(verbe,"rencherir")==0 || strcmp(verbe,"rendurcir")==0 || strcmp(verbe,"renformir")==0 || strcmp(verbe,"repartir")==0 || strcmp(verbe,"repolir")==0 || 
    strcmp(verbe,"resalir")==0 || strcmp(verbe,"resplendir")==0 || strcmp(verbe,"ressaisir")==0 || strcmp(verbe,"ressurgir")==0 || strcmp(verbe,"resurgir")==0 ||
    strcmp(verbe,"retablir")==0 || strcmp(verbe,"retentir")==0 || strcmp(verbe,"retrecir")==0 || strcmp(verbe,"retoagir")==0 || strcmp(verbe,"reunir")==0 || 
    strcmp(verbe,"reussir")==0 || strcmp(verbe,"reverdir")==0 || strcmp(verbe,"revenir")==0 || strcmp(verbe,"revomir")==0 || strcmp(verbe,"roidir")==0 ||
    strcmp(verbe,"rondir")==0 || strcmp(verbe,"rosir")==0 || strcmp(verbe,"rajeunir")==0 || strcmp(verbe,"raidir")==0 || strcmp(verbe,"ragaillardir")==0 ||
    strcmp(verbe,"prefinir")==0 || strcmp(verbe,"rafraichir")==0 || strcmp(verbe,"ragrandir")==0 || strcmp(verbe,"raffermir")==0 || strcmp(verbe,"rafantir")==0 ||
    strcmp(verbe,"preetablir")==0 || strcmp(verbe,"radoucir")==0 || strcmp(verbe,"racornir")==0 || strcmp(verbe,"raccourcir")==0 || strcmp(verbe,"rabonnir")==0 ||
    strcmp(verbe,"pourrir")==0 || strcmp(verbe,"rabougrir")==0 || strcmp(verbe,"rabetir")==0 || strcmp(verbe,"punir")==0 || strcmp(verbe,"premunir")==0 ||
    strcmp(verbe,"polir")==0 || strcmp(verbe,"petrir")==0 || strcmp(verbe,"pervertir")==0 || strcmp(verbe,"perir")==0 || strcmp(verbe,"patir")==0 ||
    strcmp(verbe,"obeir")==0 || strcmp(verbe,"nourrir")==0 || strcmp(verbe,"palir")==0 || strcmp(verbe,"ourdir")==0 || strcmp(verbe,"obscurcir")==0 ||
    strcmp(verbe,"nordir")==0 || strcmp(verbe,"noircir")==0 || strcmp(verbe,"nantir")==0 || strcmp(verbe,"murir")==0 || strcmp(verbe,"munir")==0 ||
    strcmp(verbe,"mugir")==0 || strcmp(verbe,"mollir")==0 || strcmp(verbe,"moitir")==0 || strcmp(verbe,"moisir")==0 || strcmp(verbe,"mincir")==0 ||
    strcmp(verbe,"meurtrir")==0 || strcmp(verbe,"megir")==0 || strcmp(verbe,"matir")==0 || strcmp(verbe,"louchir")==0 || strcmp(verbe,"lotir")==0 ||
    strcmp(verbe,"abaloudir")==0 || strcmp(verbe,"abasordir")==0 || strcmp(verbe,"abatardir")==0 || strcmp(verbe,"abetir")==0
      || strcmp(verbe,"abolir")==0 || strcmp(verbe,"abonnir")==0 || strcmp(verbe,"aboutir")==0 || strcmp(verbe,"abruitir")==0
      || strcmp(verbe,"accomplir")==0 || strcmp(verbe,"accourcir")==0 || strcmp(verbe,"accroupir")==0 || strcmp(verbe,"adoucir")==0
      || strcmp(verbe,"affadir")==0 || strcmp(verbe,"affaiblir")==0 || strcmp(verbe,"affermir")==0 || strcmp(verbe,"affranchir")==0
      || strcmp(verbe,"agir")==0 || strcmp(verbe,"agonir")==0 || strcmp(verbe,"agrandir")==0 || strcmp(verbe,"agueririr")==0
      || strcmp(verbe,"ahurir")==0 || strcmp(verbe,"aigrir")==0 || strcmp(verbe,"alanguir")==0 || strcmp(verbe,"alentir")==0
      || strcmp(verbe,"allegir")==0 || strcmp(verbe,"alourdir")==0 || strcmp(verbe,"alunir")==0 || strcmp(verbe,"amaigrir")==0
      || strcmp(verbe,"amatir")==0 || strcmp(verbe,"amerrir")==0 || strcmp(verbe,"ameublir")==0 || strcmp(verbe,"amincir")==0
      || strcmp(verbe,"amoindrir")==0 || strcmp(verbe,"amollir")==0 || strcmp(verbe,"amortir")==0 || strcmp(verbe,"amuir")==0
      || strcmp(verbe,"aneantir")==0 || strcmp(verbe,"anoblir")==0 || strcmp(verbe,"anordir")==0 || strcmp(verbe,"aplanir")==0
      || strcmp(verbe,"aplatir")==0 || strcmp(verbe,"appauvrir")==0 || strcmp(verbe,"appesantir")==0 || strcmp(verbe,"applaudir")==0
      || strcmp(verbe,"appointir")==0 || strcmp(verbe,"approfondir")==0 || strcmp(verbe,"arrondir")==0 || strcmp(verbe,"assagir")==0
      || strcmp(verbe,"assainir")==0 || strcmp(verbe,"asservir")==0 || strcmp(verbe,"assombrir")==0 || strcmp(verbe,"assortir")==0
      || strcmp(verbe,"assoupir")==0 || strcmp(verbe,"assouplir")==0 || strcmp(verbe,"assourdir")==0 || strcmp(verbe,"assouvrir")==0
      || strcmp(verbe,"assujettir")==0 || strcmp(verbe,"attendrir")==0 || strcmp(verbe,"atterir")==0 || strcmp(verbe,"attiedir")==0
      || strcmp(verbe,"avachir")==0 || strcmp(verbe,"avertir")==0  || strcmp(verbe,"aveulir")==0 || strcmp(verbe,"avilir")==0
      || strcmp(verbe,"aveulir")==0 || strcmp(verbe,"bannir")==0 || strcmp(verbe,"barrir")==0 || strcmp(verbe,"batir")==0
      || strcmp(verbe,"baudir")==0 || strcmp(verbe,"benir")==0 || strcmp(verbe,"blanchir")==0 || strcmp(verbe,"blemir")==0
      || strcmp(verbe,"blettir")==0 || strcmp(verbe,"bleuir")==0 || strcmp(verbe,"blondir")==0 || strcmp(verbe,"bonir")==0
      || strcmp(verbe,"bondir")==0 || strcmp(verbe,"bonnir")==0 || strcmp(verbe,"bouffir")==0 || strcmp(verbe,"brandir")==0
      || strcmp(verbe,"brouir")==0 || strcmp(verbe,"brunir")==0 ||  strcmp(verbe,"calmir")==0 || strcmp(verbe,"candir")==0
      || strcmp(verbe,"catir")==0 || strcmp(verbe,"chancir")==0 || strcmp(verbe,"chauvir")==0 || strcmp(verbe,"cherir")==0
      || strcmp(verbe,"choisir")==0 || strcmp(verbe,"clapir")==0 || strcmp(verbe,"compatir")==0 || strcmp(verbe,"conir")==0
      || strcmp(verbe,"conjouir")==0 || strcmp(verbe,"convertir")==0 || strcmp(verbe,"cotir")==0 || strcmp(verbe,"crepir")==0
      || strcmp(verbe,"cronir")==0 || strcmp(verbe,"crounir")==0 || strcmp(verbe,"croupir")==0 || strcmp(verbe,"debatir")==0
      || strcmp(verbe,"debleuir")==0 || strcmp(verbe,"debrutir")==0 || strcmp(verbe,"decatir")==0 || strcmp(verbe,"decrepir")==0
      || strcmp(verbe,"definir")==0 || strcmp(verbe,"deflechir")==0 || strcmp(verbe,"defleurir")==0 || strcmp(verbe,"defraichir")==0
      || strcmp(verbe,"degarnir")==0 || strcmp(verbe,"degauchir")==0 || strcmp(verbe,"deglutir")==0 || strcmp(verbe,"degourdir")==0
      || strcmp(verbe,"degrossir")==0 || strcmp(verbe,"deguerpir")==0 || strcmp(verbe,"dejaunir")==0 || strcmp(verbe,"demaigrir")==0
      || strcmp(verbe,"demolir")==0 || strcmp(verbe,"demunir")==0 || strcmp(verbe,"denantir")==0 || strcmp(verbe,"denoircir")==0
      || strcmp(verbe,"deperir")==0 || strcmp(verbe,"depolir")==0 || strcmp(verbe,"deraidir")==0 || strcmp(verbe,"derondir")==0
      || strcmp(verbe,"derougir")==0 || strcmp(verbe,"desassortir")==0 || strcmp(verbe,"desemplir")==0 || strcmp(verbe,"desengourdir")==0
      || strcmp(verbe,"desenlaidir")==0 || strcmp(verbe,"desetablir")==0 || strcmp(verbe,"desobeir")==0 || strcmp(verbe,"desepaissir")==0
      || strcmp(verbe,"desinvestir")==0 || strcmp(verbe,"dessaisir")==0 || strcmp(verbe,"dessertir")==0 || strcmp(verbe,"desunir")==0
      || strcmp(verbe,"deverdir")==0 || strcmp(verbe,"devernir")==0 || strcmp(verbe,"divertir")==0 || strcmp(verbe,"doucir")==0
      || strcmp(verbe,"durcir")==0 || strcmp(verbe,"ebahir")==0 || strcmp(verbe,"ebaubir")==0 || strcmp(verbe,"ebaudir")==0
      || strcmp(verbe,"eblouir")==0 || strcmp(verbe,"ecartir")==0 || strcmp(verbe,"echampir")==0 || strcmp(verbe,"eclaicir")==0
      || strcmp(verbe,"ecrouir")==0 || strcmp(verbe,"effleurir")==0 || strcmp(verbe,"elargir")==0 || strcmp(verbe,"elegir")==0
      || strcmp(verbe,"embellir")==0 || strcmp(verbe,"emboutir")==0 || strcmp(verbe,"embrunir")==0 || strcmp(verbe,"emplir")==0 
      || strcmp(verbe,"empuantir")==0 || strcmp(verbe,"encherir")==0 || strcmp(verbe,"endolorir")==0 || strcmp(verbe,"endurcir")==0
      || strcmp(verbe,"enforcir")==0 || strcmp(verbe,"enfouir")==0 || strcmp(verbe,"engloutir")==0 || strcmp(verbe,"engourdir")==0
      || strcmp(verbe,"enhardir")==0 || strcmp(verbe,"enlaidir")==0 || strcmp(verbe,"ennoblir")==0 || strcmp(verbe,"enorgueillir")==0
      || strcmp(verbe,"enrichir")==0 || strcmp(verbe,"ensevelir")==0 || strcmp(verbe,"envahir")==0 || strcmp(verbe,"envieillir")==0
      || strcmp(verbe,"epaissir")==0 || strcmp(verbe,"epanouir")==0 || strcmp(verbe,"epoutir")==0 || strcmp(verbe,"equarrir")==0
      || strcmp(verbe,"estourbir")==0 || strcmp(verbe,"etablir")==0  || strcmp(verbe,"etourdir")==0 || strcmp(verbe,"etrecir")==0
      || strcmp(verbe,"evanouir")==0 || strcmp(verbe,"faiblir")==0 || strcmp(verbe,"farcir")==0 || strcmp(verbe,"finir")==0
      || strcmp(verbe,"flechir")==0 || strcmp(verbe,"fletrir")==0 || strcmp(verbe,"fleurir")==0 || strcmp(verbe,"forcir")==0
      || strcmp(verbe,"fouir")==0 || strcmp(verbe,"fourbir")==0 || strcmp(verbe,"fournir")==0 || strcmp(verbe,"fraichir")==0 
      || strcmp(verbe,"franchir")==0 || strcmp(verbe,"fremir")==0 || strcmp(verbe,"froidir")==0 || strcmp(verbe,"garantir")==0
      || strcmp(verbe,"garnir")==0 || strcmp(verbe,"gauchir")==0 || strcmp(verbe,"gaudir")==0 || strcmp(verbe,"gemir")==0
      || strcmp(verbe,"glapir")==0 || strcmp(verbe,"glatir")==0 || strcmp(verbe,"grandir")==0 || strcmp(verbe,"gravir")==0 
      || strcmp(verbe,"grossir")==0 || strcmp(verbe,"guerir")==0 || strcmp(verbe,"hair")==0 || strcmp(verbe,"havir")==0
      || strcmp(verbe,"hennir")==0 || strcmp(verbe,"honnir")==0 || strcmp(verbe,"hourdir")==0 || strcmp(verbe,"impatir")==0
      || strcmp(verbe,"inflechir")==0 || strcmp(verbe,"interagir")==0 || strcmp(verbe,"intervertir")==0 
      || strcmp(verbe,"invertir")==0 || strcmp(verbe,"investir")==0 || strcmp(verbe,"jaillir")==0  || strcmp(verbe,"jaunir")==0 
      || strcmp(verbe,"jouir")==0)
        {
               verbe[strlen(verbe)-2]='\0';
					printf("je %sissais \n",verbe);
					printf("tu %sissais \n",verbe);
					printf("il/elle %sissait\n",verbe);
					printf("nous %sissions\n",verbe);
					printf("vous %sissiez\n",verbe);
					printf("ils/elles %sissaient\n",verbe);
        }
        else if (strcmp(verbe,"s'abatardir")==0 || strcmp(verbe,"s'accroupir")==0 || strcmp(verbe,"s'affaiblir")==0
                  || strcmp(verbe,"s'agir")==0 || strcmp(verbe,"s'agrandir")==0 || strcmp(verbe,"s'amoindrir")==0
                  || strcmp(verbe,"s'anoblir")==0 || strcmp(verbe,"s'aplanir")==0 || strcmp(verbe,"s'appesantir")==0
                  || strcmp(verbe,"s'assagir")==0 || strcmp(verbe,"s'asservir")==0 || strcmp(verbe,"s'assoupir")==0
                  || strcmp(verbe,"s'assouvir")==0 || strcmp(verbe,"s'avachir")==0 || strcmp(verbe,"s'aveulir")==0
                  || strcmp(verbe,"s'elargir")==0 || strcmp(verbe,"s'embellir")==0 || strcmp(verbe,"s'endurcir")==0
                  || strcmp(verbe,"s'enhardir")==0 || strcmp(verbe,"s'ensevelir")==0 || strcmp(verbe,"s'epaissir")==0
                  || strcmp(verbe,"s'épaissir")==0 || strcmp(verbe,"s'étrécir")==0 || strcmp(verbe,"s'obscurcir")==0
                  || strcmp(verbe,"s'accomplir")==0 || strcmp(verbe,"s'affranchir")==0 || strcmp(verbe,"s'alanguir")==0
                  || strcmp(verbe,"s'amincir")==0 || strcmp(verbe,"s'amortir")==0 || strcmp(verbe,"s'aneantir")==0
                  || strcmp(verbe,"s'appauvrir")==0 || strcmp(verbe,"s'arrondir")==0 || strcmp(verbe,"s'assortir")==0
                  || strcmp(verbe,"s'assourdir")==0 || strcmp(verbe,"s'attendrir")==0 || strcmp(verbe,"s'attiedir")==0
                  || strcmp(verbe,"s'emplir")==0 || strcmp(verbe,"s'engourdir")==0 || strcmp(verbe,"s'enrichir")==0
                  || strcmp(verbe,"s'entre-hair")==0 || strcmp(verbe,"s'envieillir")==0 || strcmp(verbe,"s'etourdir")==0
                  || strcmp(verbe,"s'evanouir")==0 || strcmp(verbe,"s'investir")==0 || strcmp(verbe,"s'unir")==0
                  || strcmp(verbe,"s'abetir")==0 || strcmp(verbe,"s'abonnir")==0 || strcmp(verbe,"s'abrutir")==0
                  || strcmp(verbe,"s'adoucir")==0 || strcmp(verbe,"s'affermir")==0 || strcmp(verbe,"s'aguerrir")==0
                  || strcmp(verbe,"s'aigrir")==0 || strcmp(verbe,"s'alourdir")==0 || strcmp(verbe,"s'amaigrir")==0
                  || strcmp(verbe,"s'amollir")==0 || strcmp(verbe,"s'amuïr")==0 || strcmp(verbe,"s'aplatir")==0
                  || strcmp(verbe,"s'applaudir")==0 || strcmp(verbe,"s'approfondir")==0 || strcmp(verbe,"s'assombrir")==0
                  || strcmp(verbe,"s'assouplir")==0 || strcmp(verbe,"s'assujettir")==0 || strcmp(verbe,"s'avilir")==0
                  || strcmp(verbe,"s'ebahir")==0 || strcmp(verbe,"s'eclaircir")==0 || strcmp(verbe,"s'engloutir")==0
                  || strcmp(verbe,"s'enlaidir")==0 || strcmp(verbe,"s'enorgueillir")==0 || strcmp(verbe,"s'epanouir")==0
                  || strcmp(verbe,"s'esbaudir")==0 || strcmp(verbe,"s'établir")==0 || strcmp(verbe,"s'inflechir")==0
                  || strcmp(verbe,"s'ourdir")==0 )
               {
                  memmove(verbe,verbe+2,20);
                  verbe[strlen(verbe)-2]='\0';
               printf("je m'%sissais \n",verbe);
					printf("tu t'%sissais \n",verbe);
					printf("il/elle s'%sissait\n",verbe);
					printf("nous nous %sissions\n",verbe);
					printf("vous vous %sissiez\n",verbe);
					printf("ils/elles s'%sissaient\n",verbe);
        }
        else if (strcmp(verbe,"se_batir")==0 || strcmp(verbe,"se_blanchir")==0 || strcmp(verbe,"se_blottir")==0 || strcmp(verbe,"se_brunir")==0 ||
         strcmp(verbe,"se_chancir")==0 || strcmp(verbe,"se_clapir")==0 || strcmp(verbe,"se_conjouir")==0 || strcmp(verbe,"se_convertir")==0 || strcmp(verbe,"se_decatir")==0 ||
         strcmp(verbe,"se_decrepir")==0 || strcmp(verbe,"se_definir")==0 || strcmp(verbe,"se_degarnir")==0 || strcmp(verbe,"se_degourdir")==0 || strcmp(verbe,"se_degrossir")==0 ||
         strcmp(verbe,"se_demunir")==0 || strcmp(verbe,"se_depolir")==0 || strcmp(verbe,"se_deraidir")==0 || strcmp(verbe,"se_desemplir")==0 || strcmp(verbe,"se_dessaisir")==0 ||
         strcmp(verbe,"se_desunir")==0 || strcmp(verbe,"se_divertir")==0 || strcmp(verbe,"se_durcir")==0 || strcmp(verbe,"se_farcir")==0 || strcmp(verbe,"se_flechir")==0 ||
         strcmp(verbe,"se_fletrir")==0 || strcmp(verbe,"se_fleurir")==0 || strcmp(verbe,"se_fournir")==0 || strcmp(verbe,"se_garnir")==0 || strcmp(verbe,"se_gauchir")==0 ||
         strcmp(verbe,"se_grandir")==0 || strcmp(verbe,"se_guerir")==0 || strcmp(verbe,"se_hair")==0 || strcmp(verbe,"se_languir")==0 || strcmp(verbe,"se_munir")==0 ||
         strcmp(verbe,"se_nantir")==0 || strcmp(verbe,"se_noircir")==0 || strcmp(verbe,"se_nourrir")==0 || strcmp(verbe,"se_pervertir")==0 || strcmp(verbe,"se_polir")==0 ||
         strcmp(verbe,"se_pourrir")==0 || strcmp(verbe,"se_premunir")==0 || strcmp(verbe,"se_rabougrir")==0 || strcmp(verbe,"se_raccourcir")==0 || strcmp(verbe,"se_racornir")==0 ||
         strcmp(verbe,"se_radoucir")==0 || strcmp(verbe,"se_raffermir")==0 || strcmp(verbe,"se_rafraichir")==0 || strcmp(verbe,"se_raidir")==0 || strcmp(verbe,"se_rajeunir")==0 ||
         strcmp(verbe,"se_ralentir")==0 || strcmp(verbe,"se_ramollir")==0 || strcmp(verbe,"se_rancir")==0 || strcmp(verbe,"se_rapointir")==0 || strcmp(verbe,"se_rappointir")==0 ||
         strcmp(verbe,"se_reassortir")==0 || strcmp(verbe,"se_reconvertir")==0 || strcmp(verbe,"se_reflechir")==0 || strcmp(verbe,"se_refroidir")==0 || strcmp(verbe,"se_rejouir")==0 ||
         strcmp(verbe,"se_rembrunir")==0 || strcmp(verbe,"se_remplir")==0 || strcmp(verbe,"se_repartir")==0 || strcmp(verbe,"se_resalir")==0 || strcmp(verbe,"se_ressaisir")==0 ||
         strcmp(verbe,"se_retablir")==0 || strcmp(verbe,"se_retrecir")==0 || strcmp(verbe,"se_reunir")==0 || strcmp(verbe,"se_roidir")==0 || strcmp(verbe,"se_rotir")==0 ||
         strcmp(verbe,"se_saisir")==0 || strcmp(verbe,"se_salir")==0 || strcmp(verbe,"se_tapir")==0 || strcmp(verbe,"se_tarir")==0 || strcmp(verbe,"se_ternir")==0 ||
         strcmp(verbe,"se_travestir")==0 || strcmp(verbe,"se_vieillir")==0)
         {
            memmove(verbe,verbe+3,20);
                  verbe[strlen(verbe)-2]='\0';
               printf("je me %sissais \n",verbe);
					printf("tu te %sissais \n",verbe);
					printf("il/elle se %sissait\n",verbe);
					printf("nous nous %sissions\n",verbe);
					printf("vous vous %sissiez\n",verbe);
					printf("ils/elles se %sissaient\n",verbe);
         }
         else printf("Ce verbe n'est pas du second groupe \n");
					break;
			}
		case 3 :
			{
            printf("Veuillez saisir un verbe du second groupe\n");
	            scanf("%s",verbe);
             if(strcmp(verbe,"finir")==0 || strcmp(verbe,"bondir")==0 || strcmp(verbe,"trahir")==0 || strcmp(verbe,"transir")==0 ||
    strcmp(verbe,"travestir")==0 || strcmp(verbe,"unir")==0 || strcmp(verbe,"rebatir")==0 || strcmp(verbe,"rebaudir")==0 || strcmp(verbe,"reblanchir")==0 ||
    strcmp(verbe,"vagir")==0 || strcmp(verbe,"verdir")==0 || strcmp(verbe,"vernir")==0 || strcmp(verbe,"vieillir")==0 || strcmp(verbe,"rebondir")==0 ||
    strcmp(verbe,"vioquir")==0 || strcmp(verbe,"vomir")==0 || strcmp(verbe,"vrombir")==0 || strcmp(verbe,"rondir")==0 || strcmp(verbe,"rosir")==0 ||
    strcmp(verbe,"rotir")==0 || strcmp(verbe,"rechampir")==0 || strcmp(verbe,"rouir")==0 || strcmp(verbe,"rougir")==0 || strcmp(verbe,"roussir")==0 ||
    strcmp(verbe,"roustir")==0 || strcmp(verbe,"rugir")==0 || strcmp(verbe,"saisir")==0 || strcmp(verbe,"rechampir")==0 || strcmp(verbe,"salir")==0 ||
    strcmp(verbe,"reconvertir")==0 || strcmp(verbe,"saurir")==0 || strcmp(verbe,"serfouir")==0 || strcmp(verbe,"sertir")==0 || strcmp(verbe,"servir")==0 ||
    strcmp(verbe,"sous-investir")==0 || strcmp(verbe,"subir")==0 || strcmp(verbe,"subvertir")==0 || strcmp(verbe,"superfinir")==0 || strcmp(verbe,"surir")==0 ||
    strcmp(verbe,"surencherir")==0 || strcmp(verbe,"surfleurir")==0 || strcmp(verbe,"surgir")==0 || strcmp(verbe,"surinvestir")==0 || strcmp(verbe,"recrepir")==0 ||
    strcmp(verbe,"tarir")==0 || strcmp(verbe,"redemolir")==0 || strcmp(verbe,"tartir")==0 || strcmp(verbe,"ternir")==0 || strcmp(verbe,"redefinir")==0 ||
    strcmp(verbe,"terrir")==0 || strcmp(verbe,"tiedir")==0 || strcmp(verbe,"ralentir")==0 || strcmp(verbe,"reflechir")==0 || strcmp(verbe,"ramollir")==0 ||
    strcmp(verbe,"refleurir")==0 || strcmp(verbe,"rancir")==0 || strcmp(verbe,"refroidir")==0 || strcmp(verbe,"raplatir")==0 || strcmp(verbe,"rapointir")==0 ||
    strcmp(verbe,"regir")==0 || strcmp(verbe,"rappointir")==0 || strcmp(verbe,"regarnir")==0 || strcmp(verbe,"rassortir")==0 || strcmp(verbe,"ravir")==0 ||
    strcmp(verbe,"ravilir")==0 || strcmp(verbe,"reagir")==0 || strcmp(verbe,"reassortir")==0 || strcmp(verbe,"regrossir")==0 || strcmp(verbe,"reinvestir")==0 ||
    strcmp(verbe,"rejaillir")==0 || strcmp(verbe,"rejouir")==0 || strcmp(verbe,"relargir")==0 || strcmp(verbe,"rembrunir")==0 || strcmp(verbe,"remplir")==0 ||
    strcmp(verbe,"rencherir")==0 || strcmp(verbe,"rendurcir")==0 || strcmp(verbe,"renformir")==0 || strcmp(verbe,"repartir")==0 || strcmp(verbe,"repolir")==0 || 
    strcmp(verbe,"resalir")==0 || strcmp(verbe,"resplendir")==0 || strcmp(verbe,"ressaisir")==0 || strcmp(verbe,"ressurgir")==0 || strcmp(verbe,"resurgir")==0 ||
    strcmp(verbe,"retablir")==0 || strcmp(verbe,"retentir")==0 || strcmp(verbe,"retrecir")==0 || strcmp(verbe,"retoagir")==0 || strcmp(verbe,"reunir")==0 || 
    strcmp(verbe,"reussir")==0 || strcmp(verbe,"reverdir")==0 || strcmp(verbe,"revenir")==0 || strcmp(verbe,"revomir")==0 || strcmp(verbe,"roidir")==0 ||
    strcmp(verbe,"rondir")==0 || strcmp(verbe,"rosir")==0 || strcmp(verbe,"rajeunir")==0 || strcmp(verbe,"raidir")==0 || strcmp(verbe,"ragaillardir")==0 ||
    strcmp(verbe,"prefinir")==0 || strcmp(verbe,"rafraichir")==0 || strcmp(verbe,"ragrandir")==0 || strcmp(verbe,"raffermir")==0 || strcmp(verbe,"rafantir")==0 ||
    strcmp(verbe,"preetablir")==0 || strcmp(verbe,"radoucir")==0 || strcmp(verbe,"racornir")==0 || strcmp(verbe,"raccourcir")==0 || strcmp(verbe,"rabonnir")==0 ||
    strcmp(verbe,"pourrir")==0 || strcmp(verbe,"rabougrir")==0 || strcmp(verbe,"rabetir")==0 || strcmp(verbe,"punir")==0 || strcmp(verbe,"premunir")==0 ||
    strcmp(verbe,"polir")==0 || strcmp(verbe,"petrir")==0 || strcmp(verbe,"pervertir")==0 || strcmp(verbe,"perir")==0 || strcmp(verbe,"patir")==0 ||
    strcmp(verbe,"obeir")==0 || strcmp(verbe,"nourrir")==0 || strcmp(verbe,"palir")==0 || strcmp(verbe,"ourdir")==0 || strcmp(verbe,"obscurcir")==0 ||
    strcmp(verbe,"nordir")==0 || strcmp(verbe,"noircir")==0 || strcmp(verbe,"nantir")==0 || strcmp(verbe,"murir")==0 || strcmp(verbe,"munir")==0 ||
    strcmp(verbe,"mugir")==0 || strcmp(verbe,"mollir")==0 || strcmp(verbe,"moitir")==0 || strcmp(verbe,"moisir")==0 || strcmp(verbe,"mincir")==0 ||
    strcmp(verbe,"meurtrir")==0 || strcmp(verbe,"megir")==0 || strcmp(verbe,"matir")==0 || strcmp(verbe,"louchir")==0 || strcmp(verbe,"lotir")==0 ||
    strcmp(verbe,"abaloudir")==0 || strcmp(verbe,"abasordir")==0 || strcmp(verbe,"abatardir")==0 || strcmp(verbe,"abetir")==0
      || strcmp(verbe,"abolir")==0 || strcmp(verbe,"abonnir")==0 || strcmp(verbe,"aboutir")==0 || strcmp(verbe,"abruitir")==0
      || strcmp(verbe,"accomplir")==0 || strcmp(verbe,"accourcir")==0 || strcmp(verbe,"accroupir")==0 || strcmp(verbe,"adoucir")==0
      || strcmp(verbe,"affadir")==0 || strcmp(verbe,"affaiblir")==0 || strcmp(verbe,"affermir")==0 || strcmp(verbe,"affranchir")==0
      || strcmp(verbe,"agir")==0 || strcmp(verbe,"agonir")==0 || strcmp(verbe,"agrandir")==0 || strcmp(verbe,"agueririr")==0
      || strcmp(verbe,"ahurir")==0 || strcmp(verbe,"aigrir")==0 || strcmp(verbe,"alanguir")==0 || strcmp(verbe,"alentir")==0
      || strcmp(verbe,"allegir")==0 || strcmp(verbe,"alourdir")==0 || strcmp(verbe,"alunir")==0 || strcmp(verbe,"amaigrir")==0
      || strcmp(verbe,"amatir")==0 || strcmp(verbe,"amerrir")==0 || strcmp(verbe,"ameublir")==0 || strcmp(verbe,"amincir")==0
      || strcmp(verbe,"amoindrir")==0 || strcmp(verbe,"amollir")==0 || strcmp(verbe,"amortir")==0 || strcmp(verbe,"amuir")==0
      || strcmp(verbe,"aneantir")==0 || strcmp(verbe,"anoblir")==0 || strcmp(verbe,"anordir")==0 || strcmp(verbe,"aplanir")==0
      || strcmp(verbe,"aplatir")==0 || strcmp(verbe,"appauvrir")==0 || strcmp(verbe,"appesantir")==0 || strcmp(verbe,"applaudir")==0
      || strcmp(verbe,"appointir")==0 || strcmp(verbe,"approfondir")==0 || strcmp(verbe,"arrondir")==0 || strcmp(verbe,"assagir")==0
      || strcmp(verbe,"assainir")==0 || strcmp(verbe,"asservir")==0 || strcmp(verbe,"assombrir")==0 || strcmp(verbe,"assortir")==0
      || strcmp(verbe,"assoupir")==0 || strcmp(verbe,"assouplir")==0 || strcmp(verbe,"assourdir")==0 || strcmp(verbe,"assouvrir")==0
      || strcmp(verbe,"assujettir")==0 || strcmp(verbe,"attendrir")==0 || strcmp(verbe,"atterir")==0 || strcmp(verbe,"attiedir")==0
      || strcmp(verbe,"avachir")==0 || strcmp(verbe,"avertir")==0  || strcmp(verbe,"aveulir")==0 || strcmp(verbe,"avilir")==0
      || strcmp(verbe,"aveulir")==0 || strcmp(verbe,"bannir")==0 || strcmp(verbe,"barrir")==0 || strcmp(verbe,"batir")==0
      || strcmp(verbe,"baudir")==0 || strcmp(verbe,"benir")==0 || strcmp(verbe,"blanchir")==0 || strcmp(verbe,"blemir")==0
      || strcmp(verbe,"blettir")==0 || strcmp(verbe,"bleuir")==0 || strcmp(verbe,"blondir")==0 || strcmp(verbe,"bonir")==0
      || strcmp(verbe,"bondir")==0 || strcmp(verbe,"bonnir")==0 || strcmp(verbe,"bouffir")==0 || strcmp(verbe,"brandir")==0
      || strcmp(verbe,"brouir")==0 || strcmp(verbe,"brunir")==0 ||  strcmp(verbe,"calmir")==0 || strcmp(verbe,"candir")==0
      || strcmp(verbe,"catir")==0 || strcmp(verbe,"chancir")==0 || strcmp(verbe,"chauvir")==0 || strcmp(verbe,"cherir")==0
      || strcmp(verbe,"choisir")==0 || strcmp(verbe,"clapir")==0 || strcmp(verbe,"compatir")==0 || strcmp(verbe,"conir")==0
      || strcmp(verbe,"conjouir")==0 || strcmp(verbe,"convertir")==0 || strcmp(verbe,"cotir")==0 || strcmp(verbe,"crepir")==0
      || strcmp(verbe,"cronir")==0 || strcmp(verbe,"crounir")==0 || strcmp(verbe,"croupir")==0 || strcmp(verbe,"debatir")==0
      || strcmp(verbe,"debleuir")==0 || strcmp(verbe,"debrutir")==0 || strcmp(verbe,"decatir")==0 || strcmp(verbe,"decrepir")==0
      || strcmp(verbe,"definir")==0 || strcmp(verbe,"deflechir")==0 || strcmp(verbe,"defleurir")==0 || strcmp(verbe,"defraichir")==0
      || strcmp(verbe,"degarnir")==0 || strcmp(verbe,"degauchir")==0 || strcmp(verbe,"deglutir")==0 || strcmp(verbe,"degourdir")==0
      || strcmp(verbe,"degrossir")==0 || strcmp(verbe,"deguerpir")==0 || strcmp(verbe,"dejaunir")==0 || strcmp(verbe,"demaigrir")==0
      || strcmp(verbe,"demolir")==0 || strcmp(verbe,"demunir")==0 || strcmp(verbe,"denantir")==0 || strcmp(verbe,"denoircir")==0
      || strcmp(verbe,"deperir")==0 || strcmp(verbe,"depolir")==0 || strcmp(verbe,"deraidir")==0 || strcmp(verbe,"derondir")==0
      || strcmp(verbe,"derougir")==0 || strcmp(verbe,"desassortir")==0 || strcmp(verbe,"desemplir")==0 || strcmp(verbe,"desengourdir")==0
      || strcmp(verbe,"desenlaidir")==0 || strcmp(verbe,"desetablir")==0 || strcmp(verbe,"desobeir")==0 || strcmp(verbe,"desepaissir")==0
      || strcmp(verbe,"desinvestir")==0 || strcmp(verbe,"dessaisir")==0 || strcmp(verbe,"dessertir")==0 || strcmp(verbe,"desunir")==0
      || strcmp(verbe,"deverdir")==0 || strcmp(verbe,"devernir")==0 || strcmp(verbe,"divertir")==0 || strcmp(verbe,"doucir")==0
      || strcmp(verbe,"durcir")==0 || strcmp(verbe,"ebahir")==0 || strcmp(verbe,"ebaubir")==0 || strcmp(verbe,"ebaudir")==0
      || strcmp(verbe,"eblouir")==0 || strcmp(verbe,"ecartir")==0 || strcmp(verbe,"echampir")==0 || strcmp(verbe,"eclaicir")==0
      || strcmp(verbe,"ecrouir")==0 || strcmp(verbe,"effleurir")==0 || strcmp(verbe,"elargir")==0 || strcmp(verbe,"elegir")==0
      || strcmp(verbe,"embellir")==0 || strcmp(verbe,"emboutir")==0 || strcmp(verbe,"embrunir")==0 || strcmp(verbe,"emplir")==0 
      || strcmp(verbe,"empuantir")==0 || strcmp(verbe,"encherir")==0 || strcmp(verbe,"endolorir")==0 || strcmp(verbe,"endurcir")==0
      || strcmp(verbe,"enforcir")==0 || strcmp(verbe,"enfouir")==0 || strcmp(verbe,"engloutir")==0 || strcmp(verbe,"engourdir")==0
      || strcmp(verbe,"enhardir")==0 || strcmp(verbe,"enlaidir")==0 || strcmp(verbe,"ennoblir")==0 || strcmp(verbe,"enorgueillir")==0
      || strcmp(verbe,"enrichir")==0 || strcmp(verbe,"ensevelir")==0 || strcmp(verbe,"envahir")==0 || strcmp(verbe,"envieillir")==0
      || strcmp(verbe,"epaissir")==0 || strcmp(verbe,"epanouir")==0 || strcmp(verbe,"epoutir")==0 || strcmp(verbe,"equarrir")==0
      || strcmp(verbe,"estourbir")==0 || strcmp(verbe,"etablir")==0  || strcmp(verbe,"etourdir")==0 || strcmp(verbe,"etrecir")==0
      || strcmp(verbe,"evanouir")==0 || strcmp(verbe,"faiblir")==0 || strcmp(verbe,"farcir")==0 || strcmp(verbe,"finir")==0
      || strcmp(verbe,"flechir")==0 || strcmp(verbe,"fletrir")==0 || strcmp(verbe,"fleurir")==0 || strcmp(verbe,"forcir")==0
      || strcmp(verbe,"fouir")==0 || strcmp(verbe,"fourbir")==0 || strcmp(verbe,"fournir")==0 || strcmp(verbe,"fraichir")==0 
      || strcmp(verbe,"franchir")==0 || strcmp(verbe,"fremir")==0 || strcmp(verbe,"froidir")==0 || strcmp(verbe,"garantir")==0
      || strcmp(verbe,"garnir")==0 || strcmp(verbe,"gauchir")==0 || strcmp(verbe,"gaudir")==0 || strcmp(verbe,"gemir")==0
      || strcmp(verbe,"glapir")==0 || strcmp(verbe,"glatir")==0 || strcmp(verbe,"grandir")==0 || strcmp(verbe,"gravir")==0 
      || strcmp(verbe,"grossir")==0 || strcmp(verbe,"guerir")==0 || strcmp(verbe,"hair")==0 || strcmp(verbe,"havir")==0
      || strcmp(verbe,"hennir")==0 || strcmp(verbe,"honnir")==0 || strcmp(verbe,"hourdir")==0 || strcmp(verbe,"impatir")==0
      || strcmp(verbe,"inflechir")==0 || strcmp(verbe,"interagir")==0 || strcmp(verbe,"intervertir")==0 
      || strcmp(verbe,"invertir")==0 || strcmp(verbe,"investir")==0 || strcmp(verbe,"jaillir")==0  || strcmp(verbe,"jaunir")==0 
      || strcmp(verbe,"jouir")==0)
        {
              verbe[strlen(verbe)-2]='\0';
					printf("je %sis \n",verbe);
					printf("tu %sis \n",verbe);
					printf("il/elle %sit\n",verbe);
					printf("nous %simes\n",verbe);
					printf("vous %sites\n",verbe);
					printf("ils/elles %sirent\n",verbe);
        }
        else if (strcmp(verbe,"s'abatardir")==0 || strcmp(verbe,"s'accroupir")==0 || strcmp(verbe,"s'affaiblir")==0
                  || strcmp(verbe,"s'agir")==0 || strcmp(verbe,"s'agrandir")==0 || strcmp(verbe,"s'amoindrir")==0
                  || strcmp(verbe,"s'anoblir")==0 || strcmp(verbe,"s'aplanir")==0 || strcmp(verbe,"s'appesantir")==0
                  || strcmp(verbe,"s'assagir")==0 || strcmp(verbe,"s'asservir")==0 || strcmp(verbe,"s'assoupir")==0
                  || strcmp(verbe,"s'assouvir")==0 || strcmp(verbe,"s'avachir")==0 || strcmp(verbe,"s'aveulir")==0
                  || strcmp(verbe,"s'elargir")==0 || strcmp(verbe,"s'embellir")==0 || strcmp(verbe,"s'endurcir")==0
                  || strcmp(verbe,"s'enhardir")==0 || strcmp(verbe,"s'ensevelir")==0 || strcmp(verbe,"s'epaissir")==0
                  || strcmp(verbe,"s'épaissir")==0 || strcmp(verbe,"s'étrécir")==0 || strcmp(verbe,"s'obscurcir")==0
                  || strcmp(verbe,"s'accomplir")==0 || strcmp(verbe,"s'affranchir")==0 || strcmp(verbe,"s'alanguir")==0
                  || strcmp(verbe,"s'amincir")==0 || strcmp(verbe,"s'amortir")==0 || strcmp(verbe,"s'aneantir")==0
                  || strcmp(verbe,"s'appauvrir")==0 || strcmp(verbe,"s'arrondir")==0 || strcmp(verbe,"s'assortir")==0
                  || strcmp(verbe,"s'assourdir")==0 || strcmp(verbe,"s'attendrir")==0 || strcmp(verbe,"s'attiedir")==0
                  || strcmp(verbe,"s'emplir")==0 || strcmp(verbe,"s'engourdir")==0 || strcmp(verbe,"s'enrichir")==0
                  || strcmp(verbe,"s'entre-hair")==0 || strcmp(verbe,"s'envieillir")==0 || strcmp(verbe,"s'etourdir")==0
                  || strcmp(verbe,"s'evanouir")==0 || strcmp(verbe,"s'investir")==0 || strcmp(verbe,"s'unir")==0
                  || strcmp(verbe,"s'abetir")==0 || strcmp(verbe,"s'abonnir")==0 || strcmp(verbe,"s'abrutir")==0
                  || strcmp(verbe,"s'adoucir")==0 || strcmp(verbe,"s'affermir")==0 || strcmp(verbe,"s'aguerrir")==0
                  || strcmp(verbe,"s'aigrir")==0 || strcmp(verbe,"s'alourdir")==0 || strcmp(verbe,"s'amaigrir")==0
                  || strcmp(verbe,"s'amollir")==0 || strcmp(verbe,"s'amuïr")==0 || strcmp(verbe,"s'aplatir")==0
                  || strcmp(verbe,"s'applaudir")==0 || strcmp(verbe,"s'approfondir")==0 || strcmp(verbe,"s'assombrir")==0
                  || strcmp(verbe,"s'assouplir")==0 || strcmp(verbe,"s'assujettir")==0 || strcmp(verbe,"s'avilir")==0
                  || strcmp(verbe,"s'ebahir")==0 || strcmp(verbe,"s'eclaircir")==0 || strcmp(verbe,"s'engloutir")==0
                  || strcmp(verbe,"s'enlaidir")==0 || strcmp(verbe,"s'enorgueillir")==0 || strcmp(verbe,"s'epanouir")==0
                  || strcmp(verbe,"s'esbaudir")==0 || strcmp(verbe,"s'établir")==0 || strcmp(verbe,"s'inflechir")==0
                  || strcmp(verbe,"s'ourdir")==0 )
               {
                  memmove(verbe,verbe+2,20);
               verbe[strlen(verbe)-2]='\0';
					printf("je m'%sis \n",verbe);
					printf("tu t'%sis \n",verbe);
					printf("il/elle s'%sit\n",verbe);
					printf("nous nous %simes\n",verbe);
					printf("vous vous %sites\n",verbe);
					printf("ils/elles se %sirent\n",verbe);
        }
        else if (strcmp(verbe,"se_batir")==0 || strcmp(verbe,"se_blanchir")==0 || strcmp(verbe,"se_blottir")==0 || strcmp(verbe,"se_brunir")==0 ||
         strcmp(verbe,"se_chancir")==0 || strcmp(verbe,"se_clapir")==0 || strcmp(verbe,"se_conjouir")==0 || strcmp(verbe,"se_convertir")==0 || strcmp(verbe,"se_decatir")==0 ||
         strcmp(verbe,"se_decrepir")==0 || strcmp(verbe,"se_definir")==0 || strcmp(verbe,"se_degarnir")==0 || strcmp(verbe,"se_degourdir")==0 || strcmp(verbe,"se_degrossir")==0 ||
         strcmp(verbe,"se_demunir")==0 || strcmp(verbe,"se_depolir")==0 || strcmp(verbe,"se_deraidir")==0 || strcmp(verbe,"se_desemplir")==0 || strcmp(verbe,"se_dessaisir")==0 ||
         strcmp(verbe,"se_desunir")==0 || strcmp(verbe,"se_divertir")==0 || strcmp(verbe,"se_durcir")==0 || strcmp(verbe,"se_farcir")==0 || strcmp(verbe,"se_flechir")==0 ||
         strcmp(verbe,"se_fletrir")==0 || strcmp(verbe,"se_fleurir")==0 || strcmp(verbe,"se_fournir")==0 || strcmp(verbe,"se_garnir")==0 || strcmp(verbe,"se_gauchir")==0 ||
         strcmp(verbe,"se_grandir")==0 || strcmp(verbe,"se_guerir")==0 || strcmp(verbe,"se_hair")==0 || strcmp(verbe,"se_languir")==0 || strcmp(verbe,"se_munir")==0 ||
         strcmp(verbe,"se_nantir")==0 || strcmp(verbe,"se_noircir")==0 || strcmp(verbe,"se_nourrir")==0 || strcmp(verbe,"se_pervertir")==0 || strcmp(verbe,"se_polir")==0 ||
         strcmp(verbe,"se_pourrir")==0 || strcmp(verbe,"se_premunir")==0 || strcmp(verbe,"se_rabougrir")==0 || strcmp(verbe,"se_raccourcir")==0 || strcmp(verbe,"se_racornir")==0 ||
         strcmp(verbe,"se_radoucir")==0 || strcmp(verbe,"se_raffermir")==0 || strcmp(verbe,"se_rafraichir")==0 || strcmp(verbe,"se_raidir")==0 || strcmp(verbe,"se_rajeunir")==0 ||
         strcmp(verbe,"se_ralentir")==0 || strcmp(verbe,"se_ramollir")==0 || strcmp(verbe,"se_rancir")==0 || strcmp(verbe,"se_rapointir")==0 || strcmp(verbe,"se_rappointir")==0 ||
         strcmp(verbe,"se_reassortir")==0 || strcmp(verbe,"se_reconvertir")==0 || strcmp(verbe,"se_reflechir")==0 || strcmp(verbe,"se_refroidir")==0 || strcmp(verbe,"se_rejouir")==0 ||
         strcmp(verbe,"se_rembrunir")==0 || strcmp(verbe,"se_remplir")==0 || strcmp(verbe,"se_repartir")==0 || strcmp(verbe,"se_resalir")==0 || strcmp(verbe,"se_ressaisir")==0 ||
         strcmp(verbe,"se_retablir")==0 || strcmp(verbe,"se_retrecir")==0 || strcmp(verbe,"se_reunir")==0 || strcmp(verbe,"se_roidir")==0 || strcmp(verbe,"se_rotir")==0 ||
         strcmp(verbe,"se_saisir")==0 || strcmp(verbe,"se_salir")==0 || strcmp(verbe,"se_tapir")==0 || strcmp(verbe,"se_tarir")==0 || strcmp(verbe,"se_ternir")==0 ||
         strcmp(verbe,"se_travestir")==0 || strcmp(verbe,"se_vieillir")==0)
         {
            memmove(verbe,verbe+3,20);
               verbe[strlen(verbe)-2]='\0';
					printf("je me %sis \n",verbe);
					printf("tu te %sis \n",verbe);
					printf("il/elle se %sit\n",verbe);
					printf("nous nous %simes\n",verbe);
					printf("vous vous %sites\n",verbe);
					printf("ils/elles se %sirent\n",verbe);
         }
         else printf("Ce verbe n'est pas du second groupe \n");
					break;
			}
	
		case 4:
			{
             printf("Veuillez saisir un verbe du second groupe\n");
	            scanf("%s",verbe);
             if(strcmp(verbe,"finir")==0 || strcmp(verbe,"bondir")==0 || strcmp(verbe,"trahir")==0 || strcmp(verbe,"transir")==0 ||
    strcmp(verbe,"travestir")==0 || strcmp(verbe,"unir")==0 || strcmp(verbe,"rebatir")==0 || strcmp(verbe,"rebaudir")==0 || strcmp(verbe,"reblanchir")==0 ||
    strcmp(verbe,"vagir")==0 || strcmp(verbe,"verdir")==0 || strcmp(verbe,"vernir")==0 || strcmp(verbe,"vieillir")==0 || strcmp(verbe,"rebondir")==0 ||
    strcmp(verbe,"vioquir")==0 || strcmp(verbe,"vomir")==0 || strcmp(verbe,"vrombir")==0 || strcmp(verbe,"rondir")==0 || strcmp(verbe,"rosir")==0 ||
    strcmp(verbe,"rotir")==0 || strcmp(verbe,"rechampir")==0 || strcmp(verbe,"rouir")==0 || strcmp(verbe,"rougir")==0 || strcmp(verbe,"roussir")==0 ||
    strcmp(verbe,"roustir")==0 || strcmp(verbe,"rugir")==0 || strcmp(verbe,"saisir")==0 || strcmp(verbe,"rechampir")==0 || strcmp(verbe,"salir")==0 ||
    strcmp(verbe,"reconvertir")==0 || strcmp(verbe,"saurir")==0 || strcmp(verbe,"serfouir")==0 || strcmp(verbe,"sertir")==0 || strcmp(verbe,"servir")==0 ||
    strcmp(verbe,"sous-investir")==0 || strcmp(verbe,"subir")==0 || strcmp(verbe,"subvertir")==0 || strcmp(verbe,"superfinir")==0 || strcmp(verbe,"surir")==0 ||
    strcmp(verbe,"surencherir")==0 || strcmp(verbe,"surfleurir")==0 || strcmp(verbe,"surgir")==0 || strcmp(verbe,"surinvestir")==0 || strcmp(verbe,"recrepir")==0 ||
    strcmp(verbe,"tarir")==0 || strcmp(verbe,"redemolir")==0 || strcmp(verbe,"tartir")==0 || strcmp(verbe,"ternir")==0 || strcmp(verbe,"redefinir")==0 ||
    strcmp(verbe,"terrir")==0 || strcmp(verbe,"tiedir")==0 || strcmp(verbe,"ralentir")==0 || strcmp(verbe,"reflechir")==0 || strcmp(verbe,"ramollir")==0 ||
    strcmp(verbe,"refleurir")==0 || strcmp(verbe,"rancir")==0 || strcmp(verbe,"refroidir")==0 || strcmp(verbe,"raplatir")==0 || strcmp(verbe,"rapointir")==0 ||
    strcmp(verbe,"regir")==0 || strcmp(verbe,"rappointir")==0 || strcmp(verbe,"regarnir")==0 || strcmp(verbe,"rassortir")==0 || strcmp(verbe,"ravir")==0 ||
    strcmp(verbe,"ravilir")==0 || strcmp(verbe,"reagir")==0 || strcmp(verbe,"reassortir")==0 || strcmp(verbe,"regrossir")==0 || strcmp(verbe,"reinvestir")==0 ||
    strcmp(verbe,"rejaillir")==0 || strcmp(verbe,"rejouir")==0 || strcmp(verbe,"relargir")==0 || strcmp(verbe,"rembrunir")==0 || strcmp(verbe,"remplir")==0 ||
    strcmp(verbe,"rencherir")==0 || strcmp(verbe,"rendurcir")==0 || strcmp(verbe,"renformir")==0 || strcmp(verbe,"repartir")==0 || strcmp(verbe,"repolir")==0 || 
    strcmp(verbe,"resalir")==0 || strcmp(verbe,"resplendir")==0 || strcmp(verbe,"ressaisir")==0 || strcmp(verbe,"ressurgir")==0 || strcmp(verbe,"resurgir")==0 ||
    strcmp(verbe,"retablir")==0 || strcmp(verbe,"retentir")==0 || strcmp(verbe,"retrecir")==0 || strcmp(verbe,"retoagir")==0 || strcmp(verbe,"reunir")==0 || 
    strcmp(verbe,"reussir")==0 || strcmp(verbe,"reverdir")==0 || strcmp(verbe,"revenir")==0 || strcmp(verbe,"revomir")==0 || strcmp(verbe,"roidir")==0 ||
    strcmp(verbe,"rondir")==0 || strcmp(verbe,"rosir")==0 || strcmp(verbe,"rajeunir")==0 || strcmp(verbe,"raidir")==0 || strcmp(verbe,"ragaillardir")==0 ||
    strcmp(verbe,"prefinir")==0 || strcmp(verbe,"rafraichir")==0 || strcmp(verbe,"ragrandir")==0 || strcmp(verbe,"raffermir")==0 || strcmp(verbe,"rafantir")==0 ||
    strcmp(verbe,"preetablir")==0 || strcmp(verbe,"radoucir")==0 || strcmp(verbe,"racornir")==0 || strcmp(verbe,"raccourcir")==0 || strcmp(verbe,"rabonnir")==0 ||
    strcmp(verbe,"pourrir")==0 || strcmp(verbe,"rabougrir")==0 || strcmp(verbe,"rabetir")==0 || strcmp(verbe,"punir")==0 || strcmp(verbe,"premunir")==0 ||
    strcmp(verbe,"polir")==0 || strcmp(verbe,"petrir")==0 || strcmp(verbe,"pervertir")==0 || strcmp(verbe,"perir")==0 || strcmp(verbe,"patir")==0 ||
    strcmp(verbe,"obeir")==0 || strcmp(verbe,"nourrir")==0 || strcmp(verbe,"palir")==0 || strcmp(verbe,"ourdir")==0 || strcmp(verbe,"obscurcir")==0 ||
    strcmp(verbe,"nordir")==0 || strcmp(verbe,"noircir")==0 || strcmp(verbe,"nantir")==0 || strcmp(verbe,"murir")==0 || strcmp(verbe,"munir")==0 ||
    strcmp(verbe,"mugir")==0 || strcmp(verbe,"mollir")==0 || strcmp(verbe,"moitir")==0 || strcmp(verbe,"moisir")==0 || strcmp(verbe,"mincir")==0 ||
    strcmp(verbe,"meurtrir")==0 || strcmp(verbe,"megir")==0 || strcmp(verbe,"matir")==0 || strcmp(verbe,"louchir")==0 || strcmp(verbe,"lotir")==0 ||
    strcmp(verbe,"abaloudir")==0 || strcmp(verbe,"abasordir")==0 || strcmp(verbe,"abatardir")==0 || strcmp(verbe,"abetir")==0
      || strcmp(verbe,"abolir")==0 || strcmp(verbe,"abonnir")==0 || strcmp(verbe,"aboutir")==0 || strcmp(verbe,"abruitir")==0
      || strcmp(verbe,"accomplir")==0 || strcmp(verbe,"accourcir")==0 || strcmp(verbe,"accroupir")==0 || strcmp(verbe,"adoucir")==0
      || strcmp(verbe,"affadir")==0 || strcmp(verbe,"affaiblir")==0 || strcmp(verbe,"affermir")==0 || strcmp(verbe,"affranchir")==0
      || strcmp(verbe,"agir")==0 || strcmp(verbe,"agonir")==0 || strcmp(verbe,"agrandir")==0 || strcmp(verbe,"agueririr")==0
      || strcmp(verbe,"ahurir")==0 || strcmp(verbe,"aigrir")==0 || strcmp(verbe,"alanguir")==0 || strcmp(verbe,"alentir")==0
      || strcmp(verbe,"allegir")==0 || strcmp(verbe,"alourdir")==0 || strcmp(verbe,"alunir")==0 || strcmp(verbe,"amaigrir")==0
      || strcmp(verbe,"amatir")==0 || strcmp(verbe,"amerrir")==0 || strcmp(verbe,"ameublir")==0 || strcmp(verbe,"amincir")==0
      || strcmp(verbe,"amoindrir")==0 || strcmp(verbe,"amollir")==0 || strcmp(verbe,"amortir")==0 || strcmp(verbe,"amuir")==0
      || strcmp(verbe,"aneantir")==0 || strcmp(verbe,"anoblir")==0 || strcmp(verbe,"anordir")==0 || strcmp(verbe,"aplanir")==0
      || strcmp(verbe,"aplatir")==0 || strcmp(verbe,"appauvrir")==0 || strcmp(verbe,"appesantir")==0 || strcmp(verbe,"applaudir")==0
      || strcmp(verbe,"appointir")==0 || strcmp(verbe,"approfondir")==0 || strcmp(verbe,"arrondir")==0 || strcmp(verbe,"assagir")==0
      || strcmp(verbe,"assainir")==0 || strcmp(verbe,"asservir")==0 || strcmp(verbe,"assombrir")==0 || strcmp(verbe,"assortir")==0
      || strcmp(verbe,"assoupir")==0 || strcmp(verbe,"assouplir")==0 || strcmp(verbe,"assourdir")==0 || strcmp(verbe,"assouvrir")==0
      || strcmp(verbe,"assujettir")==0 || strcmp(verbe,"attendrir")==0 || strcmp(verbe,"atterir")==0 || strcmp(verbe,"attiedir")==0
      || strcmp(verbe,"avachir")==0 || strcmp(verbe,"avertir")==0  || strcmp(verbe,"aveulir")==0 || strcmp(verbe,"avilir")==0
      || strcmp(verbe,"aveulir")==0 || strcmp(verbe,"bannir")==0 || strcmp(verbe,"barrir")==0 || strcmp(verbe,"batir")==0
      || strcmp(verbe,"baudir")==0 || strcmp(verbe,"benir")==0 || strcmp(verbe,"blanchir")==0 || strcmp(verbe,"blemir")==0
      || strcmp(verbe,"blettir")==0 || strcmp(verbe,"bleuir")==0 || strcmp(verbe,"blondir")==0 || strcmp(verbe,"bonir")==0
      || strcmp(verbe,"bondir")==0 || strcmp(verbe,"bonnir")==0 || strcmp(verbe,"bouffir")==0 || strcmp(verbe,"brandir")==0
      || strcmp(verbe,"brouir")==0 || strcmp(verbe,"brunir")==0 ||  strcmp(verbe,"calmir")==0 || strcmp(verbe,"candir")==0
      || strcmp(verbe,"catir")==0 || strcmp(verbe,"chancir")==0 || strcmp(verbe,"chauvir")==0 || strcmp(verbe,"cherir")==0
      || strcmp(verbe,"choisir")==0 || strcmp(verbe,"clapir")==0 || strcmp(verbe,"compatir")==0 || strcmp(verbe,"conir")==0
      || strcmp(verbe,"conjouir")==0 || strcmp(verbe,"convertir")==0 || strcmp(verbe,"cotir")==0 || strcmp(verbe,"crepir")==0
      || strcmp(verbe,"cronir")==0 || strcmp(verbe,"crounir")==0 || strcmp(verbe,"croupir")==0 || strcmp(verbe,"debatir")==0
      || strcmp(verbe,"debleuir")==0 || strcmp(verbe,"debrutir")==0 || strcmp(verbe,"decatir")==0 || strcmp(verbe,"decrepir")==0
      || strcmp(verbe,"definir")==0 || strcmp(verbe,"deflechir")==0 || strcmp(verbe,"defleurir")==0 || strcmp(verbe,"defraichir")==0
      || strcmp(verbe,"degarnir")==0 || strcmp(verbe,"degauchir")==0 || strcmp(verbe,"deglutir")==0 || strcmp(verbe,"degourdir")==0
      || strcmp(verbe,"degrossir")==0 || strcmp(verbe,"deguerpir")==0 || strcmp(verbe,"dejaunir")==0 || strcmp(verbe,"demaigrir")==0
      || strcmp(verbe,"demolir")==0 || strcmp(verbe,"demunir")==0 || strcmp(verbe,"denantir")==0 || strcmp(verbe,"denoircir")==0
      || strcmp(verbe,"deperir")==0 || strcmp(verbe,"depolir")==0 || strcmp(verbe,"deraidir")==0 || strcmp(verbe,"derondir")==0
      || strcmp(verbe,"derougir")==0 || strcmp(verbe,"desassortir")==0 || strcmp(verbe,"desemplir")==0 || strcmp(verbe,"desengourdir")==0
      || strcmp(verbe,"desenlaidir")==0 || strcmp(verbe,"desetablir")==0 || strcmp(verbe,"desobeir")==0 || strcmp(verbe,"desepaissir")==0
      || strcmp(verbe,"desinvestir")==0 || strcmp(verbe,"dessaisir")==0 || strcmp(verbe,"dessertir")==0 || strcmp(verbe,"desunir")==0
      || strcmp(verbe,"deverdir")==0 || strcmp(verbe,"devernir")==0 || strcmp(verbe,"divertir")==0 || strcmp(verbe,"doucir")==0
      || strcmp(verbe,"durcir")==0 || strcmp(verbe,"ebahir")==0 || strcmp(verbe,"ebaubir")==0 || strcmp(verbe,"ebaudir")==0
      || strcmp(verbe,"eblouir")==0 || strcmp(verbe,"ecartir")==0 || strcmp(verbe,"echampir")==0 || strcmp(verbe,"eclaicir")==0
      || strcmp(verbe,"ecrouir")==0 || strcmp(verbe,"effleurir")==0 || strcmp(verbe,"elargir")==0 || strcmp(verbe,"elegir")==0
      || strcmp(verbe,"embellir")==0 || strcmp(verbe,"emboutir")==0 || strcmp(verbe,"embrunir")==0 || strcmp(verbe,"emplir")==0 
      || strcmp(verbe,"empuantir")==0 || strcmp(verbe,"encherir")==0 || strcmp(verbe,"endolorir")==0 || strcmp(verbe,"endurcir")==0
      || strcmp(verbe,"enforcir")==0 || strcmp(verbe,"enfouir")==0 || strcmp(verbe,"engloutir")==0 || strcmp(verbe,"engourdir")==0
      || strcmp(verbe,"enhardir")==0 || strcmp(verbe,"enlaidir")==0 || strcmp(verbe,"ennoblir")==0 || strcmp(verbe,"enorgueillir")==0
      || strcmp(verbe,"enrichir")==0 || strcmp(verbe,"ensevelir")==0 || strcmp(verbe,"envahir")==0 || strcmp(verbe,"envieillir")==0
      || strcmp(verbe,"epaissir")==0 || strcmp(verbe,"epanouir")==0 || strcmp(verbe,"epoutir")==0 || strcmp(verbe,"equarrir")==0
      || strcmp(verbe,"estourbir")==0 || strcmp(verbe,"etablir")==0  || strcmp(verbe,"etourdir")==0 || strcmp(verbe,"etrecir")==0
      || strcmp(verbe,"evanouir")==0 || strcmp(verbe,"faiblir")==0 || strcmp(verbe,"farcir")==0 || strcmp(verbe,"finir")==0
      || strcmp(verbe,"flechir")==0 || strcmp(verbe,"fletrir")==0 || strcmp(verbe,"fleurir")==0 || strcmp(verbe,"forcir")==0
      || strcmp(verbe,"fouir")==0 || strcmp(verbe,"fourbir")==0 || strcmp(verbe,"fournir")==0 || strcmp(verbe,"fraichir")==0 
      || strcmp(verbe,"franchir")==0 || strcmp(verbe,"fremir")==0 || strcmp(verbe,"froidir")==0 || strcmp(verbe,"garantir")==0
      || strcmp(verbe,"garnir")==0 || strcmp(verbe,"gauchir")==0 || strcmp(verbe,"gaudir")==0 || strcmp(verbe,"gemir")==0
      || strcmp(verbe,"glapir")==0 || strcmp(verbe,"glatir")==0 || strcmp(verbe,"grandir")==0 || strcmp(verbe,"gravir")==0 
      || strcmp(verbe,"grossir")==0 || strcmp(verbe,"guerir")==0 || strcmp(verbe,"hair")==0 || strcmp(verbe,"havir")==0
      || strcmp(verbe,"hennir")==0 || strcmp(verbe,"honnir")==0 || strcmp(verbe,"hourdir")==0 || strcmp(verbe,"impatir")==0
      || strcmp(verbe,"inflechir")==0 || strcmp(verbe,"interagir")==0 || strcmp(verbe,"intervertir")==0 
      || strcmp(verbe,"invertir")==0 || strcmp(verbe,"investir")==0 || strcmp(verbe,"jaillir")==0  || strcmp(verbe,"jaunir")==0 
      || strcmp(verbe,"jouir")==0)
        {
               verbe[strlen(verbe)-2]='\0';
					printf("je %sirai \n",verbe);
					printf("tu %siras \n",verbe);
					printf("il/elle %sira\n",verbe);
					printf("nous %sirons\n",verbe);
					printf("vous %sirez\n",verbe);
					printf("ils/elles %siront\n",verbe);
        }
        else if (strcmp(verbe,"s'abatardir")==0 || strcmp(verbe,"s'accroupir")==0 || strcmp(verbe,"s'affaiblir")==0
                  || strcmp(verbe,"s'agir")==0 || strcmp(verbe,"s'agrandir")==0 || strcmp(verbe,"s'amoindrir")==0
                  || strcmp(verbe,"s'anoblir")==0 || strcmp(verbe,"s'aplanir")==0 || strcmp(verbe,"s'appesantir")==0
                  || strcmp(verbe,"s'assagir")==0 || strcmp(verbe,"s'asservir")==0 || strcmp(verbe,"s'assoupir")==0
                  || strcmp(verbe,"s'assouvir")==0 || strcmp(verbe,"s'avachir")==0 || strcmp(verbe,"s'aveulir")==0
                  || strcmp(verbe,"s'elargir")==0 || strcmp(verbe,"s'embellir")==0 || strcmp(verbe,"s'endurcir")==0
                  || strcmp(verbe,"s'enhardir")==0 || strcmp(verbe,"s'ensevelir")==0 || strcmp(verbe,"s'epaissir")==0
                  || strcmp(verbe,"s'épaissir")==0 || strcmp(verbe,"s'étrécir")==0 || strcmp(verbe,"s'obscurcir")==0
                  || strcmp(verbe,"s'accomplir")==0 || strcmp(verbe,"s'affranchir")==0 || strcmp(verbe,"s'alanguir")==0
                  || strcmp(verbe,"s'amincir")==0 || strcmp(verbe,"s'amortir")==0 || strcmp(verbe,"s'aneantir")==0
                  || strcmp(verbe,"s'appauvrir")==0 || strcmp(verbe,"s'arrondir")==0 || strcmp(verbe,"s'assortir")==0
                  || strcmp(verbe,"s'assourdir")==0 || strcmp(verbe,"s'attendrir")==0 || strcmp(verbe,"s'attiedir")==0
                  || strcmp(verbe,"s'emplir")==0 || strcmp(verbe,"s'engourdir")==0 || strcmp(verbe,"s'enrichir")==0
                  || strcmp(verbe,"s'entre-hair")==0 || strcmp(verbe,"s'envieillir")==0 || strcmp(verbe,"s'etourdir")==0
                  || strcmp(verbe,"s'evanouir")==0 || strcmp(verbe,"s'investir")==0 || strcmp(verbe,"s'unir")==0
                  || strcmp(verbe,"s'abetir")==0 || strcmp(verbe,"s'abonnir")==0 || strcmp(verbe,"s'abrutir")==0
                  || strcmp(verbe,"s'adoucir")==0 || strcmp(verbe,"s'affermir")==0 || strcmp(verbe,"s'aguerrir")==0
                  || strcmp(verbe,"s'aigrir")==0 || strcmp(verbe,"s'alourdir")==0 || strcmp(verbe,"s'amaigrir")==0
                  || strcmp(verbe,"s'amollir")==0 || strcmp(verbe,"s'amuïr")==0 || strcmp(verbe,"s'aplatir")==0
                  || strcmp(verbe,"s'applaudir")==0 || strcmp(verbe,"s'approfondir")==0 || strcmp(verbe,"s'assombrir")==0
                  || strcmp(verbe,"s'assouplir")==0 || strcmp(verbe,"s'assujettir")==0 || strcmp(verbe,"s'avilir")==0
                  || strcmp(verbe,"s'ebahir")==0 || strcmp(verbe,"s'eclaircir")==0 || strcmp(verbe,"s'engloutir")==0
                  || strcmp(verbe,"s'enlaidir")==0 || strcmp(verbe,"s'enorgueillir")==0 || strcmp(verbe,"s'epanouir")==0
                  || strcmp(verbe,"s'esbaudir")==0 || strcmp(verbe,"s'établir")==0 || strcmp(verbe,"s'inflechir")==0
                  || strcmp(verbe,"s'ourdir")==0 )
               {
                  memmove(verbe,verbe+2,20);
               verbe[strlen(verbe)-2]='\0';
					printf("je m'%sirai \n",verbe);
					printf("tu t'%siras \n",verbe);
					printf("il/elle s'%sira\n",verbe);
					printf("nous nous %sirons\n",verbe);
					printf("vous vous %sirez\n",verbe);
					printf("ils/elles s'%siront\n",verbe);
        }
        else if (strcmp(verbe,"se_batir")==0 || strcmp(verbe,"se_blanchir")==0 || strcmp(verbe,"se_blottir")==0 || strcmp(verbe,"se_brunir")==0 ||
         strcmp(verbe,"se_chancir")==0 || strcmp(verbe,"se_clapir")==0 || strcmp(verbe,"se_conjouir")==0 || strcmp(verbe,"se_convertir")==0 || strcmp(verbe,"se_decatir")==0 ||
         strcmp(verbe,"se_decrepir")==0 || strcmp(verbe,"se_definir")==0 || strcmp(verbe,"se_degarnir")==0 || strcmp(verbe,"se_degourdir")==0 || strcmp(verbe,"se_degrossir")==0 ||
         strcmp(verbe,"se_demunir")==0 || strcmp(verbe,"se_depolir")==0 || strcmp(verbe,"se_deraidir")==0 || strcmp(verbe,"se_desemplir")==0 || strcmp(verbe,"se_dessaisir")==0 ||
         strcmp(verbe,"se_desunir")==0 || strcmp(verbe,"se_divertir")==0 || strcmp(verbe,"se_durcir")==0 || strcmp(verbe,"se_farcir")==0 || strcmp(verbe,"se_flechir")==0 ||
         strcmp(verbe,"se_fletrir")==0 || strcmp(verbe,"se_fleurir")==0 || strcmp(verbe,"se_fournir")==0 || strcmp(verbe,"se_garnir")==0 || strcmp(verbe,"se_gauchir")==0 ||
         strcmp(verbe,"se_grandir")==0 || strcmp(verbe,"se_guerir")==0 || strcmp(verbe,"se_hair")==0 || strcmp(verbe,"se_languir")==0 || strcmp(verbe,"se_munir")==0 ||
         strcmp(verbe,"se_nantir")==0 || strcmp(verbe,"se_noircir")==0 || strcmp(verbe,"se_nourrir")==0 || strcmp(verbe,"se_pervertir")==0 || strcmp(verbe,"se_polir")==0 ||
         strcmp(verbe,"se_pourrir")==0 || strcmp(verbe,"se_premunir")==0 || strcmp(verbe,"se_rabougrir")==0 || strcmp(verbe,"se_raccourcir")==0 || strcmp(verbe,"se_racornir")==0 ||
         strcmp(verbe,"se_radoucir")==0 || strcmp(verbe,"se_raffermir")==0 || strcmp(verbe,"se_rafraichir")==0 || strcmp(verbe,"se_raidir")==0 || strcmp(verbe,"se_rajeunir")==0 ||
         strcmp(verbe,"se_ralentir")==0 || strcmp(verbe,"se_ramollir")==0 || strcmp(verbe,"se_rancir")==0 || strcmp(verbe,"se_rapointir")==0 || strcmp(verbe,"se_rappointir")==0 ||
         strcmp(verbe,"se_reassortir")==0 || strcmp(verbe,"se_reconvertir")==0 || strcmp(verbe,"se_reflechir")==0 || strcmp(verbe,"se_refroidir")==0 || strcmp(verbe,"se_rejouir")==0 ||
         strcmp(verbe,"se_rembrunir")==0 || strcmp(verbe,"se_remplir")==0 || strcmp(verbe,"se_repartir")==0 || strcmp(verbe,"se_resalir")==0 || strcmp(verbe,"se_ressaisir")==0 ||
         strcmp(verbe,"se_retablir")==0 || strcmp(verbe,"se_retrecir")==0 || strcmp(verbe,"se_reunir")==0 || strcmp(verbe,"se_roidir")==0 || strcmp(verbe,"se_rotir")==0 ||
         strcmp(verbe,"se_saisir")==0 || strcmp(verbe,"se_salir")==0 || strcmp(verbe,"se_tapir")==0 || strcmp(verbe,"se_tarir")==0 || strcmp(verbe,"se_ternir")==0 ||
         strcmp(verbe,"se_travestir")==0 || strcmp(verbe,"se_vieillir")==0)
         {
            memmove(verbe,verbe+3,20);
              verbe[strlen(verbe)-2]='\0';
					printf("je me %sirai \n",verbe);
					printf("tu te %siras \n",verbe);
					printf("il/elle se %sira\n",verbe);
					printf("nous nous %sirons\n",verbe);
					printf("vous vous %sirez\n",verbe);
					printf("ils/elles se %siront\n",verbe);
         }
         else printf("Ce verbe n'est pas du second groupe \n");
					break;
				
			}
		}


	return 0;
}
