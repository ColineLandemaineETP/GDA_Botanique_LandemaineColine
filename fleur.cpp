#ifndef fleur_CPP
#define fleur_CPP
#include <iostream>
#include "fleur.h"

void fleur::engrais(){
        _entretien-=60;
        if(_entretien<0) _entretien=0;
        _pousse+=120;
    }

void fleur::arrosage(){
        _hydratation-=heure*10;
        if(_hydratation<0) _hydratation=0;
         _pousse+=60;
    }

void fleur::soin(){
        _vie+=60;
    }   

void fleur::taillage(){
        _vie-=50;
        _pousse+=60;

    }

void fleur::affiche(){
        std::cout<<_nom<< "est entretenue à" << _ entretien<< "/300, est hydratée à" << _hydratation << "/300, a " << _vie << "/300. " << std::endl;
    
    }

    #endif