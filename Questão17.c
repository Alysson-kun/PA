#include <stdio.h>
#include <stdlib.h>

/*Escreva uma função em c que escreva em um vetor a soma dos elementos correspondentes de
outros dois vetores (os tamanhos dos vetores devem ser fornecidos pelo usuário). Por exemplo,
se o primeiro vetor contiver os elementos 1, 3, 0 e -2, e o segundo vetor contiver os elementos 3,
5, -3 e 1, o vetor de soma terá valores resultantes iguais a 4, 8, -3 e -1. A função deve receber 4
argumentos: os nomes dos três vetores e o número de elementos presentes em cada vetor.*/

void soma_vetor (int *a, int *b, int *c, unsigned int n)
{
    for (int i; i<n; i++)
        a[i]=b[i]+c[i];
}
int main ()
{
    int *a, *b, *c;
    unsigned int n;
    printf ("tamanho dos vetores: \n");
    scanf ("%d", &n);

    a = malloc(n * sizeof(int));
    b = malloc(n * sizeof(int));
    c = malloc(n * sizeof(int));

    printf ("preencha o vetor 1: \n");
    for (int i=0; i<n; i++)
        {
            scanf ("%d", &b[i]);
        }
    printf ("preencha o vetor 2: \n");
    for (int i=0; i<n; i++)
        {
            scanf ("%d", &c[i]);
        }
    soma_vetor(a,b,c,n);

    printf ("soma dos vetores: \n");

    for (int i=0; i<n; i++)
    {
        printf ("%d ", a[i]);
    }

    free(a);
    free(b);
    free(c);

    return 0;
}
