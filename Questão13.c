#include <stdio.h>
#include <stdlib.h>

/*Implemente em linguagem C uma função em um programa de computador que leia n valores do
tipo float e os apresente em ordem crescente. Utilize alocação dinâmica de memória para
realizar a tarefa.*/

void ordernar(int n, float *p)
{
    for (int i=0; i<n; i++)
    {
            for (int j=0; j<n-1; j++)
            {
                if(p[j]>p[j+1])
                {
                    int aux;
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

    ordernar(n,*p);

    printf ("vetor ordenado: \n");
    for (int i=0; i<n; i++)
    {
        printf ("%f \n", p[i]);
    }

    free(p);
    return 0;
}