//
// Created by mohamedElHaddadi on 4/4/2022.
//

#ifndef EXERCICE_2_FORME_H
#define EXERCICE_2_FORME_H


class Forme {
public:
    void description();

};
class Cercle: public Forme{
public:
    void description();
};
void affichageDesc(Forme &f);
#endif //EXERCICE_2_FORME_H
