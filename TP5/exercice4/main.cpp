//
// Created by mohamedElHaddadi on 4/24/2022.
//
#include "rectangle.h"
#include "PileTableau.h"
#include <string>
int main(){
    PileTableau<double> tabDouble(5);
    PileTableau<string>  tabString(5);
    PileTableau<rectangle<int>> tabRectangle(5);
    for (int i = 0; i < 4; ++i) {
        tabDouble.empiler(i+1);
    }
    cout<<tabDouble;
    tabDouble.depiler();
    cout<<"le sommet est :"<<tabDouble.sommet()<<endl;
    cout<<tabDouble;
    cout<<tabString;
    tabString.empiler("mohamed");
    tabString.empiler("el hadaddi");
    tabString.empiler("age");
    cout<<tabString;
    tabString.depiler();
    cout<<tabString;
  rectangle<int> r1(2,3);
    rectangle<int> r2(4,5);
  tabRectangle.empiler(r1);
    tabRectangle.empiler(r2);
    cout<<tabRectangle;
    return 0;
}