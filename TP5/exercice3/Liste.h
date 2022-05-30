//
// Created by mohamedElHaddadi on 4/24/2022.
//

#ifndef TPS_LISTE_H
#define TPS_LISTE_H
#include <iostream>

using namespace std;
template<class T>
struct Noeud{
    T info;
    Noeud *suivant;
};
template<class T>
class Liste{
    Noeud<T> *tete;
public:
    Liste(){tete=NULL;};//constructeur
    ~Liste(){eraseListe();};
    void push(T data);
    bool  empty(){return  tete==0;};
    void  eraseListe();
    void pop();
    void afficher();
};
template <class T>
void Liste<T>::push(T data) {
    Noeud<T> *newElem=new Noeud<T>;
    newElem->info=data;
    newElem->suivant=NULL;
 if(empty()==1)
 {
     tete=newElem;
 }
 else{
     Noeud<T> *noeud=tete;
     while (noeud->suivant!=NULL)
     {
         noeud=noeud->suivant;
     }
     noeud->suivant=newElem;
 }
 cout<<"the node is added successfully !!"<<endl;
}

template<class T>
void Liste<T>::afficher() {
    cout<<"la liate contient :"<<endl;
    Noeud<T> *tmp=tete;
    while (tmp)
    {
        cout<<tmp->info<<" -> ";
        tmp=tmp->suivant;
    }
    if(tmp==NULL)
        cout<<"NULL"<<endl;
}

template<class T>
void Liste<T>::eraseListe() {
    Noeud<T> *tmp ;
    while (tete)
    {
        tmp=tete;
        tete=tete->suivant;
        delete tmp;
    }
    cout<<"The List is deleted successfully !! "<<endl;
}

template<class T>
void Liste<T>::pop() {
    Noeud<T> *tmp=tete;
    while (tmp->suivant->suivant)
    {
        tmp=tmp->suivant;
    }
    Noeud<T> *t=tmp->suivant;
    tmp->suivant=NULL;
    delete t;
    cout<<"the node is deleted successfully !!"<<endl;
}
#endif //TPS_LISTE_H
