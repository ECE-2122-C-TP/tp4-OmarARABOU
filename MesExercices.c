#include <stdio.h>
#include "Support.h"
#include "MesExercices.h"

int Exercice1(){
    printf("Veuillez saisir le premier entier.\n>");
    int a = saisirEntier();
    printf("Veuillez saisir le deuxieme entier à comparer.\n>");
    int b = saisirEntier();
    getMax(a,b);
    return 0;
}

int Exercice2(){

    printf("Veuillez saisir un entier.\n>");
    int t = saisirEntier();
    printf("L'entier saisi est %d.\n", t);
    return 0;
}


int Exercice3(){

    printf("Veuillez saisir la longueur du rectangle.\n>");
    int longueur = saisirEntier();
    printf("Veuillez saisir la largeur du rectangle.\n>");
    int largeur = saisirEntier();

    printf("L'aire du rectangle est : %d cm carre \n>",calculAire(longueur,largeur));
    printf("Le perimetre du rectangle est : %d cm \n>",calculPerimetre(longueur,largeur));

    return 0;

}


#define MACRO_10 10

int Exercice4(){
    printf("Veuillez saisir un entier pour savoir si il est multiple de 3.\n>");
    int a = saisirEntier();
    int b = 3;
    int multiple(a,b);

    if (multiple(a,b)==1){
        printf("%d est un multiple de %d\n>", a,b);
    }
    else {
        printf("%d n'est pas un multiple de %d\n>", a,b);
    }
    if (a >= MACRO_10){
        printf("%d est supérieur ou égal à 10\n>", a);
    }
    else {
        printf("%d est strictement inférieur à 10\n>", a);
    }
    return 0;
}

int Exercice5(){
    printf("Veuillez saisir la premiere note.\n>");
    int note1 = saisirEntier();
    printf("Veuillez saisir la deuxieme note.\n>");
    int note2 = saisirEntier();
    printf("Veuillez saisir la troisieme note.\n>");
    int note3 = saisirEntier();
    float moy = moyNotes(note1,note2,note3);
    printf("La moyenne des notes est %f / 20\n", moy);
    return 0;
}


int Exercice7(){
    printf("Veuillez saisir le nombre de classe ouvertes\n>");
    int classeOuvertes = saisirEntier();
    int eleves = 0;
    int totalEleve = 0;
    for (int i = 0;i<classeOuvertes;i++) {
        printf("Combien d'élèves sont dans la classe ouverte numéro %d ?\n>", i + 1);
        scanf("%d", &eleves);
        totalEleve += eleves;
    }
    printf("Il y a %d eleves au total !\n", totalEleve);
    return 0;
}


int Exercice8(){
    printf("Saisissez un nombre entier qui est un multiple de 7 et un multiple de 2\n>");
    int n = saisirEntier();
    while ( !(multiple(n,2) == 1 && multiple(n,7) == 1)) {
        printf("Saisissez un nombre entier qui est un multiple de 7 et un multiple de 2\n>");
        scanf("%d", &n);
    }
    return 0;
}

int Exercice9(){
    printf("Veuillez saisir le nombre de pierres pour construire la pyramide.\n>");
    int pierres = saisirEntier();
    int m=1;
    int r=0;

    while (pierres >= m*m+r){

        if (pierres == m*m+r){
            printf("On peut construire %d étages avec %d pierres\n", m,pierres);
            return 0;
        }
        r+=m*m;
        m+=1;
    }
    printf("On peut construire %d étages avec %d pierres\n", m-1,pierres);
    return 0;

}


int Exercice10() {
    printf("Veuillez saisir un entier positif pour commencer.\n>");
    int entier = saisirEntier();
    int somme = 0;
    int compteur = 0;

    while (entier >= 0) {
        printf("Entrez un entier positif pour continuer\n>");
        scanf("%d", &entier);
        if (entier < 0) {
            printf(" La moyenne des nombres positif est %d\n", somme / compteur);
            return 0;
        }
        compteur += 1;
        somme += entier;
    }
    return 0;
}