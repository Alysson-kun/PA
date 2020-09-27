#include<stdio.h>

int main(){
    //O que fazem os seguintes programas em C?
    // a)
    int vet[] = {4,9,13}; // define um vetor 
    int i; // define uma variável
    for(i=0;i<3;i++){
        printf("%d ",*(vet+i)); // imprime o conteúdo de "vet" na posição 0, incrementando 1 a esse valor até i<3. Alterando a posição que irá ser exibida de acordo com o valor de i.
    }
    //Esse programa imprime o conteúdo de um vetor.
}
