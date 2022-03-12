//
// Created by mohamed el haddadi on 3/12/2022.
//

#ifndef EXERCICE_2_POINT_H
#define EXERCICE_2_POINT_H
#include <iostream>
using namespace std;

class Point {
 int x,y;
public:
    Point(int abs,int ord);
    void identifie();
    void affiche();
};
class PointCol:public Point
{
    int coul;
public:
    PointCol(int ,int ,int );
};


#endif //EXERCICE_2_POINT_H
