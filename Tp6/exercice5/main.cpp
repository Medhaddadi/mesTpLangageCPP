//
// Created by mohamedElHaddadi on 4/25/2022.
//
#include "exeception.h"
int main() {
    int i=p();//On va générer une des trois exceptions possibles
    try{ // Bloc où les exceptions sont prises en charge
        switch (i){ // Selon le type d'exception désirée
            case 0: { Erreur a(0);
                throw (a);
            }
            case 1:{
                int a = 1;
                throw (a); // Exception de type entier
            }
            case 2:{
                int a = 2;
                throw (a); // Exception de type entier
            }
            default: { // Si le nombre n'est pa 0,1 et 2
                Other c; // On crée l'objet c (type d'exception Other)
                throw (c); // et on le lance
            }
        } //Fin switch
    } // Fin du bloc try. Les blocs catch suivent :
    catch (Erreur &tmp){ // Traitement de l'exception Erreur ...
                         // (avec récupération de la cause)
        cerr << "MonException pour :" << tmp.cause << "." << endl;
    }
    catch (int tmp){ // Traitement de l'exception int...
        cerr << "MonException pour :" << tmp << "." << endl;
    }
    catch (...){ // Traitement de toutes les autres exceptions
// On ne peut pas récupérer l'objet ici.
        cerr << "Exception inattendue !" << endl;
    }
    return 0;
}
