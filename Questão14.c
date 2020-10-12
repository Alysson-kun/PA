#include <stdio.h>
#include <stdlib.h>

/*Reimplemente o programa da questão anterior utilizando a função qsort() do C. Comente o seu
código, explicando o que faz cada uma das linhas.*/

int comparar(const void * a, const void * b) // Implementando a função comparar que recebe dois ponteiros genericos com const (para prover maior proteção de dados), o objetivo do ponteiro generico é poder alterar o tipo do endereço em outro momento
{
  return ( *(int*)a - *(int*)b ); // É alterado o tipo do ponteiro para int e depois de recuperado o conteúdo guardado nesses endereços é feita a subtração, retornando o valor resultante.
}

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
    
    qsort(p, n, sizeof(float), comparar); // função padrão do C/C++ para ordenar arrays

    printf ("vetor ordenado: \n"); 
    for (int i=0; i<n; i++) // laço de repetição criado para o impressão do array ordenador.
    {
        printf ("%f \n", p[i]);
    }

    free(p); // Liberação de memória do ponteiro p.
    return 0;
}