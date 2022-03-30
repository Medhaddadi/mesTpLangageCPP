//
// Created by mohamedElHaddadi on 3/30/2022.
//

#ifndef EXERCICE_2_LISTEPOINT_H
#define EXERCICE_2_LISTEPOINT_H
#include <iostream>
using namespace std;
class point
{ int x, y ;
public :
    point (int abs=0, int ord=0) { x=abs ; y=ord ; }
    void affiche () { cout << "Coordonnées : " << x << " " << y << "\n" ; }
} ;
struct element
{ element * suivant ;
    void * contenu ;
} ;
class liste
{ element * debut ;
    element * courant ;
public :
    liste ()
    { debut = NULL ;
        courant = debut ;
    }
    ~liste () ;
    void ajoute (void *) ;
    void * premier ()
     { courant = debut ;
        if (courant != NULL) return (courant->contenu) ;
        else return NULL ;
    }
    void * prochain () // positionne sur prochain élément
    { if (courant != NULL)
        { courant = courant->suivant ;
            if (courant != NULL) return (courant->contenu) ;
        }
        return NULL ;
    }
    int fini () { return (courant == NULL) ; }
} ;
liste::~liste ()
{ element * suiv ;
    courant = debut ;
    while (courant != NULL )
    { suiv = courant->suivant ; delete courant ; courant = suiv ; }
}
void liste::ajoute (void * chose)
{ element * adel = new element ;
    adel->suivant = debut ;
    adel->contenu = chose ;
    debut = adel ;
}
class liste_points : public liste, public point
{ public :
    liste_points () {}
    void affiche () ;
} ;
void liste_points::affiche ()
{ point * ptr = (point *) premier() ;
    while ( ! fini() ) { ptr->affiche () ; ptr = (point *) prochain() ; }
}

#endif //EXERCICE_2_LISTEPOINT_H
