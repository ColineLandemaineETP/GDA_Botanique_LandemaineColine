#ifndef botaniste_CPP
#define botaniste_CPP
#include <iostream>
#include "botaniste.h"

void botaniste::engrais(){
        _entretien-=60;
        if(_entretien<0) _entretien=0;
        _pousse+=120;
    }

void botaniste::arrosage(){
        _hydratation-=heure*10;
        if(_hydratation<0) _hydratation=0;
         _pousse+=60;
    }

void botaniste::soin(){
        _vie+=60;
    }   

void botaniste::taillage(){
        _vie-=50;
        _pousse+=60;

    }

void botaniste::affiche(){
        std::cout<<_nom<< "est entretenue à" << _ entretien<< "/300, est hydratée à" << _hydratation << "/300, a " << _vie << "/300. " << std::endl;
    
    }

    #endif