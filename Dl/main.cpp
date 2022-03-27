//
// Created by mohamedElHaddadi on 3/26/2022.
//

#include "Personne.h"
int main()
{
    /*Personne p;
    p.affichage();*/
   /* Personne p1("mohamed ","mohamed el hadadi",20);
    p1.affichage();
    p1.setNom("medo");
    p1.affichage();
    Personne p2;
    p2=p1;
    p2.affichage();*/
   /* Etudiant et("mohamed ","mohamed el hadadi",20,NULL);
    et.affichage();
    et.ajouterMat("emglish",12.1);
    et.ajouterMat("emglish",12.1);
    et.ajouterMat("emglish",12.1);
    et.ajouterMat("emglish",14.1);
    et.ajouterMat("emglish",12.1);
    et.affichage();
    cout<<"moyenne:"<<et.moyen();*/
   Enseignant en("mohamed","el haddadi",20,NULL);
   en.affichage();
   en.ajouterMatP("english",22);
   en.ajouterMatP("espanol",23);en.affichage();
   cout<<"somme des heure est:"<<en.TotalHeure();
    return 0;
}