//
// Created by mohamed el haddadi on 3/13/2022.
//

#include "liste.h"
#include "Point.h"
liste::liste() {
    debut=NULL;
    courant=NULL;
}
liste::~liste() {
    element *suiv;
    courant=debut;
    while (courant!=NULL)
    {
        suiv=courant;
        courant=courant->suivant;
        delete suiv;
    }

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
    nvElem->suivant=debut;
    nvElem->contenu=n;
    debut=nvElem;
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
    return this->debut->contenu;
   /* courant=debut;
    if(courant!=NULL)
       return (courant->contenu);
    else
        return NULL;*/
}
void * liste::prochain() {
  if(courant!=NULL)
  {
      courant=courant->suivant;
      return courant->contenu;
  }
  return NULL;
}
int  liste::fini() {
    if (courant==NULL)
        return 1;
    else
        return 0;
}


