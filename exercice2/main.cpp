//
// Created by mohamed el haddadi on 3/4/2022.
//

#include "mesTpLangageCPP/Tp3/exercice1/exercice2.h"
int main()
{
    char *c="mohamed";
    char *r=" el haddadi";
  String mot(c);cout<<mot;
  String m(r);cout<<m;
  String t(m);  cout<<t;
    m=mot;cout<<m;
    bool test=(m==mot);cout<<test<<endl;
    t=mot+m; cout<<t;
     char str[]=" GI1 ";
     mot+=str;cout<<mot;
     char C='H';
    mot+=C;cout<<mot;
//    String e=t+m;cout<<e;
    cout<<mot[5];
    cout<<mot.isEmpty()<<endl;
    cout<<mot.getSize()<<endl;
    return 0;
}