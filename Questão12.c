#include <stdio.h>
#include <stdlib.h>

/* O que é um ponteiro para uma função? Pesquise na Internet referências sobre o assunto e
escreva um pequeno programa exemplificando o uso deste recurso */

/*Resposta: Segundo Pinho (201x), uma função é um aglomerado de comandos armazenado em um bloco, cujo qual, pode ser acessado através de um nome. Sendo assim, sabendo que um ponteiro dá acesso a um edereço através de um nome, um ponteiro para função guardaria o endereço de uma função na memória. Ou seja, ponteiro para função é um meio de acessar um conjunto de instruções guardadas em um lugar na memoria. */
/* link 1: https://www.inf.pucrs.br/~pinho/PRGSWB/PonteirosParaFuncoes/PonteirosParaFuncoes.html */
/* link 2: https://www.inf.pucrs.br/~pinho/LaproI/Funcoes/AulaDeFuncoes.htm */
int multiplicacao (int n1, int n2)
{
    return n1*n2;
}

int main ()
{
    int (*px) (int, int)=multiplicacao;

    int a;
    int b;

    printf("Digite o primeiro numero: ");
    scanf("%d",&a);
    printf("Digite o segundo numero: ");
    scanf("%d",&b);

    printf("O resultado eh: %d", (*px)(a,b));
}
