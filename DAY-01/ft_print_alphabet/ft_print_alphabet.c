/*
 * Écrire une fonction qui affiche l’alphabet en minuscule sur une seule ligne, dans
 * l’ordre croissant, à partir de la lettre ’a’....
 */

#include<stdio.h>

void ft_print_alphabet(void)
{

  int lettre = 'a';

  for (lettre ; lettre < 'z' ; lettre++) {
    putchar(lettre);
  }



}
