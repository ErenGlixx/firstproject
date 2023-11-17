#include <stdio.h>
#include <random>
#include <ctime>
#include <fstream>
#include <iostream> 
using namespace std;
/*

Ecrire des commentairres en paragraphes

*/


// Premier projet generateur de mot de passe

void genemdp(){

    int u, taille, i;
    u = 84;
    i = 0;

    const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()_+";
    char password[] = "       ";
    
    printf("Entrez la taille de votre mdp: ");
    scanf("%d",&taille);

    //Utile pour avoir tout le temps des différente valeurs
    srand(time(NULL));

    while (i < taille)
    {
        int randomIndex = rand() % u;
        password[i]=charset[randomIndex];
        i +=1;
    }
    printf("%s\n", password);


    //Pour intégrer le résultat dans un fichier
    string const fichier("adresse du fichier");
    ofstream monFLux(fichier.c_str());

    monFLux << password << endl;


}

// Premier projet réussi

// Deuxième projet calcul de moyenne

void calculmoyenne(){

    // i en int pour un plus belle affichage
    int i;

    // Le reste en float pour une plus grande approximation de la moyenne
    float res, matieres, moyenne, coeff, tmp, calc_coeff;;
    i = 1;
    calc_coeff = 0;
    res = 0.0;
    tmp = 0;

    printf("Combien de matières avez vous ?\n");

    //%f pour les floats
    scanf("%f", &matieres);
    
    while (i <= matieres)
    {
       printf("Quel est la moyenne de votre matiere numéro %d\n", i);
       scanf("%f",&moyenne);
       printf("Quel est son coefficient ?\n");
       scanf("%f",&coeff);
       tmp = coeff * moyenne;
       res = res + tmp;
       calc_coeff = calc_coeff +coeff;
       i += 1;
    }
   
    res = res/calc_coeff;
    
    printf("Votre moyenne générale est de %f", res);

    //Pour intégrer le résultat dans un fichier
    string const fichier("adresse du fichier");
    ofstream monFLux(fichier.c_str());

    monFLux << "Votre moyenne générale est de " << res << endl;



}



int main(){
    //genemdp();
    //calculmoyenne();
    
}