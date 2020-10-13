#include<stdio.h>

int main(){
// Questão 3: Se i e j são variáveis inteiras e p e q ponteiros para int, quais das seguintes expressões de atribuição são ilegais?

    int i, j;
    int *p, *q;

    p = i; // ok
    q = &j; // ok
    p = &*&i; // ok
    i = (*&)j; // "*" pega o conteúdo de um endereço de memória e o "&" pega o endereço de memória de uma variável. (*&) está tentando obter o conteúdo de um operador e não faz sentido.
    i = *&j; // ok
    i = *&*&j; // ok
    q = *p; //ok
    i = (*p)++ + *q; // ok
}