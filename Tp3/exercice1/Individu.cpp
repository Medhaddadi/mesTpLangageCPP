//
// Created by mohamed el haddadi on 3/12/2022.
//
#include "exercice2.h"
#include "Individu.h"

Individu::Individu(const Individu &person) {
    age=person.age;
    nom=person.nom;
    prenom=person.prenom;
}
Individu::Individu(String nom1, String prenom1, int age1) {
    nom=nom1;
    prenom=prenom1;
    age=age1;
}
String Individu::getNom() {
    return nom;
}
String  Individu::getPrenom() {
    return prenom;
}
int Individu::getAge()
{
    return age;
}

void Individu::affichage(){
    cout<<"Nom:"<<nom<<endl;
    cout<<"Prenom:"<<prenom<<endl;
    cout<<"age:"<<age<<endl;
}
String Etudiant::getFiliere() {return filiere;}
String Etudiant::getNiveau() {return niveau;}
Etudiant::Etudiant(String Nom, String Prenom, int Age, String Niveau, String Filiere): Individu(Nom,Prenom,Age) {
    niveau=Niveau;
    filiere=Filiere;
}
Etudiant::Etudiant(Etudiant &etudiant1): Individu(etudiant1) {
   niveau=etudiant1.niveau;
   filiere=etudiant1.filiere;
}
istream& operator>>(istream &is ,Etudiant &e)
{

    is >> e.getAge();
    is>>e.getFiliere();
    is>>


    return is ;
}
 ostream& operator<<(ostream &os, Etudiant &et1 ){
     os<<"le Nom   : "<<et1.getNom()<<endl;
     os<<"le Prenom: "<<et1.getPrenom()<<endl;
     os<<"le Age   : "<<et1.getAge()<<endl;
     os<<"le Niveau: "<<et1.getNiveau()<<endl;
     os<<"le filier: "<<et1.getFiliere()<<endl;
     os<<endl;
}
