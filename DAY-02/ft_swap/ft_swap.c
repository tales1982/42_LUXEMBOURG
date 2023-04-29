/*
   ---------------- Exercice 06 ------------------
Exercice : 06
Dossier de rendu : ex06/
Fichiers à rendre : ft_swap.c
Fonctions Autorisées : Aucune
Remarques : n/a
• Écrire une fonction qui échange le contenu de deux entiers dont les adresses sont
données en paramètres.
• Elle devra être prototypée de la façon suivante :
void ft_swap(int *a, int *b);
=========================================================================
Escreva uma função que troque o conteúdo de dois inteiros cujos endereços são
dados em parâmetros.
Este exercício pede para você escrever uma função que receba dois ponteiros para 
inteiros como parâmetros e troque os valores que esses ponteiros apontam.
========================== RESPOSTA ============================================
Antes da troca:
x = 10
y = 20
Depois da troca:
x = 20
y = 10

*/

//---------------- Biblioteque -----------------
#include<stdio.h>

//----------- Prototype ----------------
void ft_swap(int *a, int *b);

//-------------- MAIN ----------------
#include <stdio.h>

void ft_swap(int *a, int *b) {
  int v;
  v = *a;
  *a = *b;
  *b = v;

}

int main() {
  int x = 10;
  int y = 20;
  int v;

  printf("Valor antes da alteraçao.\n");
  printf("Valor X = %i\n",x);
  printf("Valor Y = %i\n",y);

  ft_swap(&x,&y);//ATENCAO como declarei ponteiro na funcao tenho que passar endereco da memoria como parametro.

  printf("Valor Depois da alteraçao\n");
  printf("Valor X = %i\n",x);
  printf("Valor Y = %i\n",y);


  return 0;
}

