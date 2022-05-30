//
// Created by mohamedElHaddadi on 4/24/2022.
//

#ifndef TPS_PILETABLEAU_H
#define TPS_PILETABLEAU_H
#include <iostream>
using namespace std;
template <typename T>
class PileTableau;
template <class T>
 ostream& operator<<(ostream &ostream1const,  PileTableau<T> &) ;

template<class T>
class PileTableau {
    int sp; // l’indice du sommet de pile
    int max; // nombre maximun d’éléments
    T * elements ; // tableau générique d’éléments de type T
    public :
    PileTableau (int =100) ;
    ~ PileTableau() ;
    PileTableau(const PileTableau &) ;
    PileTableau<T> & operator=(const PileTableau<T> &) ;
// méthodes (classiques) génériques de manipulation de la pile
    bool estVide () ;
    void empiler ( const T *x) ;
    void depiler ();
    const T& sommet() ;
    friend ostream& operator<< (ostream &ostream1const,  PileTableau<T> &) ;
    int taille();
};
template <class T>
PileTableau<T>::PileTableau(int n) {
    sp=0;
    max=n;
    elements=new T[max];
}
template<class T>
int PileTableau<T>::taille() {
    return this->sp+1;
}
template<class T>
PileTableau<T>::PileTableau(const PileTableau<T> &tab) {
    this->sp=tab.sp;
    this->max=tab.max;
    for (int i = 0; i < max; ++i) {
        this->elements[i]=tab.elements[i];
    }
}

template<class T>
PileTableau<T> &PileTableau<T>::operator=(const PileTableau<T> &tab) {
    this->sp=tab.sp;
    this->max=tab.max;
    for (int i = 0; i < max; ++i) {
        this->elements[i]=tab.elements[i];
    }
}


template<class T>
bool PileTableau<T>::estVide() {
    return sp==0;
}

template<class T>
void PileTableau<T>::empiler(const T *x) {
    if (this->taille() == max) { cout << "la Pile est plain !!!" << endl; }
    else
    {
        elements[sp]=*x;
        sp++; cout<<"un nouveau element est ajouter avec success !"<<endl;
    }

}

template<class T>
void PileTableau<T>::depiler() {
    if(sp==0)
        cout<<"la Pile est vide !!"<<endl;
    else
    {
        sp--;
        cout<<"un elemet de tableau et suppremer avec succes !!"<<endl;
    }


}

template<class T>
const T &PileTableau<T>::sommet() {
    return elements[0];
}

template<class T>
ostream & operator<<(ostream &ostream1,  PileTableau<T> &tab) {
    ostream1<<"la taille max de la Pile est :"<<tab.max<<endl;
    if(tab.sp==0)
    {
        ostream1<<"la liste est vide !!"<<endl;
    }

    else{
        ostream1<<"les element de PIle tableau :"<<endl;
        for (int i = 0; i < tab.sp; ++i) {
            ostream1<<"       P["<<i<<"] = "<<tab.elements[i]<<endl;
        }
        return ostream1;
    }

}

template<class T>
PileTableau<T>::~PileTableau() {
    delete elements;
}
#endif //TPS_PILETABLEAU_H
