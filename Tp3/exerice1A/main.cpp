//
// Created by mohamed el haddadi on 3/12/2022.
//

#include "Vehicule.h"
int main()
{

    Voiture v("1234-A-50","Marqx",2007,15000,4);
    v.afficher();
    Voiture V2(v);
    V2.afficher();

    return 0;
}