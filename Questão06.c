#include<stdio.h>

int main(){

// DÚVIDA: a operação de deferenciação não é exclusiva de ponteiros?

//Assumindo que pulo[] é um vetor do tipo int, quais das seguintes expressões referenciam o valor do terceiro elemento do vetor?
    int pulo[] = {4,9,13};
    *(pulo + 2); 
    *(pulo + 4);
    // A opção "*(pulo + 4)" vai retornar o valor da posição 5 do vetor "pulo", pois "pulo" corresponde ao endereço do elemento 0 do vetor. Portanto, "*(pulo + 2)" é a alternativa certa.
    pulo + 4;
    pulo + 2;
    // A opção "pulo + 4" vai retornar o valor da posição 5 do vetor "pulo", pois pulo corresponde ao endereço do elemento 0 do vetor. Portanto, "pulo + 2" também é uma alternativa certa.
}