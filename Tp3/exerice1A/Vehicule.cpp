//
// Created by mohamed el haddadi on 3/12/2022.
//

#include "Vehicule.h"
Vehicule::Vehicule(char *mat, char *mar, int ann, float prix) {
    Matricule=mat;
    Marque=mar;
    anneeModele=ann;
    PrixHT=prix;
}
Vehicule::Vehicule(const Vehicule &mat) {
    Matricule=mat.Matricule;
    Marque=mat.Marque;
    anneeModele=mat.anneeModele;
    PrixHT=mat.PrixHT;
}
Vehicule::~Vehicule() {
    delete Marque;
    delete Matricule;
}
void Vehicule::afficher() {
    cout<<"le matricule : "<<Matricule<<endl;
    cout<<"la marque    : "<<Marque<<endl;
    cout<<"l'annee Model: "<<anneeModele<<endl;
    cout<<"le prix      : "<<PrixHT<<endl;
}
void Vehicule::setPrixHT(float p) {
    PrixHT=p;
}
float Vehicule::getPrixTTC() {
    return PrixHT;
}
Voiture::Voiture(Voiture &V1):Vehicule(V1) {
    nbrePlace=V1.nbrePlace;
    nbVoiture++;
}
Voiture::Voiture(char *mat, char *mar, int ann, float p, int nbP): Vehicule(mat,mar,ann,p) {
    nbrePlace=nbP;
    nbVoiture++;
}
void Voiture::afficher() {
    cout<<"la "<<nbVoiture<<"est :"<<endl;
    Vehicule::afficher();
    cout<<"le nombre de place :"<<nbrePlace<<endl<<endl;
}
int Voiture::nbVoiture=0;
