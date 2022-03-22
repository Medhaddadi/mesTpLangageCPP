//
// Created by mohamed el haddadi on 3/11/2022.
//

#ifndef EXERCICE_2_MATRICE_H
#define EXERCICE_2_MATRICE_H
#include <iostream>

using namespace std;
class Matrice{
    typedef double *ligne;
    ligne *Line;
    int n,m;
public:
    Matrice(int ,int);
    Matrice(Matrice &);
    ~Matrice();
    Matrice& operator==(Matrice &);
    double operator()(int ,int );
    Matrice &operator *=(Matrice &);
    void remplirMatrice();
    void affiche();

};
#endif //EXERCICE_2_MATRICE_H
