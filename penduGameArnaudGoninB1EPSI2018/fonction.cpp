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
    return mn + (int)((double)rand() / (RAND_MAX+1) * (mx-mx+1));
}


std::string ChoisirMots(std::string mots[],int tailleTableau)
{
    return mots[GetNombreAleatoire(0,100)];

}
