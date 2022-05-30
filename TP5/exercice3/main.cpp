//
// Created by mohamedElHaddadi on 4/24/2022.
//
#include "Liste.h"
int main()
{
    Liste<int> l;//creation de Liste
    l.afficher();//affichage de liste
   l.push(3);
   l.push(2);
   l.afficher();
   l.pop();
   l.afficher();
    return 0;
}