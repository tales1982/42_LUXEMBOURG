/*
   --------------------------------- Exercice : 03 -----------------------------
   ft_recursive_power
   Dossier de rendu : ex03/
   Fichiers à rendre : ft_recursive_power.c
   Fonctions Autorisées : Aucune
Remarques : n/a
• Écrire une fonction récursive qui renvoie une puissance d’un nombre.
• Elle doit gérer les mêmes cas que la fonction précédente.
• Elle devra être prototypée de la façon suivante :
int ft_recursive_power(int nb, int power);

*/

#include<stdio.h>
#include<limits.h>

int ft_recursive_power(int nb, int power);

int main(int argc, char *argv[])
{
  int nb, power,res;

  printf("Entrer un nombre et une puissance...: ");
  scanf("%i",&nb);
  setbuf(stdin,NULL);

  printf("Entrer une puissance...: ");
  scanf("%i",&power);
  setbuf(stdin,NULL);

  res = ft_recursive_power(nb,power);
  if(power == 0){
    res = 0;
    printf("Result..: %i\n",res);
  }else{
    if(res > INT_MAX / nb || res < INT_MIN /nb){
      res = 0;
      printf("Overflows\n");
    }else{
  printf("Resultado..: %i\n",res);
  }
}
  return 0;
}

int ft_recursive_power(int nb, int power)
{
  if(power == 0){
    return 1;
  }else{
    return nb * ft_recursive_power(nb, power -1);
  }
}
