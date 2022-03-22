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
/*bool Matrice::operator==(Matrice &Mat) {
    for (int i = 0; i < m*n; ++i) {
        if(*(Line+i)!=*(Line+i))
            return false;
    }
    return true;
}*/
double Matrice::operator()(int i, int j) {
    return *(*(Line+i*n+m));
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
void Matrice::remplirMatrice() {
    cout<<"donnez la taille de Matrice : "<<n <<" "<<m<<endl;
    cout<<"saisir les donnez de la matrice :"<<endl;
    for (int i = 0; i < n; ++i) {
        cout<<"ligne:"<<i+1<<endl;

        for (int j = 0; j < m; ++j) {
            double t;
            cin>>t;
            *(Line+i*n+j)=t;
        }
    }
}

Matrice::~Matrice() {
    delete Line;
}