/*
 *Écrire une fonction ft_div_mod qui a le prototypage suivant :
 void ft_div_mod(int a, int b, int *div, int *mod);
 • Cette fonction divise les deux paramètres a et b et stocke le resultat dans l’int
 pointé par div.
 Elle stocke également le reste de la division de a et b dans l’int pointé par mod.
 ===================================PT==========================================

 Escreva uma função ft_div_mod que tenha a seguinte prototipagem:
 void ft_div_mod(int a, int b, int *div, int *mod);
 • Esta função divide os dois parâmetros a e b e armazena o resultado no int
 apontado por div.
 Ele também armazena o restante da divisão de a e b no int apontado pelo mod..
 */

#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod);

int main(void) {
    int a = 10;
    int b = 3;
    int div, mod;

    ft_div_mod(a, b, &div, &mod);

    printf("Divisão de %d por %d é %d\n", a, b, div);
    printf("Resto da divisão de %d por %d é %d\n", a, b, mod);

    return 0;
}

void ft_div_mod(int a, int b, int *div, int *mod) {

    *div = a / b;
    *mod = a % b;
}

