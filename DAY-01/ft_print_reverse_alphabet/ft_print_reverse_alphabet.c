/*
 * Écrire une fonction qui affiche l’alphabet en minuscule sur une seule ligne, dans
 * l’ordre décroissant, à partir de la lettre ’z’
 */

#include<stdio.h>

void ft_print_reverse_alphabet(void)
{

char lettre = 'z';

for (lettre ; lettre >= 'a';lettre--) {
  putchar(lettre);
}  


}