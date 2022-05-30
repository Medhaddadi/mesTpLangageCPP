//
// Created by mohamedElHaddadi on 4/23/2022.
//

#ifndef TPS_RECTANGLE_H
#define TPS_RECTANGLE_H

#include <iostream>
using namespace std;

template<class T> class rectangle;
template <class T>
 ostream & operator<<(ostream & os,  rectangle<T> & rest) ;
//Dans le fichier « rectangle.hpp », déclarez la classe Rectangle avec deux variables
//        membres privées largeur et longueur de type double
template<class T> class rectangle{
    T largeur;
    T longueur;
public:
    //Ajoutez un constructeur pour initialiser ces deux variables membres
    rectangle( T larg=0,T LONG=0):largeur(larg),longueur(LONG){};
    //Ajoutez la méthode surface qui renvoie la surface du Rectangle courant.
    T surface() ;
    // surcharge de l'operator pou l'affichage
    friend ostream & operator<< <T>(ostream & os,  rectangle<T> & rest)  ;
    rectangle & operator=(const rectangle &r){
        longueur=r.longueur;
        largeur=r.largeur;
        return *this;
    };
    bool operator < (  rectangle &c)  ;

};

template<class T>
bool rectangle<T>::operator < (  rectangle<T> &c) {
    return this->surface() < c.surface();
}
template<class T>
T rectangle<T>::surface() {
    return largeur*longueur;
}
template<class T>
ostream & operator << (ostream & os,  rectangle<T> & rec){
    os << "Largeur: " << rec.largeur << endl;
    os << "Hauteur: " << rec.longueur << endl;
    os << "Surface: " << rec.surface() << endl;
    return os;
}
template<class T>
T minimum(T x, T y) {
    return x< y() ? x : y;
}
template<class T>
rectangle<T> minimum(rectangle<T> x, rectangle<T> y) {
    return x.surface() < y.surface() ? x : y;
}

#endif //TPS_RECTANGLE_H
