/*
------------------------ Exercice : 03 ----------------------

Dossier de rendu : ex03/
Fichiers à rendre : ft_ultimate_div_mod.c
Fonctions Autorisées : Aucune
Remarques : n/a
• Écrire une fonction ft_ultimate_div_mod qui a le prototypage suivant :
void ft_ultimate_div_mod(int *a, int *b);
• Cette fonction divise les int pointés par a et b.
Le résultat de la division est stocké dans l’int pointé par a.
Le résultat du reste de la division est stocké dans l’int pointé par b.
=============================== PT ===================================

Escreva uma função ft_ultimate_div_mod que tenha a seguinte prototipagem:
void ft_ultimate_div_mod(int*a, int*b);
• Esta função divide os inteiros apontados por a e b.
O resultado da divisão é armazenado no int apontado por a.
O resultado do restante da divisão é armazenado no int apontado por b.
*/

#include <stdio.h>

void ft_ultimate_div_mod(int *a,int *b);

int main(int argc, char *argv[])
{
int a = 23, b = 3;
  ft_ultimate_div_mod(&a,&b);

  printf("Divisao = %i \nResto  = %i \n",a, b);
  return 0;
}

void ft_ultimate_div_mod(int *a, int *b)
{
    int temp = *a; // stocke la valeur de a dans une variable temporaire
    *a = temp / *b; // effectue la division et met le résultat dans a
    *b = temp % *b; // calcule le reste de la division et met le résultat dans b
}
