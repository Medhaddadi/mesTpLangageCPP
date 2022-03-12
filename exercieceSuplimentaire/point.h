//
// Created by mohamed el haddadi on 3/12/2022.
//

#ifndef EXERCICE_2_POINT_H
#define EXERCICE_2_POINT_H
#include <iostream>
#include <cmath>
using namespace std;
class point {
    float x, y ;
public :
    void initialise (float abs=0.0, float ord=0.0)
    { x = abs ; y = ord ;
    }
    void affiche ()
    { cout << "Point de coordonnées : " << x << " " << y << "\n" ;
    }
    float abs () { return x ; }
    float ord () { return y ; }
};
class pointb:public point
{
public:
    float rho();
};

float pointb::rho() {
    return sqrt(abs()*abs()+ord()*ord());
}

#endif //EXERCICE_2_POINT_H
