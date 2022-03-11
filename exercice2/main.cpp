//
// Created by mohamed el haddadi on 3/4/2022.
//

#include "mesTpLangageCPP/exercice2.h"
int main()
{
  String mot("mohamed");cout<<mot;
  String m(" el haddadi");cout<<m;
  String t(m);  cout<<t;
    m=mot;cout<<m;
    bool test=(m==mot);cout<<test<<endl;
    mot+=m; cout<<mot;
     char str[]=" GI1 ";
     mot+=str;cout<<mot;
     char c='H';
    mot+=c;cout<<mot;
//    String e=t+m;cout<<e;
    cout<<mot[5];
    cout<<mot.isEmpty()<<endl;
    cout<<mot.getSize()<<endl;
    return 0;
}