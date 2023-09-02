#include "enseignant.h"

Enseignant::Enseignant()
{
     cin="";
     prenom="";
     nom="";

}

void Enseignant::setcin(QString n){cin=n;}
void Enseignant::setprenom(QString n){prenom=n;}
void Enseignant::setnom(QString n){nom=n;}

QString Enseignant::get_cin(){return cin;}
QString Enseignant::get_prenom(){return prenom;}
QString Enseignant::get_nom(){return nom;}
