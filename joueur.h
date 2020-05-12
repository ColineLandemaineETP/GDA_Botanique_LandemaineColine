#ifndef joueur_H
#define joueur_H
#include <string>
#include "fleur.h"
#include "botaniste.h"

class joueur {
    private:
    
    int _engrais;
    std::string _joueurNom;

    public:

    void engrais(botaniste * cible);
    void taillage(botaniste * cible);
    void soigner(botaniste * cible);
    void ArroserPlante(botaniste * cible);

    void engrais(fleur * cible);
    void taillage(fleur * cible);
    void soigner(fleur * cible);
    void ArroserPlante(fleur * cible);

    joueur(std::string nomJoueur);
}

#endif