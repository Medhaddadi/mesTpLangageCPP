//
// Created by mohamed el haddadi on 3/4/2022.
//

#include "exercice2.h"
#include <istream>
String::String() {
    taille=0;
    chaine=new char ;
}
UNIT String::tailleStr(const char *str) {
    UNIT  i=0;
    while (str[i]!='\0')
    {
        i++;
    }
    return i;
}
String::String(char *mot) {
    UNIT t= tailleStr(mot);
    chaine=new char[t];
    taille=t;
    for (int i = 0; i <t ; ++i) {
        chaine[i]=mot[i];
    }
}
String::String(const String &string1) {
    taille=string1.taille;
    chaine=new char [taille];
    for (int i = 0; i < taille; ++i) {
        chaine[i]=string1.chaine[i];
    }
}
String& String::operator=(const String &string1) {
    taille=string1.taille;
    chaine=new char [taille];
    for (int i = 0; i < taille; ++i) {
        chaine[i]=string1.chaine[i];
    }
    return *this;
}
bool String::operator==(const String &string1) {
    int i=0;
    while ( i<taille )
    {
        if(string1.chaine[i]!=chaine[i])
            return false;
        i++;
    }
    return true;
}
/*int  String::isIn(String &ch){
    int comp=0;
    for (int i = 0; i < taille ; ++i) {
      if(chaine[i]==ch.chaine[i])
      {

      }
    }
}*/
String String::operator-(const String &ch) {
    int i=0;
    while (i<taille)
    {

        for (int j = i; j < ch.taille+i; ++j) {

        }
        i=i+1;
    }
}
String &String::operator+=(const String &string1) {
    for (UNIT  i = 0; i <string1.taille ; ++i) {
      chaine[taille++]=string1.chaine[i];
    }
    return *this;
}
 ostream& operator<<(ostream &os,const String &mot )
{
    for (int i = 0; i < mot.taille; ++i) {
        os<<mot.chaine[i];
    }
    os<<endl;
    return os;
}
String & String::operator+=(const char *str)
{
    UNIT t= tailleStr(str);
    for (UNIT  i = 0; i <t ; ++i) {
        chaine[taille++]=str[i];
    }
    return *this;
}
String & String::operator+=(const char c ){
    chaine[taille++]=c;
}
String  String::operator+(const String &string1) {
    String string2;
    for (UNIT i = 0; i < taille; ++i) {
        string2.chaine[i]=chaine[i];
    }
    for (UNIT  i = 0; i <string1.taille ; ++i) {
        string2.chaine[taille+i]=string1.chaine[i];
        cout<<string2.chaine[i];
    }
    string2.taille=string1.taille+taille;
    return string2;
}
char & String::operator[](unsigned int n) {
    return chaine[n];
}
bool String::isEmpty() {
    if(chaine[0]=='\0')
        return true;
    else
        return false;
}
void String::Emty() {
    delete chaine;
}
UNIT String::getSize() {
    return taille;
}
String::~String() {
    delete chaine;
}