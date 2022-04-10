//
// Created by mohamedElHaddadi on 3/30/2022.
//

#ifndef EXERCICE_2_RECTANGLE_H
#define EXERCICE_2_RECTANGLE_H
using namespace std;

class Rectangle {
private:
    double largeur;
    double hauteur;

public:
    Rectangle();
    Rectangle(double, double);
    double surface() const;
    bool operator < (const Rectangle&) const;
    friend ostream & operator << (ostream &, const Rectangle &);
};
#endif //EXERCICE_2_RECTANGLE_H
