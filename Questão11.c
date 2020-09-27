#include <stdio.h>

int main (void){

    // Suponha que as seguintes declarações tenham sido realizadas:
    float aloha[10], coisas[10][5], *pf, value = 2.2;
    int i=3;

    //Identifique quais dos seguintes comandos é válido ou inválido:

    aloha[2] = value; //Essa expressão é válida. Está sendo atribuído a posição 3 do array aloha o conteúdo de value, que é 2.2.
    scanf("%f", &aloha); // Essa expressão é inválida. Para apenas uma posição é preciso informar qual. ex: aloha [1]. Mais de uma ou todas as posições é preciso criar um for.
    aloha = value; //Essa expressão é inválida. É preciso informar a posição do array em que se quer atribuir o value 
    printf("%f", aloha); //Essa expressão é inválida. Para apenas uma posição é preciso informar qual. ex: aloha [1]. Mais de uma ou todas as posições é preciso criar um for. Também é necessário o operador & para atribuir o valor por referência.
    coisas[4][4] = aloha[3]; // Essa expressão é válida. Está sendo atribuído a linha 4 e coluna 4 do array bidimensional coisas o conteúdo de aloha.
    coisas[5] = aloha; // Essa expressão é inválida. É necessário informar linha e coluna do array bidimensional para atribuir valor. 
    pf = value; // Essa expressão é inválida. O ponteiro guarda endereços, para fazer alterações no conteúdo de pf é necessário o *.
    pf = aloha; // Essa expressão é válida. O ponteiro recebe o endereço da posição 0 de aloha.
 */

}