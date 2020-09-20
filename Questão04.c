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
  printf("%d \n", valor);

}
