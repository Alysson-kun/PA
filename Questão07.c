#include<stdio.h>

int main(){
//Considerando a declaração int mat[4], *p, x;, quais das seguintes expressões são válidas? Justifique.

    int mat[4], *p, x;
    p = mat + 1; // Essa expressão é válida. O ponteiro "p" vai receber o endereço da posição 0 do vetor "mat" acrescentando uma posição, ou seja, o endereço correspondente ao próximo elemento com relação a posição 0.
    p = mat++; // Essa expressão é válida. Nessa linha "p" recebe primeiro o endereço do elemento 0 do vetor "mat" e depois o endereço do elemento 0 do vetor "mat" recebe o endereço da posição seguinte. 
    p = ++mat; // Essa expressão é válida. Nessa linha "p" recebe o endereço do primeiro elemento do vetor "mat" somado uma posição, ou seja, a mesma coisa mat+1. 
    x = (*mat)++;

}