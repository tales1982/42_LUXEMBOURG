/*
 ----------------------------------------------- Exercice : 04 ---------------------------------------------
ft_fibonacci
Dossier de rendu : ex04/
Fichiers à rendre : ft_fibonacci.c
Fonctions Autorisées : Aucune
Remarques : n/a
• Écrire une fonction ft_fibonacci qui renvoie le n-ième élément de la suite de
Fibonacci, le premier élément étant à l’index 0. Nous considererons que la suite de
Fibonacci commence par 0, 1, 1, 2.
• Elle devra être prototypée de la façon suivante : int ft_fibonacci(int index);
• Evidement, ft_fibonacci devra être recursive.
• Si index est négatif, la fonction renverra -1.
 */

#include<stdio.h>

int ft_fibonacci(int index);

int main(int argc, char *argv[])
{
  int index;
  printf("entrer la valeur de index..:");
  scanf("%i",&index);
  setbuf(stdin,NULL);

  printf("Result..: %i\n",ft_fibonacci(index));
  
  return 0;
}

int ft_fibonacci(int index)
{
  if(index < 0){
    return -1;
  }else if(index == 0){
    return 1;
   }else{
    return ft_fibonacci(index -1) + ft_fibonacci(index -2);
  }
}
