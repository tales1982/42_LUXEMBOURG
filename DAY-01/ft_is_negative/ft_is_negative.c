/*
 * Écrire une fonction qui affiche ’N’ ou ’P’ suivant le signe de l’entier passé en para-
 * mètre. Si n est négatif alors afficher ’N’. Si n est positif ou nul alors afficher ’P’.
 */

#include<stdio.h>

void ft_is_negative(int n)
{

  char N = 'N', P = 'P';

  if(n == -1) {
  putchar(N);
  }else {
    putchar(P);
  }



}
