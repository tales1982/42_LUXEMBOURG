/*
------------------------ Exercice : 07 ---------------------
Dossier de rendu : ex07/
Fichiers à rendre : ft_strrev.c
Fonctions Autorisées : Aucune
Remarques : n/a
• Écrire une fonction qui inverse une chaîne de caractères.
• Elle devra renvoyer str.
• Elle devra être prototypée de la façon suivante :
char *ft_strrev(char *str);
• Exemple :
a => a
ab => ba
abcde => edcba
=======================================================================
 */


//------------------------ BIBLIOTEQUE ------------------------/#include <stdio.h>
#include<string.h>
#include<stdio.h>

//------------------------ FUNTION DECLARATION ---------------
char *ft_strrev(char *str);

//---------------------------- MAIN --------------------------

int main() {
    char str[] = "Bonjour";
    printf("Chaîne originale : %s\n", str);
    char *reversed = ft_strrev(str);//para receber minha funcao *ponteiro tenho que criar um ponteiro
    printf("Chaîne inversée : %s\n", reversed);
    return 0;
}

//----------------------- PROTOTYPE ---------------------------

char *ft_strrev(char* str) {
    int i = 0;//tenho que inicia com 0 Nao esquecer.
    int j = strlen(str) - 1;// sempre diminuir um que é \0 
    char temp;// vai receber a copia
    while (i < j) {
        temp = str[i];//copia receber a string original
        str[i] = str[j];//string origina comeca a receber o ultimo elemento.
        str[j] = temp;
        i++;//tenho que incrementan o i
        j--;// e decrementa o j
    }
    return str;
}

