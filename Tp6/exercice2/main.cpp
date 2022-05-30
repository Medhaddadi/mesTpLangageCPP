//
// Created by mohamedElHaddadi on 4/24/2022.
//
#include "list.h"

int main()
{
    /*list<int> l;
    for (int i = 7; i >0 ; --i) {
        l.push_back(i);
    }
    print(l);
     l.sort();
    print(l);*/
    cout<<"la creation des instance de type entier :"<<endl;
    Entier n(4);
    Entier n1(2);
    Entier n2(4);
    Entier n3(5);
    Entier n4(7);
    cout<<"test de affichage de Endtier "<<endl;
    cout<<n<<endl;
    n=n3;
    cout<<n<<endl;
    int i=(n==n3);
    cout<<(i>0?"true":"false")<<endl;
    i=(n<n3);cout<<(i>0?"true":"false")<<endl;
    cout<<"ajouter ou debut de la liste :"<<endl<<endl;
    list<Entier> T;
    T.push_front(n);
    T.push_front(n1);
    T.push_front(n2);
    T.push_front(n3);
    T.push_front(n4);
    print(T);

    cout<<"suppression de dernier element :"<<endl;
    T.pop_back();
    print(T);
    cout<<"detriere tout la liste :"<<endl<<endl;
    T.clear();
    print(T);
    return 0;
}
