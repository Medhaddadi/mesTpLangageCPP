//
// Created by mohamed el haddadi on 3/12/2022.
//

#include "Point.h"

Point::Point(int abs, int ord) {
    x=abs;
    y=ord;
}
void Point::identifie()
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
void PointCol::identifie() {
    cout<<"je suis un point de color :"<<coul<<endl;
}
float PointCol::rho() {
    return sqrt(getabs()*getabs()+getord()*getord());
}
int Point::getabs() {
    return x;
}
int Point::getord() {
    return y;
}