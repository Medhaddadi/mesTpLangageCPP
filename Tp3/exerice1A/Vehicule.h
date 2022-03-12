//
// Created by mohamed el haddadi on 3/12/2022.
//

#ifndef EXERCICE_2_VEHICULE_H
#define EXERCICE_2_VEHICULE_H
#include <iostream>
using namespace std;

class Vehicule {
protected:
    char *Matricule;
    char *Marque;
    int anneeModele;
    float PrixHT;
public:
    Vehicule(char *,char*,int ,float);
    Vehicule(const Vehicule&);
  ~Vehicule();
  virtual void afficher();
  void setPrixHT(float p);
  float getPrixTTC();
};

class Voiture:public Vehicule
{
    int nbrePlace;
    static int nbVoiture;
public:
    Voiture(char *,char*,int ,float,int);
    Voiture(Voiture &);
    void afficher();
};
#endif //EXERCICE_2_VEHICULE_H
