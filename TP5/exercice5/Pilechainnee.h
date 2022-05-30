//
// Created by mohamedElHaddadi on 4/24/2022.
//

#ifndef TPS_PILECHAINNEE_H
#define TPS_PILECHAINNEE_H
#include <iostream>
using namespace std;
template<class T>
struct Noeud{
    T info;
    Noeud *suivant;
};
template<class T>
class PileChainee{
    Noeud<T> *tete;
public:
    PileChainee(){tete=NULL;};//constructeur
    ~PileChainee(){erasePileChainee();};
    void push(T data);
    bool  empty(){return  tete==0;};
    void  erasePileChainee();
    void pop();
    void afficher();
};
template <class T>
void PileChainee<T>::push(T data) {
    Noeud<T> *newElem=new Noeud<T>;
    newElem->info=data;
    newElem->suivant=tete;
    tete=newElem;
    cout<<"the node is added successfully !!"<<endl;
}

template<class T>
void PileChainee<T>::afficher() {
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
void PileChainee<T>::erasePileChainee() {
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
void PileChainee<T>::pop() {
    Noeud<T> *tmp=tete;
    tete=tete->suivant;
    delete tmp;
    cout<<"the node is deleted successfully !!"<<endl;
}


#endif //TPS_PILECHAINNEE_H
