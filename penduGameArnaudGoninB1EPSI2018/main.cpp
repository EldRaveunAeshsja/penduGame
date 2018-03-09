#include <iostream>
#include "fonction.h"
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

int main()
{

    char caractereRecu(0);
    int mn(0), mx(0);
    int randnombrerRecu(0);



    /* ---------------------------- */
    /* ---------------------------- */
    int tailleTableau(20);
    string mots[tailleTableau];
    string motsTrouver("rien");
    string motCache("*******************");
    //////////////////////////////////
    //tableau
        mots [0]    =   "un"        ;
        mots [1]    =   "deux"      ;
        mots [2]    =   "cinq"      ;
        mots [3]    =   "rouge"     ;
        mots [4]    =   "membre"    ;
        mots [5]    =   "consil"    ;
        mots [6]    =   "donner"    ;
        mots [7]    =   "reponse"   ;
        mots [8]    =   "etat"      ;
        mots [9]    =   "son"       ;
        mots[10]    =   "armement"  ;
        mots[11]    =   "peu"       ;
        mots[12]    =   "apres"     ;
        mots[13]    =   "vacances"  ;
        mots[14]    =   "annonce"   ;
        mots[15]    =   "mercredi"  ;
        mots[16]    =   "evident"   ;
        mots[17]    =   "regime"    ;
        mots[18]    =   "affirmer"  ;
        mots[19]    =   "arme"      ;
     ////////////////////////////////////
    /* ---------------------------- */
    /* ---------------------------- */

    bool reponse(NULL);
    string continuer("yes");
    int vie(10);


    while(continuer == "yes")
        {
            vie = 10;
            motsTrouver = ChoisirMots(mots,tailleTableau);
            //  motCache =&motsTrouver
            cout << motsTrouver << endl;
            cout << motCache << endl;

            cout << caractereRecu << endl;
            cout << "choisissez deux nombres:" << endl;
            cin >> mn;
            cin >> mx;

            randnombrerRecu = GetNombreAleatoire(mn,mx);

            cout << randnombrerRecu << endl;
            while(vie > 0)
            {
                caractereRecu = GetCaractere();
                reponse = TestCaractere(caractereRecu,motsTrouver, motCache);
                cout << reponse << endl;

                vie = Life(reponse,vie);
                if(motCache == motsTrouver)
                {
                    cout << "VOUS AVEZ GAGNE GG WP" << endl;
                }


            }
            cout << "voulez vous continuerz. (yes/no)" << endl;
            cin >> continuer;
        }


    return 0;
}
