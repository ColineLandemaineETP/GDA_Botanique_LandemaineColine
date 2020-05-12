#ifndef joueur_CPP
#define joueur_CPP
#include <string>
#include "joueur.h"
#include "fleur.h"
#include "botaniste.h"


void joueur::engrais(botaniste * cible){
    cible->engrais();
}

void joueur::arrosage(botaniste * cible){
    cible->arrosage(1);
}

void joueur::soigner(botaniste * cible){
    cible->soigner(60);
} 

void joueur::taillage(botaniste * cible){
    cible->taillage(60);
}



void joueur::engrais(fleur * cible){
    cible->engrais();
}

void joueur::arrosage(fleur * cible){
    cible->arrosage(1);
}

void joueur::soigner(fleur * cible){
    cible->soigner(60);
} 

void joueur::taillage(fleur * cible){
    cible->taillage(60);
}


Player::Player(std::string nomPlayer){
}

#endif