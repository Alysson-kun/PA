#include<stdio.h>

int main(){
    //b)
    int vet[] = {4,9,13};
    int i;
    for(i=0;i<3;i++){
        printf("%X ",vet+i); // imprime o endereço de "vet" na posição 0, incrementando 1 a esse valor até i<3. Alterando o endereço que irá ser exibido de acordo com o valor de i.
    }
    //Esse programa imprime os endereços armazenados no array vet.
}