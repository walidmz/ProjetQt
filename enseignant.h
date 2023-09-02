#ifndef ENSEIGNANT_H
#define ENSEIGNANT_H
#include<QString>


class Enseignant
{
public:
    void setcin(QString n);
    void setprenom(QString);
    void setnom(QString n);
    QString get_cin();
    QString get_prenom();
    QString get_nom();

    Enseignant();

private :
    QString cin,prenom,nom;
};

#endif // ENSEIGNANT_H
