#include <stdio.h>
#include <stdlib.h>

int main(){

//Implemente em linguagem C uma função em um programa de computador que leia n valores do tipo float e os apresente em ordem crescente. Utilize alocação dinâmica de memória para realizar a tarefa.

    float *p;
    int n;
    printf ("tamanho do vetor: ");
    scanf ("%d", n);
    p = malloc(n*sizeof(float));
    p[1]=2.5;
    printf ("%f2 \n", p[1]);

    /*printf ("preencha o vetor: ");
    for (int i=0; i<n; i++)
        scanf ("%f \n", p[i]);

    for (int j=0; j<n; j++)
    {
        int aux=0;
        if (p[j]>p[j+1])
        {
            aux=p[j];
            p[j]=p[j+1];
            p[j+1]=aux;
        }

    }
    printf ("vetor ordenado: ");
    for (int i=0; i<n; i++)
        printf ("%f \n", p[i]);*/

    free(p);

}