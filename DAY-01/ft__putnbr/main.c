#include <stdio.h>
#include <limits.h>

void ft_putnbr(int nb) {
    if (nb == INT_MIN) {
        ft_putnbr(nb / 10);
        putchar('0' - (nb % 10));
    } else {
        if (nb < 0) {
            putchar('-');
            nb = -nb;
        }
        if (nb >= 10) {
            ft_putnbr(nb / 10);
        }
        putchar('0' + (nb % 10));
    }
}

int main() {
    ft_putnbr(INT_MIN);
    putchar('\n');
    ft_putnbr(-1234567890);
    putchar('\n');
    ft_putnbr(0);
    putchar('\n');
    ft_putnbr(1234567890);
    putchar('\n');
    ft_putnbr(INT_MAX);
    putchar('\n');
    return 0;
}

/*
Esse código é um programa simples em linguagem C que imprime números inteiros na saída padrão usando a função putchar.

A função ft_putnbr é definida para imprimir um número inteiro nb na saída padrão. Ela verifica se o número é o valor mínimo para int definido em limits.h (INT_MIN), que não pode ser negativo, e, portanto, requer uma manipulação especial. Se nb for igual a INT_MIN, a função chama a si mesma recursivamente com nb dividido por 10 e imprime o caractere '0' - (nb % 10) usando a função putchar. O cálculo '0' - (nb % 10) é usado para imprimir o último dígito do número de forma correta.

Se nb não for INT_MIN, a função verifica se ele é negativo e, se for, imprime o caractere - e torna nb positivo. Em seguida, a função verifica se nb tem mais de um dígito e, se tiver, chama a si mesma recursivamente com nb dividido por 10. Em seguida, a função imprime o último dígito do número usando a função putchar e o cálculo '0' + (nb % 10).

Na função main, a função ft_putnbr é chamada várias vezes para imprimir diferentes números inteiros na saída padrão, incluindo o valor mínimo e máximo para int. Em cada chamada, a função putchar é usada para imprimir um caractere de nova linha (\n) para separar os números na saída. No final, a função main retorna 0 para indicar que o programa terminou sem erros.*/