/*
 *Écrire une fonction qui prend un pointeur sur int en paramètre et donne à l’int la
valeur de 42.
• Elle devra être prototypée de la façon suivante :
void ft_ft(int *nbr)
 * ================================pt===========================================
 * 
Escreva uma função que receba um ponteiro para int como parâmetro e dê ao int o
valor de 42.
• Deve ser prototipado da seguinte forma:
void ft_ft(int *nbr)
 */

#include<stdio.h>

int ft_ft(int *nbr);

int main(int argc, char *argv[])
{
 int num;
    
     ft_ft(num);




  return 0;
}

int ft_ft(int *nbr)
{
int num ;

nbr = &num;
 *nbr = 42;


printf("%i",num);

}

