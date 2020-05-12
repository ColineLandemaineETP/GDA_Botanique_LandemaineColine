#ifndef botaniste_H
#define botaniste_H
#include <string>

class botaniste : public plante{
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