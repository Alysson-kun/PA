#include<stdio.h>

int main(){
    //b)
    char x0[4];
    int x1[4];
    float x2[4];
    double x3[4];

    printf("os enderecos do vetor char: ");

    for(int i=0;i<4;i++){
        printf("%d ",x0+i);      
    }
    
    printf("\n os enderecos do vetor int: ");

    for(int i=0;i<4;i++){
        printf("%d ",x1+i);
    }

    printf("\n os enderecos do vetor float: ");
    for(int i=0;i<4;i++){
        printf("%d ",x2+i);
    }

    printf("\n os enderecos do vetor double: ");

    for(int i=0;i<4;i++){
        printf("%d ",x3+i);
    }
    //Se os valores hipotéticos de bytes para os tipos de variavel da questão 9 fossem reais, a impressão teria sido conforme ilustrado  na questão 9. Ou seja, a logica eh somar aos enderecos de memoria o numero de bytes de cada variavel para obter o proximo endereco.
}