//
// Created by mohamed el haddadi on 3/12/2022.
//

#ifndef EXERCICE_2_POINT_H
#define EXERCICE_2_POINT_H
#include <iostream>
using namespace std;
#include <cmath>
class Point {
protected:
    int x,y;
public:
    int getabs();
    int getord();
    Point(int abs,int ord);
    virtual void identifie();
    void affiche();
};
class PointCol:public Point
{
    int coul;
public:
    PointCol(int ,int ,int );
    void identifie();
    float rho();
};


#endif //EXERCICE_2_POINT_H
