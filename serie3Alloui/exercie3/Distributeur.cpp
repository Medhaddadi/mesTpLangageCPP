//
// Created by mohamedElHaddadi on 4/3/2022.
//

#include "Distributeur.h"

void Distributeur::ajouterPiece(float x) {
    sommeArgent+=x;
}
void Distributeur::delivreBoisson() {
    if(sommeArgent<5)
        cout<<"pas assez"<<endl;
    else {
        cout<<"voila"<<endl;
        if (sommeArgent!=5)
            cout<<"il vous reste :"<<sommeArgent-5<<endl;
    }
}
DistributeurMulti::DistributeurMulti() {
    nbType=1;
}
DistributeurMulti::DistributeurMulti(int n) {
    nbType=n;
}

void DistributeurMulti::selection(int i) {
    if (i >= 1 && i <= nbType)
        Type = i;
    else
        cout << "erreur de selaction " << endl;
}

void DistributeurMulti::delivreBoisson() {
    if (Type==0)
        cout<<"selectionnez une boisson "<<endl;
    else
        Distributeur::delivreBoisson();
}
