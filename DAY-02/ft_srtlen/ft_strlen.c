/*
----------------------------- Exercice : 05 ----------------------------
Dossier de rendu : ex05/
Fichiers à rendre : ft_strlen.c
Fonctions Autorisées : Aucune
Remarques : n/a
• Écrire une fonction qui compte le nombre de caractères dans une chaîne de carac-
tères et qui retourne le nombre trouvé.
• Elle devra être prototypée de la façon suivante :
int ft_strlen(char *str); */

#include<stdio.h>
#include<string.h>



int ft_strlen(char *str);

int main(int argc, char *argv[])
{
  char name[] = {"hello wolrd"};
 ft_strlen(name); 
  return 0;
}


int ft_strlen(char *str){

int tam = 0;

  
tam = strlen(str);
printf("%i\n",tam);

return tam;
//quando tenho que retorna um inteiro pq minha fucao esta declarado com int

}
