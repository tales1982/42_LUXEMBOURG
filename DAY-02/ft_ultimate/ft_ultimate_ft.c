/*
 *Écrire une fonction qui prend un pointeur sur pointeur sur pointeur sur pointeur sur
 pointeur sur pointeur sur pointeur sur pointeur sur pointeur sur int en paramètre
 et donne à l’int la valeur de 42.
 • Elle devra être prototypée de la façon suivante :
 void ft_ultimate_ft(int *********nbr);
 ==============================PT==================================
 Escreva uma função que leva um ponteiro para ponteiro para ponteiro para ponteiro para
 ponteiro para ponteiro para ponteiro para ponteiro para ponteiro para int como parâmetro
 e define int como 42..
 */

#include<stdio.h>

void ft_ultimate(int *********nbr);

int main(int argc, char *argv[])
{
int val = 0;
    int *nbr1= &val;
    int **nbr2 = &nbr1;
    int ***nbr3 = &nbr2;
    int ****nbr4 = &nbr3;
    int *****nbr5 = &nbr4;
    int ******nbr6 = &nbr5;
    int *******nbr7 = &nbr6;
    int ********nbr8 = &nbr7;
    int *********nbr9 = &nbr8;
  ft_ultimate(nbr9);
  printf("Valor = %i",val);
  return 0;
}

/*OBS Minha resposta tem que ser somente essa aqui em baixao *********nbr = 42*/
ft_ultimate(int *********nbr)
{
*********nbr = 42;


}
