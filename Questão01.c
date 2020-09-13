#include<stdio.h>

int main(){

// Questão 1: Seja o seguinte trecho de programa:

int i=3,j=5; // São criadas duas variáveis i e j, o valor 3 é atríbuido a variável i e o valor 5 é atríbuido a variável j
int *p, *q; // São definidos 2 ponteiros, p e q

//Determine o valor das seguintes expressões:

p = &i; // o ponteiro p recebe o endereço de i
q = &j; // o ponteiro q recebe o endereço de j
p == &i; // verifica se p é igual ao endereço de i. Essa expressão retorna 1, pois ela é verdadeira.
*p - *q; // conteúdo de p menos o conteúdo de q, ou seja, 3 - 5. A expressão retorna -2.
**&p; // a expressão solicita o conteúdo do conteúdo do endereço de p, que é 3.
3 - *p/(*q) + 7; // a expressão subtrai de 3 parte inteira da divisão 3/5, que é 3-0. Ao final soma-se 7, resultando 10.
}