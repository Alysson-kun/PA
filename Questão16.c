#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int comparar( float *a,  float *b)
{
        if ( *a < *b ) return 0;
        if ( *a > *b ) return 1;
}

int comparar_qsort(const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
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
   
    float *p,*b;

    p = malloc(n * sizeof(float));
    b = malloc(n * sizeof(float));

    printf ("preencha o vetor: \n");

    for (int i=0; i<n; i++)
        {
            scanf ("%f", &p[i]);
        }

    for (int i=0; i<n; i++)
        {
            b[i]=p[i];
        }

    int(*ponteiro_f)( float*,  float*) = comparar;
    
    clock_t t1i = clock();
    
    ordenar(n, p, ponteiro_f);
    
    clock_t t1f = clock();

    clock_t t2i = clock();

    qsort(b, n, sizeof(float), comparar_qsort);

    clock_t t2f = clock();

    double tempo_1 = (t1f-t1i);
    double tempo_2 = (t2f-t2i); 
    printf ("%lf, %lf " t1f, t1i);
    printf ("vetor ordenado: \n");
    for (int i=0; i<n; i++)
    {
        printf ("%f \n", p[i]);
    }

    printf("Tempo da funcao ordenar (Milisec): %lf \n Tempo da funcao qsort (Milisec): %lf", tempo_1, tempo_2);

    free(p);
    free(b);
    return 0;
    
}
