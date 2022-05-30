//
// Created by mohamedElHaddadi on 4/24/2022.
//

#ifndef TPS_MAIN_H
#define TPS_MAIN_H
#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

class Dico {
    map<string,int> p;
public:
    map<string,int> getMap() const{return p;}
    void inserer(string sd)
    {
        //si l'element sd exist dans p(map) on va l'ajouter
        if (p.count(sd)>0) {
            (p[sd])++;
            cout << "Key found "<<(p[sd])<<endl;
        } else {//sinon onva le creer
            cout << "Key not found"<<endl;
            p[sd]=1;
        }
       cout<<"new element inserted successfully!!!"<<endl;
    }
    friend ostream & operator<<(ostream & os ,const Dico& d1);
};
ostream &operator<<(ostream &os, map<string,int> const &d1) {
    for (auto it = d1.cbegin(); it != d1.cend(); ++it) {
        os << "{" << (*it).first << ": " << (*it).second << "}\n";
    }
    return os;
}




#endif //TPS_MAIN_H
