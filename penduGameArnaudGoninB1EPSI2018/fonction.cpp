#include <iostream>
#include "math.h"
#include <cstdlib>
#include <ctime>
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
    return rand()%(mx - mn) + mn;
}

