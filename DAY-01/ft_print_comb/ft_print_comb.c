/*
 * • Écrire une fonction qui affiche, dans l’ordre croissant, toutes les différentes com-
 * binaisons de trois chiffres différents dans l’ordre croissant - oui, la répétition est
 * volontaire.
 * • Cela donne quelque chose comme ça :
 * $>./a.out | cat -e
 * 012, 013, 014, 015, 016, 017, 018, 019, 023, ..., 789$>
 * • 987 n’est pas là car 789 est déjà présent
 * • 999 n’est pas là ca
 */

#include<stdio.h>

void ft_print_comb(void)
{

char i,j,k, virgula =',';

for(i = 0 ; i <8 ; i++){
    
  for(j = i + 1 ; j < 9; j++){

    for(k = j + 1; k < 10; k++){

      putchar(i + '0');
      putchar(j + '0');
      putchar(k + '0');
      putchar(virgula);
      putchar(' ');
      if(i==7 && j== 8 && k== 9){
        char b;
        virgula=b;
        putchar(virgula);
        putchar(b);
      }
    }       
  }

}
}
