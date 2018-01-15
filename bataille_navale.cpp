
//*************************************************************************** //
//  PROGRAMME :  modele.ccp (mettre � jour ce cartouche)
//  DATE      :
//  OBJET     :
//  AUTEUR(S) :
//***************************************************************************

// ===================== Liste des fichiers d'en-t�te ======================= //
#include <iostream>			// flux d'entr�e sortie
#include <iomanip>			// manipulateurs de flux
#include <cstdlib>		    // biblioth�que c standart
#define _USE_MATH_DEFINES	// biblioth�que math�matique
#include <cmath>
#include <clocale>			// caract�res accentu�s

using namespace std;		// permet d'utiliser les flux cin et cout

// =============================== Constantes =============================== //
/* d�clarez ici les constantes */
const int MAXPLT = 10;
const int MAXCH = 30;
// ================================== Types ================================= //
/* d�clarez ici les nouveaux types */

typedef char t_grille[MAXPLT][MAXPLT];

typedef char t_chaine[MAXCH];

typedef struct  {
                    int vie;
                    int x ;
                    int y ;
                    int lng;

                }t_bat;

// ============================ Sous programmes ============================= //
/* d�clarez ici les sous-programmes */


char menu ();
{
     char chx;

    cout<<"     Bataille navale "<<endl;
    cout<<"menu:"<<endl;
    cout<<" <p>jouer en pvp"<<endl;
    cout<<" <q>quitter"<<endl;
    cout<<"que voulez vous faire ?"<<endl;
    cin>>chx;


    return(chx);
}

void nom_joueur(t_chaine & nom_joueur)
{
    //demender le nom d'un joueur
    cout<<"Entrez le nom du joueur "<<endl;
    cin>>t_chaine;

}

void initgrille(t_grille & grille)
{
   int cptl , cptc;
    
    
    
    for(cptl = 0 ; cptl < MAXPLT ;cptl++)
    {
        for(cptc = 0 ; cptc < MAXPLT ; cptc++)
        {
         grille[cptl][cptc]=' ';
        }
            
    }
}





void aff_grille(t_grille & grille)
{
   //aff la grille
   int i,j;
   for(i=0 ; i<MAXPLT ; i++)
   {
    for(j=0 ; j<MAXPLT ; j++)
    {
      cout<<grille[i][j];
    };
  }
}



void placement_bateaux(t_grille & grille_placement)
{

}

void demender_placement(t_grille & grille_placement)
{

}

void tir( t_grille & grille_tir ; t_grille & grille_placement ; bool & resultat)
{

}

void qgagnant ( bool resultat ; int & joueur ; int & score )
{

}



// ========================== Programme principal =========================== //
int main(void)
{

   // D�clarations locales

   // Actions
   setlocale(LC_ALL, "french");

   // retour au syst�me d'exploitattion
   return 0;
}
// ============================ Fin du programme ==========================
