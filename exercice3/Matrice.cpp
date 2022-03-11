//
// Created by mohamed el haddadi on 3/11/2022.
//
#include "Matrice.h"
Matrice::Matrice(int i, int j) {
    n=i;m=j;
    Line=new ligne[m*n];
    for (int k = 0; k < n; ++k) {
        for (int l = 0; l < m; ++l) {
            *(Line+k*m+l)=0;
        }
    }
}

void Matrice::affiche() {
    cout<<"la taille de la matrice est : "<<n<<" ligne "<<n<<" colone "<<endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout<<" |"<< *(Line+i*m+j)<<"|";
        }
        cout<<endl;
    }
}
Matrice::Matrice(Matrice &M) {
    m=M.m;n=M.n;
    Line=new ligne[m*n];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            *(Line+i*m+j)=*(M.Line+i*m+j);
        }
    }
}

Matrice::~Matrice() {
    delete Line;
}