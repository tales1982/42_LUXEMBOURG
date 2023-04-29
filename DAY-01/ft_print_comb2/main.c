#include <stdio.h>

void ft_putchar(char c)
{
    
   write(1, &c, 1);
}

void main(void) {
    int i, j;
    for (i = 0; i < 99; i++) {
        for (j = i + 1; j <= 99; j++) {
            ft_putchar((i / 10) + '0');
            ft_putchar((i % 10) + '0');
            ft_putchar(' ');
            ft_putchar((j / 10) + '0');
            ft_putchar((j % 10) + '0');
            if (i != 98 || j != 99) {
                ft_putchar(',');
                ft_putchar(' ');
            }
        }
    }
    ft_putchar('\n');
}

/*
A função utiliza duas estruturas de repetição for para percorrer todos os números entre 0 e 99. Em seguida, a função utiliza a função auxiliar ft_putchar para exibir as combinações de dois números no formato exigido, acrescentando uma vírgula e um espaço entre cada combinação (exceto a última). A função ft_putchar é uma função auxiliar que escreve um caractere na saída padrão.

O algoritmo utilizado pela função é relativamente simples. O loop externo percorre todos os números de 0 a 98, enquanto o loop interno percorre todos os números entre o número atual do loop externo e 99. Em seguida, os números são exibidos usando ft_putchar no formato "XX YY" (onde XX é o número externo e YY é o número interno) e uma vírgula e um espaço são adicionados, exceto para a última combinação.

Note que esta implementação usa a função write para escrever caracteres na saída padrão. Isso é semelhante à função printf, mas é mais eficiente para escrever um único caractere. Também é importante lembrar de incluir um caractere de nova linha (\n) no final da saída para garantir que ela seja exibida corretamente.

*/