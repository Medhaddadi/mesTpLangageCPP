//
// Created by mohamedElHaddadi on 5/30/2022.
//
#include "Individus.h"
int main(){
    Personne p("mohamed1" ,"elhaddadi1");
    Personne p2("mohamed2" ,"elhaddadi2");
    Personne p3("mohamed3" ,"elhaddadi3");
    p.setAttestationToTrue();
    p.afficher();
    File file;
    file+p;
    file+p2;
    file+p3;
    file.afficher();
    --file;
    file.afficher();
    return 0;
}