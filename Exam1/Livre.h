//
// Created by mohamedElHaddadi on 5/28/2022.
//

#ifndef TPS_LIVRE_H
#define TPS_LIVRE_H
#include <iostream>
#include <vector>
using namespace std;
#include <string>

class Livre {
protected:
   string titre ;
   string auteur;
   int pages ;
   bool bestSaller;
public:
    virtual float calculePrix(){
        float prix=0.3*pages;
        if(bestSaller==true)
            return prix+50;
        return prix;
    }
    Livre(string Titre ,string auteur ,int Pages,bool best):titre(Titre),auteur(auteur),pages(Pages),bestSaller(best){};
    virtual ~Livre(){};
    virtual void afficher(){
        cout<<"Titre          :"<<titre<<endl;
        cout<<"auteur         :"<<auteur<<endl;
        cout<<"Nombre de pages:"<<pages<<endl;
        cout<<"Bestseller     :"<<((bestSaller==0)?"non":"oui")<<endl;
        cout<<"Le prix        :"<<calculePrix()<<endl;
    }

    bool operator==(const Livre & v1)
    {
        if(v1.auteur==auteur)
            return true;
        else
            return false;
    }
};
class Roman:public Livre{
    bool biographie;
public:
    Roman(string Titre ,string auteur ,int Pages,bool best,bool bio): Livre(Titre,auteur,Pages,best),biographie(bio){};
   virtual ~Roman(){};
    virtual void afficher(){
       Livre::afficher();
       if(biographie==true)
           cout<<"Ce roman est une biographie "<<endl;
       else
           cout<<"Ce roman n'est pas une biographie "<<endl;
   }
};
class BeauLivre :public Livre{
public:
    BeauLivre(string Titre ,string auteur ,int Pages,bool best): Livre(Titre,auteur,Pages,best){};
    virtual ~BeauLivre(){};
    virtual float calculePrix(){
        return Livre::calculePrix()+30;
    }
};
class Policier:public Roman
{
public:
    Policier(string Titre ,string auteur ,int Pages,bool best,bool bio): Roman(Titre,auteur,Pages,best,bio){};
    virtual ~Policier(){};
    virtual float calculePrix(){
       float prix =Livre::calculePrix();
       if(prix<=0)
           return 1;
       else
           return prix-10;
    }
};
class Librairie {
    vector<Livre*> livres;
public:
    void ajouterLivre(Livre *l){
        livres.push_back(l);
    }
     void afficher() const {
        for (auto const &t :livres)
        {
            t->afficher();
            cout<<endl;
        }
    }
    void videStock(){
        while (!livres.empty())
        {
            livres.pop_back();
        }
    }
};


#endif //TPS_LIVRE_H
