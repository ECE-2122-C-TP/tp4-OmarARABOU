#include <stdio.h>
#include "Support.h"


int getMax(int a,int b){
/* Fonction retournant le plus grand des deux entiers
 * Paramètres :
 * - IN : a et b les deux entiers à comparer
 * - OUT : le plus grand des deux entiers
 */
    (a >= b)
        ? printf("%d est superieur à %d\n", a, b)
        : printf("%d est inferieur à %d\n", a, b);
    return 0;
}

int saisirEntier(){
    /* Fonction permettant de retourner un entier saisie à la fonction appelante
    * Paramètres :
    * - IN : vide
    * - OUT : Entier saisie au clavier
    */
    int i;
    scanf("%d", &i);
    return i;
}

int calculAire(int longueur, int largeur){
    /* Fonction permettant de calculer l'aire d'un rectangle et de l'afficher sur la console
    * Paramètres :
    * - IN : un entier longueur et un entier largeur representant la longueur et la largeur du rectangle.
    * - OUT : L'aire du rectangle.
    */
    return longueur*largeur;
}

int calculPerimetre(int longueur, int largeur) {
    /* Fonction permettant de calculer le perimetre d'un rectangle et de l'afficher sur la console
    * Paramètres :
    * - IN : un entier longueur et un entier largeur representant la longueur et la largeur du rectangle.
    * - OUT : Le perimetre du rectangle.
    */
    return ((longueur + largeur) * 2);
}

int multiple(int a,int b) {
    /* Fonction permettant de verifier si a est multiple de b
    * Paramètres :
    * - IN : deux entier a et b
    * - OUT : 1 si a est multiple de b , 0 si a n'est pas multiple de b
    */
    if (a % b == 0) {
        return 1;
    } else {
        return 0;
    }
}


float moyNotes(int note1, int note2, int note3) {
    /* Fonction permettant de calculer la moyenne de 3 notes entre 0 et 20
    * Paramètres :
    * - IN : note1 note2 et note3 3 entiers
    * - OUT : La moyenne des 3 notes si les paramètres sont entre 0 et 20 sinon -1.
    */

    if (note1 > 20 || note1 < 0 || note2 > 20 || note2 < 0 || note3 > 20 || note3 < 0) {
        return -1.0;
    } else {
        float sommeNotes = (float)note1 + (float)note2 + (float)note3;
        float moy;
        moy = sommeNotes/3.0;
        return moy;
    }
}


