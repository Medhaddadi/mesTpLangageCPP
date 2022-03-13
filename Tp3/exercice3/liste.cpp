//
// Created by mohamed el haddadi on 3/13/2022.
//

#include "liste.h"
liste::liste() {
    debut=NULL;
    courant=NULL;
}
liste::~liste() {
    delete debut;
    delete courant;
}

int liste::getSize() {
    int i=0;
    element*tmp=debut;
    while (tmp!=NULL)
    {
        i++;
        tmp=tmp->suivant;
    }
    return i;
}
void liste::ajouter(void *n) {
    element *nvElem=new element;
    nvElem->contenu=n;
    nvElem->suivant=courant;
    courant=nvElem;
}
liste& liste::operator=(liste &l) {
    element *tmp=l.debut;
     debut=courant=l.debut;
    while (tmp!=NULL)
    {
        element *nvElem=new element ;
        nvElem->contenu=l.debut->contenu;
        courant->suivant=nvElem;
        nvElem->suivant=NULL;
        tmp=tmp->suivant;
    }
    return *this;
}
bool liste::empty() {
    if(debut==NULL)
        return true;
    else
        return false;
}
void * liste::premier() {
    return debut;
}
void * liste::prochain() {

}