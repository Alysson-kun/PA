#include <stdio.h>
#include <stdlib.h>

int comparar(const void * a, const void * b)
{
        if ( *(int*)a < *(int*)b ) return 0;
        if ( *(int*)a >  *(int*)b ) return 1;
}


void ordenar (float *p, unsigned int n, int (*pf) (const void*, const void*) )
{
    
    int (*pf) (const void*, const void*)=comparar;
    for (int i=0; i<n; i++)
    {
            for (int j=0; j<n-1; j++)
            {
                const void *a = p[j];
                const void *b = p[j+1];

                if((*pf)(a,b)==1)
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

    ordenar(p, n, sizeof(float), pf);

    printf ("vetor ordenado: \n");
    for (int i=0; i<n; i++)
    {
        printf ("%f \n", p[i]);
    }

    free(p);
    return 0;
}
