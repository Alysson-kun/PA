#include <stdio.h>
#include <stdlib.h>

/*Reimplemente o programa da questão anterior utilizando a função qsort() do C. Comente o seu
código, explicando o que faz cada uma das linhas.*/

int comparar(const void * a, const void * b)
{
  return ( *(float*)a - *(float*)b );
}

int main()
{
    
    unsigned int n;
    printf ("tamanho do vetor: \n");
    scanf ("%d", &n);
    float *p;
    p = malloc(n * sizeof(float) );
    
    printf ("preencha o vetor: \n");
    for (int i=0; i<n; i++)
        {
            scanf ("%f", &p[i]);
        }
    
    qsort(p, n, sizeof(float), comparar);

    printf ("vetor ordenado: \n");
    for (int i=0; i<n; i++)
    {
        printf ("%f \n", p[i]);
    }

    free(p);
    return 0;
}