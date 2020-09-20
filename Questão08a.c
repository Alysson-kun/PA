#include<stdio.h>

int main(){
    // continua...
    //O que fazem os seguintes programas em C?
    // a)
    int vet[] = {4,9,13}; // define um vetor 
    int i; // define uma variável
    for(i=0;i<3;i++){
        printf("%d ",*(vet+i)); // imprime o conteúdo de "vet" na posição 0, incrementando a essa posição a ser exibida de acordo com o valor de i.
    }

}
