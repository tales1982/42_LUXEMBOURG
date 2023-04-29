/*
-----------------------  Exercice : 04 ----------------------------
Dossier de rendu : ex04/
Fichiers à rendre : ft_putstr.c
Fonctions Autorisées : ft_putchar
Remarques : n/a

• Écrire une fonction qui affiche un à un les caractères d’une chaîne à l’écran.
• L’adresse du premier caractère de la chaîne est contenue dans le pointeur passé en
paramètre à la fonction.
• Elle devra être prototypée de la façon suivante :
void ft_putstr(char *str);
*/
/*----------------- Bibliotec --------------*/

#include<stdio.h>
#include<string.h>

/*----------  Function declaration ----------*/

void ft_putstr(char *str);

/*------------------ MAIN -----------------*/
int main(int argc, char *argv[])
{
  char nome[]={"TALES"};
  
  ft_putstr(nome);

  return 0;
}

/*------------ Fuction Prototype -----------*/

void ft_putstr(char *str)
{
/*int i;

while(str[i] != '\0'){
  putchar(str[i]);
  putchar('\n');
  i++;
  */

  while(*str != '\0'){
    putchar(*str);
    putchar('\n');
    str++;
  }
}

