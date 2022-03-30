//
// Created by mohamedElHaddadi on 3/30/2022.
//

#include "listePoint.h"
#include "Point.h"
#include "liste.h"
void listePoint::affichage ()
{ Point * ptr = (Point *) premier() ;
    while ( ! fini() ) { ptr->affiche () ; ptr = (Point *) prochain() ; }
}
listePoint::listePoint() {

}