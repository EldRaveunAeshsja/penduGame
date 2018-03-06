#include <iostream>
#include "fonction.h"
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{

    char caractereRecu;
    int mn;
    int mx;
    int randnombrerRecu;

    caractereRecu = GetCaractere();

    cout << caractereRecu << endl;

    cout << "choisissez deux nombres:" << endl;
    cin >> mn;
    cin >> mx;

    randnombrerRecu = GetNombreAleatoire(mn,mx);

    cout << randnombrerRecu << endl;

    return 0;
}
