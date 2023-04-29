/*
---------------------------------- Exercice : 09 -------------------------------
ft_sort_integer_table
Dossier de rendu : ex09/
Fichiers à rendre : ft_sort_integer_table.c
Fonctions Autorisées : Aucune
Remarques : n/a
• Écrire une fonction qui trie un tableau d’entiers par ordre croissant.
• Les paramètres sont un pointeur sur entier et le nombre d’entiers dans le tableau.
• La fonction devra être prototypée de la façon suivante :
void ft_sort_integer_table(int *tab, int size);
================================= PT ======================================
• Escreva uma função que classifique uma matriz de inteiros em ordem crescente.
• Os parâmetros são um ponteiro para inteiro e o número de inteiros na matriz.
• O recurso deve ser prototipado da seguinte forma:

void ft_sort_integer_table(int *tab, int size);
*/

#include <stdio.h>
#include <string.h>

/*================ Function Declaration ==================*/
void ft_sort_integer_table(int *tab, int size);

/*====================== MAIN ============================*/

int main(int argc, char *argv[])
{
  int size = 10;
  int num[]={1,4,7,2,5,8,9,6,3,10};
 
  ft_sort_integer_table(num,size);

  return 0;
}

/*================ Function Declaration ==================*/
ft_sort_integer_table(int *tab, int size)
{
int i, j,aux;
  for (i = 0; i < size; i++) {
    for (j = i +1;j  < size; j++) {
      if (tab[i] > tab[j]) {
        aux = tab[i];
        tab[i] = tab[j];
        tab[j] = aux;
      }
    }
  }

  for (i = 0; i < size; i++) {
    printf("%i- ",tab[i]);
  }

}









/*########################outra maneira de fazer################
int main(int argc, char *argv[])
{
  int number[] = {9,2,6,4,1,3,5,7,8};
  int size = sizeof(number) / sizeof(number[0]);//sizeof mede o tamanho do array.

  ft_sort_integer_table(number, size);
  return 0;
}

==================== FUNCTION ========================
void ft_sort_integer_table(int *tab, int size)
{
  // algoritmo de ordenação, por exemplo, o Bubble Sort
  for (int i = 0; i < size - 1; i++) {
    for (int j = 0; j < size - i - 1; j++) {
      if (tab[j] > tab[j+1]) {
        int temp = tab[j];
        tab[j] = tab[j+1];
        tab[j+1] = temp;
      }
    }
  }

  // imprimir os valores ordenados
  for (int i = 0; i < size; i++) {
    printf("%i ", tab[i]);
  }
  printf("\n");
}================ Function Declaration ==================*/
