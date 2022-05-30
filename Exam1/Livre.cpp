//
// Created by mohamedElHaddadi on 5/28/2022.
//

#include "Livre.h"
int main(){
    Livre l1("POO en langage c++","F.Mohamed",822, true);
    Livre l2("Le foo","Gogol",252, false);
    l1.afficher();
    cout<<"Le prix :"<<l1.calculePrix()<<endl;
    l2.afficher();
    cout<<"Le prix :"<<l2.calculePrix()<<endl;
    Policier r1("Le chien des Baskerville","A.C.Doyle",221,false,false);
    r1.afficher();
    cout<<"Le prix :"<<r1.calculePrix()<<endl;
    Policier r2("Le Parrain","A.Cusso",367, true,false);
    r2.afficher();
    cout<<"Le prix :"<<r2.calculePrix()<<endl;
    Roman r3("Le baron perche","Calvino",283,false,false);
    r3.afficher();
    cout<<"Le prix :"<<r3.calculePrix()<<endl;
    Roman r4("Memoires de geronimo","S.M.barrett",173,false, true);
    r4.afficher();
    cout<<"Le prix :"<<r4.calculePrix()<<endl;
    BeauLivre r5("Fleuves d'europe","C.Osbore",150,false);
    r5.afficher();
    cout<<"Le prix :"<<r5.calculePrix()<<endl;
    Librairie L;
    L.ajouterLivre(&r4);
    L.ajouterLivre(&r3);
    L.ajouterLivre(&r2);
    L.ajouterLivre(&r1);
    L.afficher();

    return 0;
}