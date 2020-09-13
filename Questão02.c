#include<stdio.h>

int main(){

// Questão 2: Mostre o que será impresso por programa supondo que i ocupa o endereço 4094 na memória.

int i=5, *p;
p = &i;
printf("%x %d %d %d %d", p,*p+2,**&p,3**p,**&p+4);
// para p, a impressão é o endereço hexadecimal guardado no ponteiro p.
// para *p+2, a impressão é a soma do conteúdo de p+2, portanto é 7.
// para **&p, será impresso o número decimal correspondente ao conteúdo do conteúdo do endereço de p, é 5.
// para 3**p, será impresso 3 vezes o conteúdo armazenado no ponteiro p, portanto é 15.
// para **&p+4, será impresso o conteúdo do conteúdo do endereço de p que é 5, somado a 4, resultando 9.
}