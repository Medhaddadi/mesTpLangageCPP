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
    String nom;
    String prenom;
public:
    Individu(String nom="",String prenom="",int age=0);
    Individu(const Individu &);
    String getNom();
    String getPrenom();
    int getAge();
    void affichage();
};

class Etudiant:public Individu{
private:
    String niveau;
    String filiere;
public:
    friend istream& operator>>(istream & ,Etudiant &);
    String getNiveau();
    String getFiliere();
    Etudiant(String Nom,String Prenom ,int Age,String Niveau="",String Filiere="");
    Etudiant(Etudiant &);
    friend ostream& operator<<(ostream &, Etudiant & );
};
#endif //EXERCICE_2_INDIVIDU_H
