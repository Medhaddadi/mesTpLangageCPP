//
// Created by mohamed el haddadi on 3/13/2022.
//
#include <iostream>
using namespace std ;
class A
{
    int na ;
public :
    A (int nn=1)
    { na = nn ; cout << "$$construction objet A " << na << "\n" ;
    }
};
class B : public virtual A
{ float xb ;
public :
    B (float xx=0.0)
    { xb = xx ; cout << "$$construction objet B " << xb << "\n" ;
    }
} ;
class C : public virtual A
{ int nc ;
public :
    C (int nn= 2) : A (2*nn+1)
    { nc = nn ;
        cout << "$$construction objet C " << nc << "\n" ;
    }
} ;
class D : public B, public C
{ int nd ;
public :
    D (int n1, int n2, float x) : C (n1), B (x)
    { nd = n2 ;
        cout << "$$construction objet D " << nd << "\n" ;
    }
} ;
int main()
{ D d (10, 20, 5.0) ;
}