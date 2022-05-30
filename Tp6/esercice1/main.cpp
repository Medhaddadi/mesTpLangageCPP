//
// Created by mohamedElHaddadi on 4/24/2022.
//

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
int main()
{
    list < int > l;//list initializer par null
    l. push_front (4);//ajouter au debut
    l. push_front (9);
    l. push_back (0);//ajouter a la fin
    list < int >:: iterator it = l. begin ();//definir pointeur it sur debut de list
    l. insert (++it , -1);
    cout<<"apres insertion de [-1] dans pos :1"<<endl;print (l);
    l. pop_back ();
    cout<<"apres la suppression de dernier element ."<<endl;print (l);
    l. erase (l. begin (), it );
    cout<<"apres la suppression de 0 a 2 ."<<endl;print (l);
    l. insert (l.end () , -2);
    cout<<"apres insertion de '-2' a la fin de list."<<endl;print (l);
    print (l);
    return 0;
}