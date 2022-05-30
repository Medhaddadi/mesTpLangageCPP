//
// Created by mohamedElHaddadi on 4/25/2022.
//

#ifndef TPS_EXECEPTION_H
#define TPS_EXECEPTION_H
#include <iostream>
#include<ctime>
using namespace std;
class Erreur {
public:
    int cause;
    Erreur (int c) : cause(c) { }
    Erreur (const Erreur &source) : cause(source.cause) { }
};
class Other {};
int p()
{
    srand((int) time(0));
    return rand()%4;
}
#endif //TPS_EXECEPTION_H
