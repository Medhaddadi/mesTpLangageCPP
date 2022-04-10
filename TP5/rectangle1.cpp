//
// Created by mohamedElHaddadi on 3/30/2022.
//

#include "rectangle1.h"
Rectangle::Rectangle() {
    this->hauteur = 0;
    this->largeur = 0;
}
Rectangle::Rectangle(double l, double h) {
    this->hauteur = h;
    this->largeur = l;
}
double Rectangle::surface() const {
    return this->largeur * this->hauteur;
}
bool Rectangle::operator < (const Rectangle& r) const {
    return this->surface() < r.surface();
}

ostream & operator << (ostream & os, const Rectangle & rec) {
    os << "Largeur: " << rec.largeur << endl;
    os << "Hauteur: " << rec.hauteur << endl;
    os << "Surface: " << rec.surface() << endl;
    return os;
}
