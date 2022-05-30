//
// Created by mohamedElHaddadi on 4/24/2022.
//
#include <iostream>
#include <vector>
using namespace std;
template <class T>
void print(vector<T> t)
{
    cout<<"le vector est de taille :"<<t.size()<<endl;
    for(T elem:t)
    {
        cout<<elem<<" ";
    }
    cout<<endl;
}

template<typename T>
void affichageIndice(vector<T> VS){
    for (int i = 0; i < VS.size(); ++i) {
        cout<<VS[i]<<" ";
    }
    cout<<endl;
}
template<typename T>
void affichageIterateur(vector<T> VS){
    vector<string>::iterator it;
    it=VS.begin();
    while(it < VS.end()){
        cout<< *it << " ";
        it=next(it);
    }
    cout<<endl;
}
int main()
{
    //Déclarez un vecteur de nom mon_vecteur stockant des std::string.
    vector<string> VS;
    //Ajoutez 5 std::string dans le vecteur qui vaudront respectivement
    // "bonjour", "comment", "allez", "vous", "?". (méthode push-back())
    VS.push_back("bonjour");
    VS.push_back("comment");
    VS.push_back("allez");
    VS.push_back("-vous");
    VS.push_back("?");
    print(VS);
    //Affichez la taille de votre vecteur.
    cout<<"la taille de vecteur est :"<<VS.size()<<endl<<endl;
    //Affichez sa capacité (capacity). Quel est la différence avec sa taille ?
    cout<<"la la capacity de vecteur de vecteur est :"<<VS.capacity()<<endl<<endl;
    //Affichez max_size, à quoi cela correspond ?
    cout<<"la taille maximal de vecteur de vecteur est :"<<VS.max_size()<<endl<<endl;

   // Afficher le contenu du vecteur.
                           //- Une première fois en utilisant la notation indexée de tableau en accédant à la valeur avec une
                           // syntaxe du type : mon_vecteur[k].
    affichageIndice(VS);
    //- Une seconde fois en utilisant les itérateurs sur votre vecteur ?
    affichageIterateur(VS);
    //Réaliser un échange entre le contenu de la case d'indice 1 et le contenu de la case d'indice 3 de votre
    //vecteur (vérifiez votre résultat en affichant le vecteur). Notez l'existence de std::swap
    std::iter_swap(VS.begin()+1,VS.begin()+3);
    cout<<endl<<"affichage apres swaping "<<endl;
    affichageIndice(VS);
    //8)  dans votre vecteur. Vérifiez votre résultat (on
    //pourra réaliser cette opération de manière standard).
    cout<<"Insérez la valeur \"a tous\" après le premier élément"<<endl<<endl;
    VS.insert(VS.begin()+1,"a tous");
    affichageIndice(VS);
    //9) . Vérifiez votre résultat
    cout<<"Changez le point d'interrogation par \"???\""<<endl;
    VS[VS.size()-1]="???";
    affichageIndice(VS);

    return 0;
}