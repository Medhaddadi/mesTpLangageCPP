//
// Created by mohamedElHaddadi on 3/26/2022.
//

#ifndef EXERCICE_2_VEHICULE_H
#define EXERCICE_2_VEHICULE_H
#include <iostream>
using namespace std;
class Vehicule {
protected:
    char *Matricule;
    char *Marque;
    int AnneeModele;
    float PrixHT;
public:
    Vehicule(char*,char*,int ,float );
    Vehicule(const Vehicule &v);
    ~Vehicule();
    virtual void afficher();
    void setPrixHT(float );
    float getPrixHt();
};
class Voiture:public Vehicule
{
private:
    static int nbVoiture;
    int nbrePlace;
public:
    Voiture(char*,char*,int ,float ,int );
    Voiture(const Voiture &);
    ~Voiture();
    void afficher();
};

#endif //EXERCICE_2_VEHICULE_H
