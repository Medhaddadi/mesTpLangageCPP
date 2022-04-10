//
// Created by mohamedElHaddadi on 3/26/2022.
//

#include "Personne.h"
int main()
{
    Personne *P=new Enseignant[10];
    for (int i = 0; i < 5; ++i) {
        P[i]=Enseignant("mohamed ","el",12);
        P[i].affichage();
    }
    /*for (int i = 0; i < 5; ++i) {
        P[i]=Enseignant("mohamed ","el",12);
    }
    for (int i = 0; i < 10; ++i) {
        P[i].affichage();
    }*/
   /*Personne p1("el hadaddi","medo",21);
   Personne p2("dadi","medo",44);
   p1.affichage();
   p1=p2;
   p1.affichage();*/
 /*  Etudiant *E=new Etudiant[10];
    for (int i = 0; i < 9; ++i) {
        E[i]=Etudiant("mohamed ","el haddadi",21+i);
        for (int j = 0; j < 5; ++j) {
            E[i].ajouterMat("englisch",10+j);
        }
        E[i].affichage();
    }
    E[10]=Etudiant("mamed ","el ",21);
    for (int j = 0; j < 5; ++j) {
        E[10].ajouterMat("englisch",12);
    }
    E[10].affichage();*/
 /* Enseignant r[5];
    for (int i = 0; i < 5; ++i) {
        r[i]=Enseignant("moham","el",12+i);
        for (int j = 0; j < 5; ++j) {
            r[i].ajouterMatP("englisch",6);
        }
        r[i].affichage();
    }
*/
    return 0;
}