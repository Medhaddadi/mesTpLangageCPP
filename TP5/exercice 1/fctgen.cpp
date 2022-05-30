//
// Created by mohamedElHaddadi on 4/22/2022.
//
//
// Created by mohamedElHaddadi on 3/30/2022.
//

#include <iostream>
#include "rectangle.h"
using namespace std;

int main() {
/*   // une instentiation des entiers
    cout << minimum<int>(34, 4)<<endl;
    //une instentiation des reel
    cout << minimum<double>(34.2, 4.4)<<endl;
    // une instance de chaine
    cout << minimum<string>("mohamed", "el haddadi")<<endl;
    // affichage d'un entier et un reel
    cout << minimum(34, 4.2)<<endl;
    cout << minimum<double>(10.5, 4)<<endl;
    cout << minimum<int>(10.5, 4)<<endl;*/
  rectangle<double> r1(5, 4.1) ,r2 (8.1, 3.4);
    cout<< r1.surface()<< endl;
    cout<< r2.surface()<< endl;
    rectangle<double> r3=minimum(r1,r2);
    cout<<r3;
    cout<<(r1<r2);
    return 0;
}