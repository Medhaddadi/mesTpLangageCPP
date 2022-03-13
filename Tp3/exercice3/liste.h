//
// Created by mohamed el haddadi on 3/13/2022.
//

#ifndef EXERCICE_2_LISTE_H
#define EXERCICE_2_LISTE_H
#include <iostream>
using namespace std;
struct element {
    void *contenu;
    element *suivant;
};
class liste {
  element* debut;
  element*courant;
public:
    liste();
    ~liste();
    void ajouter(void *);
    liste& operator=(liste&);
    bool empty();
    int getSize();
    void *premier();
    void *prochain();
    int fini();
};


#endif //EXERCICE_2_LISTE_H
