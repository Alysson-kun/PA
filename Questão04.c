#include<stdio.h>

int main(){

/*Determine o que será mostrado pelo seguinte programa (compile-o, execute-o e verifique se
foram obtidas as respostas esperadas).*/

  int valor;
  int *p1;
  float temp;
  float *p2;
  char aux;
  char *nome = "Ponteiros";
  char *p3;
  int idade;
  int vetor[3];
  int *p4;
  int *p5;
    /* (a) */
  valor = 10;
  p1 = &valor;
  *p1 = 20;
  printf("%d \n", valor); // o ponteiro "p1" recebeu o endereço de "valor", como foi alterado o conteúdo de "p1" o valor da variável "valor" também foi alterado, portanto a saída é 20.
  
  /* (b) */
  temp = 26.5;
  p2 = &temp;
  *p2 = 29.0;
  printf("%.1f \n", temp); // o ponteiro "p2" recebeu o endereço de "temp", como foi alterado o conteúdo de "p2" o valor da variável "temp" também foi alterado, portanto a saída é 29.0.
  
  /* (c) */
  p3 = &nome[0];
  aux = *p3;
  printf("%c \n", aux); // o ponteiro "p3" recebeu o endereço guardado na posição 0 do vetor de ponteiros "nome", o char "aux" recebeu o conteúdo de "p3", portanto a saída é "P".
  
  /* (d) */
  p3 = &nome[4];
  aux = *p3;
  printf("%c \n", aux); // o ponteiro "p3" recebeu o endereço guardado na posição 4 do vetor de ponteiros  "nome", o char "aux" recebeu o conteúdo de "p3", portanto a saída é "e".
  
  /* (e) */
  p3 = nome;
  printf("%c \n", *p3); // Ao fazer p3=nome o comando está atribuindo o primeiro endereço guardado no vetor de ponteiros "nome" a "p3", portanto a saída é "P".
  /* (f) */

  p3 = p3 +4;
  printf("%c \n", *p3); // Como p3 tinha guardado o primeiro endereço do vetor de ponteiros "nome", ao instruir que "p3" recebesse o endereço guardado em p3+4 foi dito que ele caminhasse 4 posições para frente no conjunto de elementos guardado em "nome", portanto temos a saída "e".
  
  /* (g) */
  p3--;
  printf("%c \n", *p3); // Como p3 tinha guardado o endereço da posição 5 do vetor de ponteiros "nome", ao decrementar uma posição temos como saída "t".
  
  /* (h) */
  vetor[0] = 31;
  vetor[1] = 45;
  vetor[2] = 27;
  p4 = vetor;
  idade = *p4;
  printf("%d \n", idade); // "p4" vai receber o endereço guardado na posição 0 do "vetor", "idade" vai receber o conteúdo do endereço de "p4" que é 31.
  
  /* (i) */
  p5 = p4 +1;
  idade = *p5;
  printf("%d \n", idade); // "p5" vai receber o endereço de "p4" incrementado mais uma posição, ou seja, a posição 1 do "vetor". "idade" vai receber o conteúdo guardado no endereço armazenado em "p5", portanto a saída é 45.
  
  /* (j) */ 
  p4 = p5 +1;
  idade = *p4;
  printf("%d \n", idade); // "p5" está com o endereço de vetor[1] guardado. Ao atribuir a "p4" "p5+1" estamos guardando nesse ponteiro o endereço de vetor 2, logo idade recebe 27.

  /* (l) */
  p4 = p4 - 2;
  idade = *p4;
  printf("%d \n", idade); // Como "p4" está com o endereço de vetor[2], ao atribuir p4=p4-2 estamos guardando em "p4" o endereço de vetor[0] novamente, logo idade é 31.

    /* (m) */
  p5 = &vetor[2] - 1;
  printf("%d \n", *p5); // "p5" irá receber o endereço da posição 2 de "vetor" decrementada uma vez. Ou seja, o p5 recebe valor de vetor[1]. Imprimir p5 retorna 45.
  
  /* (n) */
  p5++;
  printf("%d \n", *p5); // Incrementando uma posição em p5 que até o momento guardava o endereço de vetor[1], o faz voltar a guardar o endereço de vetor[2]. Imprimir p5 retorna 27.
  return(0);

}
