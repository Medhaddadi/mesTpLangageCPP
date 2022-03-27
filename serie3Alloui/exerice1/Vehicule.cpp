//
// Created by mohamedElHaddadi on 3/26/2022.
//

#include "Vehicule.h"
Vehicule::Vehicule(char *mat, char *mar, int ann, float prix) {
    Matricule=mat;
    Marque=mar;
    AnneeModele=ann;
    PrixHT=prix;
}
Vehicule::Vehicule(const Vehicule &v) {
    Matricule=v.Matricule;
    Marque=v.Marque;
    AnneeModele=v.AnneeModele;
    PrixHT=v.PrixHT;
}
Vehicule::~Vehicule(){
    delete Marque;
    delete Matricule;
}

void Vehicule::afficher() {
    cout<<"Matricule :"<<Matricule<<endl;
    cout<<"Marque    :"<<Marque<<endl;
    cout<<"AnnModele :"<<AnneeModele<<endl;
    cout<<"PrixHT    :"<<PrixHT<<endl<<endl;
}

void Vehicule::setPrixHT(float p) {
    PrixHT=p;
}

float Vehicule::getPrixHt() {return PrixHT;}

int Voiture::nbVoiture=0;
Voiture::Voiture(char *mat, char *mar, int ann, float prix,int nb): Vehicule(mat,mar,ann,prix) {
    nbrePlace=nb;
    nbVoiture++;
}
Voiture::Voiture(const Voiture &v) {
    
}