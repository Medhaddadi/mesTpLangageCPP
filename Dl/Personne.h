//
// Created by mohamedElHaddadi on 3/26/2022.
//

#ifndef EXERCICE_2_PERSONNE_H
#define EXERCICE_2_PERSONNE_H

#include <iostream>
#include "String.h"
#define UIN unsigned int
using namespace std;

class Personne {
protected:
  String nom;
  String prenom;
  UIN age;
public:
    Personne();
    Personne(String,String,UIN);
    ~Personne();
    void virtual affichage();
    void setNom(String);
    void setPrenom(String);
    void setAge(UIN);
    Personne & operator=(const Personne  &);
};
typedef struct listeEt{
    float note;
    String matiere;
    struct  listeEt *next;
    int taille ;
};
class Etudiant:public Personne
{
    listeEt *matiere;
public:
    Etudiant();
    Etudiant(String ,String,UIN,listeEt*);
    void ajouterMat(String ,float );
    void affichage();
    ~Etudiant();
    float moyen();
};
typedef struct listeEn{
    int nbMatiere;
    String matiere;
    struct  listeEn *next;
    int taille ;
};
class Enseignant:public Personne
{
    listeEn *matiereP;
public:
    Enseignant();
    Enseignant(String ,String,UIN,listeEn*);
    void ajouterMatP(String ,int );
    void affichage();
    int TotalHeure();
    ~Enseignant();
};
#endif //EXERCICE_2_PERSONNE_H
