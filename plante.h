#ifndef plante_H
#define plante_H
#include <string>
#include <iostream>

class plante{
    protected:
        int _entretien;
        int _hydratation;
        int _vie;
        int _pousse;
        std::string _nom;
    
    public:

    void engrais();
    void arrosage();
    void soin();
    void taillage();
    void affiche();

    plante(std::string name);
};

#endif