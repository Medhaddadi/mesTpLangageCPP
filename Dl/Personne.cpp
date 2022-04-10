//
// Created by mohamedElHaddadi on 3/26/2022.
//

#include "Personne.h"


Personne::Personne() {
    age=0;
    nom=" ";
    prenom=" r";
}
Personne::Personne(String Nom, String Prenom, UIN n) {
        nom=Nom;
        prenom=Prenom;
        age=n;
}
Personne::~Personne() {
}
void Personne::affichage() {
    cout<<"le nom    :"<<nom<<endl;
    cout<<"le prenom :"<<prenom<<endl;
    cout<<"l'age     :"<<age<<endl;
}
void Personne::setAge(UIN Age) {
    age=Age;
}
void Personne::setNom(String Nom)
{
   nom=Nom;
}
void Personne::setPrenom(String Prenom)
{
    prenom=Prenom;
}
Personne & Personne::operator=(const Personne & p1)
{
   nom=p1.nom;
   prenom=p1.prenom;
   age=p1.age;
    return *this;
}
Etudiant::Etudiant() {
    matiere=NULL;
}
Etudiant::Etudiant(String Nom, String Prenom, UIN n) :Personne(Nom,Prenom,n){
    matiere=NULL;

}

void Etudiant::ajouterMat(String NomMAt,float notMat) {
    listeEt *newListe=new listeEt;
    newListe->matiere=NomMAt;
    newListe->note=notMat;
    newListe->next=NULL;
    listeEt *tmp=matiere;
    if (matiere==NULL)
        matiere=newListe;
    else
    {
        while (tmp->next!=NULL)
        {
            tmp=tmp->next;
        }
        tmp->next=newListe;
        matiere->taille++;
    }

}

float Etudiant::moyen() {
    listeEt *tmp=matiere;
    float somme=0;
    int i=0;
    while (tmp!=NULL)
    {
        somme+=tmp->note;
        i++;
        tmp=tmp->next;
    }
    return somme/(float )i;
}

void Etudiant::affichage() {
    Personne::affichage();
    listeEt *tmp=matiere;
    cout<<"Matiere   | notes "<<endl;
    if(tmp==NULL)
        cout<<"pas de matiere"<<endl;
    while (tmp!=NULL)
    {
        cout<<tmp->matiere<<"| "<<tmp->note<<endl;
        tmp=tmp->next;
    }
    cout<<"sa moyenne :"<< this->moyen()<<endl<<endl;
}
Etudiant::~Etudiant() {
    listeEt *tmp=matiere;
    listeEt *t;
    while (tmp)
    {
        t=tmp->next;
        delete tmp;
        tmp=t;
    }
}
Enseignant::Enseignant() {
    matiereP=NULL;
}
Enseignant::~Enseignant() {
    listeEn *tmp=matiereP;
    listeEn *t;
    while (tmp)
    {
        t=tmp->next;
        delete tmp;
        tmp=t;
    }
}
Enseignant::Enseignant(String Nom, String Prenom, UIN n) :Personne(Nom,Prenom,n) {
    matiereP=NULL;
}

void Enseignant::ajouterMatP(String NomMAt,int nbh) {
        listeEn *newListe=new listeEn;
        newListe->matiere=NomMAt;
        newListe->nbMatiere=nbh;
        newListe->next=matiereP;
        matiereP=newListe;
        matiereP->taille++;
    }

void Enseignant::affichage() {
    Personne::affichage();
    listeEn *tmp=matiereP;
    cout<<"Matiere   | nbHeure "<<endl;
    if(matiereP==NULL)
        cout<<"pas de matiere"<<endl;
    while (tmp!=NULL)
    {
        cout<<tmp->matiere<<"| "<<tmp->nbMatiere<<endl;
        tmp=tmp->next;
    }
    cout<<"total d'heure :"<<this->TotalHeure()<<endl<<endl;
}

int Enseignant::TotalHeure() {
    listeEn *tmp=matiereP;
    int somme=0;
    while (tmp!=NULL)
    {
        somme+=tmp->nbMatiere;
        tmp=tmp->next;
    }
    return somme;
}