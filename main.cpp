#include <iostream>
#include "botaniste.h"
#include "joueur.h"
#include "fleur.h"


void timer(int minutes){
    for(minutes==0)
    {
            break;
        }

        system("cls");
        cout<<h<<":"<<m<<":"<<s--;
    }

int main(){

    botaniste * botaniste = new botaniste("botaniste");
    botaniste->affiche();

    fleur * fleur = new fleur("fleur");
    fleur->affiche();

    joueur * myself = new joueur ("jardinier");

    myself->engrais(botaniste);
    botaniste->affiche();

    myself->arrosage(botaniste);
    botaniste->affiche();

    myself->soigner(botaniste);
    botaniste->affiche();

    myself->taillage(botaniste);
    botaniste->affiche();



    myself->engrais(fleur);
    fleur->affiche();

    myself->arrosage(fleur);
    fleur->affiche();

    myself->soigner(fleur);
    fleur->affiche();

    myself->taillage(fleur);
    fleur->affiche();
    

    int minutes;
    cout<<"Minutes: "; cin>> minutes;
    timer(minutes);
    for (int i = 100; ; i = i + 50)

return 0;
    }


   