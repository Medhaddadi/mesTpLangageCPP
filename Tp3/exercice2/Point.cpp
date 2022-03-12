//
// Created by mohamed el haddadi on 3/12/2022.
//

#include "Point.h"
Point::Point(int abs, int ord) {
    x=abs;
    y=ord;
}
void identifie()
{
    cout<<"je suis un point ";
}
void Point::affiche() {
    identifie();
    cout<<" coordonnees :"<<x<<" "<<y<<endl;
}
PointCol::PointCol(int abs, int ord, int color): Point(abs,ord) {
    coul=color;
}