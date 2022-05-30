//
// Created by mohamedElHaddadi on 4/24/2022.
//

#include "main.h"
#include <string>
#include<iostream>
#include <fstream>
using namespace std;
int main() {
    Dico nbOcc;
    ifstream file("dic.txt");
    if (!file) {
        cout << "failed to open file" << endl;
    } else {
        string s;
        int i;
        while (file >> s) {
            cout << s << endl;
            nbOcc.inserer(s);
        }
        file.close();
    }
    cout << nbOcc.getMap();
    return 0;
}