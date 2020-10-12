#include <stdio.h>
#include <stdlib.h>

int comparar( float *a,  float *b)
{
        if ( *a < *b ) return 0;
        if ( *a > *b ) return 1;
}


void ordenar (int n, float *p, int(*ponteiro_f)( float*,  float*))
{
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n-1; j++)
        {
            float *a = &p[j];
            float *b = &p[j+1];

            if((*ponteiro_f)(a,b)==1)
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

    int(*ponteiro_f)( float*,  float*) = comparar;
    ordenar(n, p, ponteiro_f);

    printf ("vetor ordenado: \n");
    for (int i=0; i<n; i++)
    {
        printf ("%f \n", p[i]);
    }

    free(p);
    return 0;
}
