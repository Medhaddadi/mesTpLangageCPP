//
// Created by mohamed el haddadi on 3/12/2022.
//

#include "Individu.h"
Individu::Individu(const Individu &person) {
    age=person.age;
    nom=person.nom;
    prenom=person.prenom;
}

string Individu::getNom() {
    return nom;
}
string  Individu::getPrenom() {
    return prenom;
}
int Individu::getAge()
{
    return age;
}

string Etudiant::getFiliere() {return filiere;}
string Etudiant::getNiveau() {return niveau;}
Individu::Individu(string nom1, string prenom1, int age1) {
    nom=nom1;
    prenom=prenom1;
    age=age1;
}
Etudiant::Etudiant(string Nom, string Prenom, int Age, string Niveau, string Filiere): Individu(Nom,Prenom,Age) {
    niveau=Niveau;
    filiere=Filiere;
}
Etudiant::Etudiant(Etudiant &etudiant1): Individu(etudiant1) {
   niveau=etudiant1.niveau;
   filiere=etudiant1.filiere;
}
 ostream& operator<<(ostream &os, Etudiant &et1 ){
     os<<"le Nom   : "<<et1.getNom()<<endl;
     os<<"le Prenom: "<<et1.getPrenom()<<endl;
     os<<"le Age   : "<<et1.getAge()<<endl;
     os<<"le Niveau: "<<et1.getNiveau()<<endl;
     os<<"le filier: "<<et1.getFiliere()<<endl;
     os<<endl;
}