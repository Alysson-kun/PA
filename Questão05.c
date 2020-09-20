#include<stdio.h>

int main(){

// Determine o que será mostrado pelo seguinte programa (compile-o, execute-o e verifique se foram obtidas as respostas esperadas).

float vet[5] = {1.1,2.2,3.3,4.4,5.5};
float *f;
int i;
f = vet;
printf("contador/valor/valor/endereco/endereco");
for(i = 0 ; i <= 4 ; i++){
printf("\ni = %d",i); // será impresso o valor de "i".
printf("vet[%d] = %.1f",i, vet[i]); //será impresso o valor de "i" e o valor do vetor para a posição "i".
printf("*(f + %d) = %.1f",i, *(f+i)); // como "f" recebeu o endereço da posição 0 do vetor "vet", sempre será impresso nessa linha o valor correspondente a posição do vetor vet[0+i]. Ou seja, é a mesma coisa de imprimir vet[i].
printf("&vet[%d] = %X",i, &vet[i]); // será impresso o endereço do vetor "vet" na posição i.
printf("(f + %d) = %X",i, f+i); // como "f" contém o endereço de vet[0] imprimir f+i é a mesma coisa que imprimir o endereço de vet[i].

}
return 0;

}