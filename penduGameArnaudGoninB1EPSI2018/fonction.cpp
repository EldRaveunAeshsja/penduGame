#include <iostream>
#include "fonction.h"
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

char GetCaractere ()
{
    char caractere;
    cout << "Proposer une lettre :" << endl;
    cin >> caractere;
    return caractere;
}

int GetNombreAleatoire(int mn,int mx)
{
    return  mn + (rand() * (int)(mx - mn) / RAND_MAX);
}


string ChoisirMots(string mots[],int tailleTableau)
{
    return mots[GetNombreAleatoire(15,20)];

}

bool TestCaractere(char lettre, string mot, string &motCache)
{
    // string motEtoile("********************");
    bool reponse(false);
   // motEtoile.substr(0,mot.size());

    for (int i = 0; i <= mot.size() ; i++)
    {
        if (mot[i] == lettre)
        {
            motCache[i] = mot[i];
            reponse = true;
            cout << motCache << endl;
        }
        cout << motCache << endl;
    }
  //  cout << motEtoile << endl;
    return reponse;
}

int Life(bool reponse, int &vie)
{
    if (reponse == false) {

        vie = vie - 1;
        if (vie > 0) {
            cout << "il vous reste " << vie << " vie a jouer" << endl;

        } else {
            cout << "vous avez perdus" << endl;
        }
    } else{
        cout << "il vous reste " << vie << " vie a jouer" << endl;
    }
    return vie;
}

