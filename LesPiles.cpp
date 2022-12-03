#include <iostream>
#include "GestPile.h"

using namespace std;

int main()
{
    Liste *pile=NULL;
    int v=0;
//test Empiler _________________________________________
    cout << "Empiler :" << endl;
    for(int i=0;i<10;i++)
    {
        cin >>v;
        pile=Empiler(pile,v);
    }
//test PileVide ________________________________________
    if(PileVide(pile))
    {
        cout << "Pile est vide ." << endl;
    }
    else
    {
        cout << "Pile not vide ." << endl;
    }
//test Depiler _________________________________________
    cout << "Depiler :" << endl;
    for(int i=0;i<10;i++)
    {
        pile=Depiler(pile,&v);
        cout << v << endl;
    }
//test PileVide ________________________________________
    if(PileVide(pile))
    {
        cout << "Apres Depiler Pile est vide ." << endl;
    }
    else
    {
        cout << "Apres Depiler Pile not vide ." << endl;
    }
    return 0;
}
