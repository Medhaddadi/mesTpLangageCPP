//
// Created by mohamed el haddadi on 3/12/2022.
//

#ifndef EXERCICE_2_INDIVIDU_H
#define EXERCICE_2_INDIVIDU_H
#include <iostream>
#include <string>
using namespace std;
class Individu {
private:
    int age;
    string nom;
    string prenom;
public:
    Individu(string nom="",string prenom="",int age=0);
    Individu(const Individu &);
    string getNom();
    string getPrenom();
    int getAge();
};
class Etudiant:public Individu{
private:
    string niveau;
    string filiere;
public:
    string getNiveau();
    string getFiliere();
    Etudiant(string Nom,string Prenom ,int Age,string Niveau="",string Filiere="");
    Etudiant(Etudiant &);
    friend ostream& operator<<(ostream &, Etudiant & );
};
#endif //EXERCICE_2_INDIVIDU_H
