/*
   -------------------------------- Exercice 08 : ft_atoi ----------------------------
   Dossier de rendu : ex08/
   Fichiers à rendre : ft_atoi.c
   Fonctions Autorisées : Aucune
Remarques : n/a
• Reproduire à l’identique le fonctionnement de la fonction atoi (man atoi).
• Elle devra être prototypée de la façon suivante :
int ft_atoi(char *str);
*/

#include <stdio.h>
#include <stdlib.h>

int ft_atoi(char *str);

int main(int argc, char *argv[])
{
  char texto[]="42";
  ft_atoi(texto);
  return 0;
}

int ft_atoi(char *str)
{


  int res = atoi(str);  

  printf("%i\n",res);
}
