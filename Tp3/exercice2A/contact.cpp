//
// Created by mohamed el haddadi on 3/12/2022.
//

#include "contact.h"
int contact::compteur=0;
contact::contact(char *n, int a) {
  Message_contact="pa de message ...";
  Nom_contact=n;
  if(a>=18 && a<=60)
      Age_contact=a;
  Num_contact=compteur++;
}
void contact::setAge(int a) {
    if(a>=18 && a<=60)
        Age_contact=a;
    else
        cout<<"Erreur"<<endl;
}
void contact::setMessage(char *m) {
    Message_contact=m;
}
void contact::afficher() {
    cout<<"le nombre de contact est :"<<compteur<<endl;
    cout<<"Num     : "<<Num_contact<<endl;
    cout<<"Nom     : "<<Nom_contact<<endl;
    cout<<"Age     : "<<Age_contact<<endl;
    cout<<"Message : "<<Message_contact<<endl<<endl;
}
contactSal::contactSal(char *a, int r, bool bn) : contact(a,r){

}

void contactSal::setContact() {
    bonContact= true;
}
void contactSal::calculSalaire() {
    if(bonContact== true)
        salaire+=(salaire*10)/100;
}
void contactSal::afficher() {
    contact::afficher();
    cout<<"est un bon contacte oui ou non ?"<<bonContact<<endl;
}
