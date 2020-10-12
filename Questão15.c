#include <stdio.h>
#include <stdlib.h>

void comparar(const void * a, const void * b)
{
    
        if ( *(int*)a <= *(int*)b ) return 0;
        if ( *(int*)a >  *(int*)b ) return 1;
}


void ordenar (void *p, unsigned int n, sizeof(float), float (*comparar) (float))
{
    for (int i=0; i<n; i++)
    {
            for (int j=0; j<n-1; j++)
            {
                if((*comparar)(i,j)==1)
                {
                    float aux;
                    aux=p[j];
                    p[j]=p[j+1];
                    p[j+1]=aux;
                }

            }
    }
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
