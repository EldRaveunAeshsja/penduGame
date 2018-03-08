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
/*
bool TestCaractere(char lettre, string mot, string &motCache)
{
    int tailleMot;
    // string motEtoile("********************");
    bool reponse(false);


    tailleMot(mot.size());
   // motEtoile.substr(0,mot.size());

    for (int i = 0; i <= tailleMot ; i++)
    {
        if (mot[i] == lettre)
        {
  //          motEtoile[i] = mot[i];
            reponse = true;
        }
    }

  //  cout << motEtoile << endl;
    return reponse;

}
*/
