//
// Created by mohamedElHaddadi on 4/4/2022.
//

#include "Forme.h"
#include <iostream>
using namespace std;
void Forme::description() {
    cout<<"Ceci est une forme !"<<endl;
}

void Cercle::description() {
    cout<<"Ceci est un cercle !"<<endl;
}
void affichageDesc(Forme &f) {
    f.description();
}