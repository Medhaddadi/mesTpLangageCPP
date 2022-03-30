//
// Created by mohamed el haddadi on 3/13/2022.
//

#include "listePoint.h"
int main()
{ listePoint  l ;
    Point a(1,2), b(0,1), c(2,2) ;
    l.ajouter(&a) ; l.affichage() ; cout << "---------\n" ;
    l.ajouter(&b) ; l.affichage() ; cout << "---------\n" ;
    l.ajouter(&c) ; l.affichage() ; cout << "---------\n" ;
}