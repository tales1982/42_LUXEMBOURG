/*
 ----------------------------- Exercice : 01 -----------------------------------

Fichiers à rendre : ft_recursive_factorial.c
Fonctions Autorisées : Aucune
Remarques : n/a

• Écrire une fonction récursive qui renvoie la factorielle du nombre passé en para-mètre.
• Elle doit gérer les mêmes cas que la fonction précédente.
• Elle devra être prototypée de la façon suivante :

int ft_recursive_factorial(int nb);
==========================================================================================

• Escreva uma função recursiva que retorne o fatorial do número passado em para-metro.
• Deve atender os mesmos casos da função anterior.

*/

#include<stdio.h>


int ft_recursive_factorial(int nb);

int main(int argc, char *argv[])
{
  int res,num;

  printf("entrez un nombre pour calculer la factorielle..:");
  scanf("%i",&num);
  setbuf(stdin,NULL);
  res = ft_recursive_factorial(num);

  printf("la factorielle de %i est = %i\n",num,res);
  
  return 0;
}

int ft_recursive_factorial(int nb)
{
  int res;
  if(nb == 0)res = 1;else res = nb * ft_recursive_factorial(nb - 1);

  return res;
  
}
