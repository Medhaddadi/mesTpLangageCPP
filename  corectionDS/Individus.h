//
// Created by mohamedElHaddadi on 5/30/2022.
//

#ifndef TPS_INDIVIDUS_H
#define TPS_INDIVIDUS_H
#include <string>
#include <iostream>

using namespace std;
class Personne{
protected:
    string nom;
    string prenom;
    bool attestation;
public:
    Personne(){
        nom="";
        prenom="";
        attestation= false;
    }
    Personne(string Nom ,string Prenom){
        nom=Nom;
        prenom=Prenom;
        attestation= false;
    }
    void setAttestationToTrue(){
        attestation= true;
    }
    string getNom(){
        return nom;
    }
    string getPrenom(){return prenom;}
    bool getAttestation(){return attestation;}
    ~Personne(){}
    virtual void afficher(){
        cout<<"========== Personne ============"<<endl;
        cout<<" Nom         :"<<nom<<endl;
        cout<<" Prenom      :"<<prenom<<endl;
        cout<<" Attestation :"<<attestation<<endl;
    }
};
class Policier:public Personne{
public:
    Policier():Personne(){attestation= true;};
    Policier(string Nom,string Prenom):Personne(Nom,Prenom){attestation=true;}
    string controler( Personne& P){
        return P.getPrenom()+" "+P.getNom()+" "+(P.getAttestation()?" a une attestation " : " n'a pas une attestation ");
    };

};
class File {
    Personne *gens ;
    const static int lmax;
    int ideb;
    int ifin;
    int lgmax;
public:
    File(){
        ifin=ideb=lgmax=0;
        gens=new Personne[lmax];
    }
    ~File(){
        delete [] gens;
    }
    Personne& operator[](int i) {
        if (i >= 0 && i <= lgmax)
        { Personne P(gens[i+1].getNom(),gens[i+1].getPrenom() );
            return P;
        } else cout<<"the index is out ranges "<<endl;
    }
    void operator--(){
        cout<<gens[ideb].getPrenom()<<" "<<gens[ideb].getNom()<<" il a sortie de la ligne "<<endl;
        ideb++;lgmax--;
    }
    void operator+( Personne &p){
        if(lgmax<=lmax){
            gens[ifin]=p;
            ifin++;
            cout<<p.getPrenom()<<" "<<p.getNom()<<" "<<" a ajouter au ligne avec succes "<<endl;
        }else cout<<"faild d'ajouter "<<p.getPrenom()<<" "<<p.getNom()<<endl;
    }
    void afficher(){
        cout<<"la file contient "<<endl;
        for (int i = ideb; i <ifin ; ++i) {
             gens[i].afficher();
        }
    }
};
const int File::lmax=10;
class Epicerie:public virtual File{
    int stockPaquetPates;
public:
    Epicerie():File(){stockPaquetPates=100;}
    void operator--(){
        stockPaquetPates--;
    }
};
class Pharmacie:public virtual File{
    int stockGelHydroAlco;
public:
    Pharmacie():File(){stockGelHydroAlco=1;}
    void operator--(){
        stockGelHydroAlco--;
    }
    void stockAffiche(){

    }
};
class SuperMarcher: public  Pharmacie, public  Epicerie{
public:
    SuperMarcher():Pharmacie(),Epicerie(){};
};
#endif //TPS_INDIVIDUS_H
