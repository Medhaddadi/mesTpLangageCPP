//
// Created by mohamed el haddadi on 3/12/2022.
//

#ifndef EXERCICE_2_CONTACT_H
#define EXERCICE_2_CONTACT_H
#include <iostream>
using namespace std;

class contact {
    protected :
        int Num_contact ;
        char *Nom_contact ;
        int Age_contact ;
        char *Message_contact ;
    public :
        static int compteur ;
        contact(char *n,int a) ;
        void setAge(int a) ;
        void setMessage(char *m) ;
        virtual void afficher() ;
};
class contactSal:public contact{
    int matricule;
    float  salaire;
    bool bonContact;
public:
    contactSal(char *,int ,bool= false);
    void setContact();
    void calculSalaire();
    void afficher();
};

#endif //EXERCICE_2_CONTACT_H
