#include<stdio.h>

int main(){

int i=3,j=5; // São criadas duas variáveis i e j, o valor 3 é atríbuido a variável i e o valor 5 é atríbuido a variável j
int *p, *q; // São definidos 2 ponteiros, p e q
p = &i; // o ponteiro p recebe o endereço de i

printf("o valor: %i",p);

q = &j; // o ponteiro q recebe o endereço de j
p == &i; // verifica se p é igual ao endereço de i. Essa expressão retorna 1, pois ela é verdadeira. 
*p - *q; // conteúdo de p menos o conteúdo de q, ou seja, 3 - 5. A expressão retorna -2.
**&p; //
3 - *p/(*q) + 7; // 



}