#include <stdio.h>

int main(){
    int n1, n2;
    int soma, subtracao, multiplicacao, divisao;

    printf ("entre com o numero 1: \n");
    scanf("%d", &n1);
    printf ("entre com o numero 2: \n");
    scanf("%d", &n2);
    // soma
    soma = n1 + n2;

    // subtração
    subtracao = n1 - n2;

    // multiplicação
    multiplicacao = n1 * n2;

    // divisão
    divisao = n1 / n2;

    printf("a soma é: %d\n", soma);
    printf("a subtracao é: %d\n", subtracao);
    printf("a multiplicacao é: %d\n", multiplicacao);
    printf("a divisao é: %d\n", divisao);

    return 0;

}
