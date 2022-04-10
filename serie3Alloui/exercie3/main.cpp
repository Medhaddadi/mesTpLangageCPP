//
// Created by mohamedElHaddadi on 4/3/2022.
//
#include "Distributeur.h"
int main(){
    DistributeurMulti d(3);
    d.ajouterPiece(6);
    d.selection(2);
    d.delivreBoisson();
    return 0;
}