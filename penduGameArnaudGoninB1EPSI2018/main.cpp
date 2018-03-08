#include <iostream>
#include "fonction.h"
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

int main()
{

    char caractereRecu;
    int mn, mx;
    int randnombrerRecu;



    /* ---------------------------- */
    /* ---------------------------- */
    int tailleTableau(20);
    std::string mots[tailleTableau];
    std::string motsTrouver;
    //////////////////////////////////
    //tableau
        mots[0]     =   "un";
        mots[1]     =   "deux";
        mots[2]     =   "cinq";
        mots[3]     =   "rouge";
        mots[4]     =   "membre";
        mots[5]     =   "consil";
        mots[6]     =   "donner";
        mots[7]     =   "reponse";
        mots[8]     =   "etat";
        mots[9]     =   "son";
        mots[10]    =   "armement";
        mots[11]    =   "peu";
        mots[12]    =   "apres";
        mots[13]    =   "vacances";
        mots[14]    =   "annonce";
        mots[15]    =   "mercredi";
        mots[16]    =   "evident";
        mots[17]    =   "regime";
        mots[18]    =   "affirmer";
        mots[19]    =   "arme";
     ////////////////////////////////////
    /* ---------------------------- */
    /* ---------------------------- */

    caractereRecu = GetCaractere();

    cout << caractereRecu << endl;
    cout << "choisissez deux nombres:" << endl;
    cin >> mn;
    cin >> mx;

    randnombrerRecu = GetNombreAleatoire(mn,mx);

    cout << randnombrerRecu << endl;

    motsTrouver = ChoisirMots(mots,tailleTableau);
    cout << motsTrouver << endl;



    return 0;
}
