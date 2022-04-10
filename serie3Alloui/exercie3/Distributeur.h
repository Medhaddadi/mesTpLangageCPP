//
// Created by mohamedElHaddadi on 4/3/2022.
//

#ifndef EXERCICE_2_DISTRIBUTEUR_H
#define EXERCICE_2_DISTRIBUTEUR_H
using namespace std;
#include <iostream>
class Distributeur {
  float  sommeArgent=0;
public:
    void ajouterPiece(float x);
   virtual void delivreBoisson();
};
class DistributeurMulti:public Distributeur{
    int nbType;
    int Type;
public:
    DistributeurMulti();
    DistributeurMulti(int n);
    void selection(int i);
    void delivreBoisson();
};

#endif //EXERCICE_2_DISTRIBUTEUR_H
