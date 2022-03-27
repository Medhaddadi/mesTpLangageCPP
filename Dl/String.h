//
// Created by mohamedElHaddadi on 3/26/2022.
//

#ifndef EXERCICE_2_STRING_H
#define EXERCICE_2_STRING_H
#define UNIT unsigned int
using namespace std;
#include <iostream>
class String
{
    char *chaine;
    UNIT taille;
public:
    String();
    String(char*);
    String(const String&);
    ~String();
    String & operator=(const String &);
    bool operator==(const String&);
    String & operator+=(const String &);
    String & operator+=(const char *);
    String & operator+=(const char );
    String &operator+(const String &);
    char & operator[](UNIT);
    UNIT tailleStr(const char *);
    friend ostream& operator<<(ostream &,const String&);
    bool isEmpty();
    void Emty();
    UNIT getSize();
};



#endif //EXERCICE_2_STRING_H
