#include <stdio.h>
#include <stdlib.h>


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
