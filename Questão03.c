#include<stdio.h>

int main(){
// DÍVIDA: não entendi i = *&*&j;
// Questão 3: Se i e j são variáveis inteiras e p e q ponteiros para int, quais das seguintes expressões de atribuição são ilegais?

    int i, j;
    int *p, *q;

    p = i; // está incorreto, pois um ponteiro só pode atribuir endereços.
    q = &j; // ok
    p = &*&i; // o conteúdo do endereço de i é igual ao endereço de i, logo o endereço do endereço de i não faz sentido.
    i = (*&)j; // *& retorna o conteúdo do endereço de nada
    i = *&j; // ok
    i = *&*&j; // n sei ainda
    q = *p; // está incorreto, pois um ponteiro só pode atribuir endereços.
    i = (*p)++ + *q; // ok
}