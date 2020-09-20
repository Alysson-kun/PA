#include<stdio.h>

int main(){
    //O que fazem os seguintes programas em C?
    int vet[] = {4,9,13};
    int i;
    for(i=0;i<3;i++){
        printf("%d ",*(vet+i));
    }

}