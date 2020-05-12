#ifndef fleur_H
#define fleur_H
#include <string>

class fleur : public plante{
    private:
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
};

#endif