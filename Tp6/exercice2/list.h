//
// Created by mohamedElHaddadi on 4/24/2022.
//

#ifndef TPS_LIST_H
#define TPS_LIST_H
#include <iostream>
#include <list>
using namespace std;
template<class T>
void print(list<T> l){
    cout<<"la taille de la liste est :"<<l.size()<<endl;
    for (T elem: l) {//for each elem in the list l
        cout<<elem<<" ->";
    }
    cout<<"Null"<<endl;
}
class Entier{
    int val;
public:
    Entier(int valeur=0):val(valeur){};
    Entier (const Entier& a){ val=a.val;}
    int getVal()const{return val ;}
    friend ostream& operator<<(ostream&os, const Entier&a);
    friend bool operator==(const Entier &a, const Entier &b);
    friend bool operator<(const Entier &a, const Entier&b);
} ;
ostream& operator<<(ostream&os, const Entier&a){
    os<<a.val;
    return os;
}
bool operator==(const Entier &a, const Entier &b){
    if(a.val==b.val)
        return true;
    else
        return false;
}
bool operator<(const Entier &a, const Entier&b){
    if (a.val<b.val)
        return true;
    else
        return false;
}
#endif //TPS_LIST_H
