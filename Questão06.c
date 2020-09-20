#include<stdio.h>

int main(){
//Assumindo que pulo[] é um vetor do tipo int, quais das seguintes expressões referenciam o valor do terceiro elemento do vetor?

*(pulo + 2); 
*(pulo + 4);
// a operação de deferenciação só pode ser realizada com ponteiros, portanto não pode ser nenhuma das duas primeiras alternativas.
pulo + 4;
pulo + 2;
// A opção "pulo + 4" vai retornar o valor da posição 5 do vetor "pulo", pois pulo corresponde ao endereço do elemento 0 do vetor. Portanto, "pulo + 2" é a alternativa certa.
}