//
// Created by mohamed el haddadi on 3/12/2022.
//
#include "Individu.h"
int main()
{

    Etudiant etudiant("el haddadi","mohamed",20," 3eme annee","gi1");
    cout<<etudiant;
    Etudiant et(etudiant);
    cout<<et;
    return 0;
}
