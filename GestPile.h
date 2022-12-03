#include <iostream>

using namespace std;

typedef struct Liste
{
    int val;
    struct Liste *suiv;
}Liste;

//Prototype ____________________________
Liste *Empiler(Liste *pile,int v);
Liste *Depiler(Liste *pile,int *v);
bool PileVide(Liste *pile);
void AffichePile(Liste *pile);

//function _____________________________

Liste *Empiler(Liste *pile,int v)
{
    Liste *ptr=new Liste;
    ptr->val=v;
    ptr->suiv=NULL;
    if(!(PileVide(pile)))
    {
        ptr->suiv=pile;
    }
    pile=ptr;
    return (pile);
}

Liste *Depiler(Liste *pile,int *v)
{
    if(!(PileVide(pile)))
    {
        Liste *ptr = pile;
        *v = pile->val;
        if(pile->suiv!=NULL)
        {
            pile=pile->suiv;
            delete(ptr);
        }
        else
        {
            delete(ptr);
            pile=NULL;
        }
    }
    else
    {
        cout << "La Pile est vide !" << endl;
    }
    return pile;
}

bool PileVide(Liste *pile)
{
    return(pile==NULL);
}

void AffichePile(Liste *pile)
{
    while (!PileVide(pile))
    {
        int v=0;
        pile=Depiler(pile,&v);
        cout << v << endl ;
    }
}
