#include <stdio.h>

int main (void){
    
    //Utilize a ideia do ponteiro para função pela função qsort() para implementar sua própria função de ordenação. Para isso, sua função deverá receber, entre outros argumentos, um ponteiro para a função de comparação.
    
    int comparar(const void * a, const void * b) // Implementando a função comparar que recebe dois ponteiros genericos com const (para prover maior proteção de dados), o objetivo do ponteiro generico é poder alterar o tipo do endereço em outro momento
    {
        ( *(int*)a - *(int*)b );
        if ( *(int*)a <  *(int*)b ) return -1;
        if ( *(int*)a == *(int*)b ) return 0;
        if ( *(int*)a >  *(int*)b ) return 1;
    }

    ordenar (void *p, n, sizeof(float), v)

    int main()
    {
    
    unsigned int n; // tipo inteiro sem sinal, pois arrays não recebem tamanho negativo.
    printf ("tamanho do vetor: \n");
    scanf ("%d", &n); // É definido pelo usuário o tamanho do vetor
    float *p; // Definido ponteiro do tipo float
    p = malloc(n * sizeof(float) ); // Definida a alocação dinâmica de memoria para o ponteiro "p" guardar o número de dados, do tipo float, definido pelo usuário
    
    printf ("preencha o vetor: \n");
        for (int i=0; i<n; i++) // laço de repetição criado para o preenchimento do vetor pelo usuário.
        {
            scanf ("%f", &p[i]);
        }
    float (*v) (float)= comparar;
    qsort(p, n, sizeof(float), v); // função padrão do C/C++ para ordenar arrays

    printf ("vetor ordenado: \n"); 
        for (int i=0; i<n; i++) // laço de repetição criado para o impressão do array ordenador.
        {
            printf ("%f \n", p[i]);
        }

    free(p); // Liberação de memória do ponteiro p.
    return 0;
}



}