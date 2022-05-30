//
// Created by mohamedElHaddadi on 4/24/2022.
//
#include "Pilechainnee.h"
#include "PileTableau.h"
int main()
{ PileChainee<int> *pc=new PileChainee<int>;
    pc->push(2);
   PileTableau<int> *p=new PileTableau<int>;
    int y=8;
    int *t=&y;
    p->empiler(t);
 cout<<p;
    return 0;
}