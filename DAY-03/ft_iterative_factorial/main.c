/*
 * 
------------------------ Exercice 00 : ft_iterative_factorial ------------------------------
ft_iterative_factorial
Dossier de rendu : ex00/
Fichiers à rendre : ft_iterative_factorial.c
Fonctions Autorisées : Aucune
Remarques : n/a

• Écrire une fonction itérative qui renvoie un nombre. Ce nombre est le résultat de
l’opération factorielle à partir du nombre passé en paramètre.

• En cas d’erreur, la fonction devra retourner 0.

• Elle devra être prototypée de la façon suivante :
int ft_iterative_factorial(int nb);

• Votre fonction doit donner son résultat en moins de deux secondes.
 */

#include <stdio.h>

int ft_iterative_factorial(int nb);

int main(int argc, char *argv[])
{
  int n;
  ft_iterative_factorial(n);
  return 0;
}

int ft_iterative_factorial(int nb)

{

 int i = 1,copia;

   printf("Entrer une valeur pour calculer la factoriell..: ");
   scanf("%i",&nb);
   setbuf(stdin,NULL);

   copia = nb;

   if(nb < 0){
   return 0;
   }else{
   while(i < copia){
   nb *= i;
   i++;
  }
  printf("%i\n",nb);

  return nb;
  }
}
