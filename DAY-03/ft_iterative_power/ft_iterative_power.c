/*
   --------------------------- ft_iterative_power ----------------------------------
   Dossier de rendu : ex02/
   Fichiers à rendre : ft_iterative_power.c
   Fonctions Autorisées : Aucune
Remarques : n/a

• Écrire une fonction itérative qui renvoie une puissance d’un nombre. Une puissance
< 0 renverra 0. Les overflows ne devront pas être gerés.
• Elle devra être prototypée de la façon suivante :
int ft_iterative_power(int nb, int power);
• Votre fonction doit donner son résultat en moins de deux secondes.
=============================== PT ====================================
Escreva uma função iterativa que retorne uma potência de um número. um poder
< 0 retornará 0. Estouros não devem ser tratados.
*/
//funcao interativa deve usar for ou while.

#include<stdio.h>
#include<limits.h>

//#include<math.h>

int ft_iterative_power(int nb, int power);

int main(int argc, char *argv[])
{

  int nb,power,res;
  printf("Digite um numero..: ");
  scanf("%i",&nb);
  setbuf(stdin,NULL);

  printf("Digite a potencia..: ");
  scanf("%i",&power);
  setbuf(stdin,NULL);

  res = ft_iterative_power(nb,power);

  printf("RESULTADO %i\n",res);

    if(res > INT_MAX || res < 0){
      printf("Overflows\n");
    }else{
      printf("Resultado %i\n",res);

    }
  return 0;
}

int ft_iterative_power(int nb, int power)
{
  int i ,copia = 1;

  if(power <= 0){
    copia = 0;
  }

   for (i = 0; i < power; ++i) {
  //verifica se o resultado nao utrapase o int permitido.

     if(copia > INT_MAX / nb){
       copia = 0;
     }

     copia *= nb;
  }
  
  return copia;
}

/*
 Nesta implementação, a verificação é feita dentro do loop for que calcula a potência. Se o valor de result se tornar maior do que o valor máximo permitido para o tipo int, a função retorna imediatamente com o valor 0.

Observe que esta implementação ainda pode estourar se o valor da base for negativo e o expoente for grande o suficiente para fazer com que o resultado se torne positivo novamente. Para lidar com esse caso, você pode adicionar uma verificação adicional para determinar se o sinal do resultado é o esperado. */

