#include <stdio.h>
#include <stdlib.h>

/*Crie uma função capaz de realizar multiplicação matricial da forma C=A B.*/

void multi_vetor (int **A, int **B, int **C, unsigned int linha_a, unsigned int coluna_a, unsigned int coluna_b)
{
    int aux;
    for(int i = 0; i < linha_a; i++)
    {
		for(int j = 0; j < coluna_b; j++)
		{
		    C[i][j]=0;
		    aux = 0;
			for(int k = 0; k < coluna_a; k++)
			{
				aux = aux + A[i][k] * B[k][j];
			}

			C[i][j] = aux;

		}
	}
}

int main ()
{
    int **A, **B, **C;
    unsigned int linha_a, coluna_a, linha_b, coluna_b;
    printf ("Numero de linhas da matriz A: \n");
    scanf ("%d", &linha_a);
    printf ("Numero de colunas da matriz A: \n");
    scanf ("%d", &coluna_a);
    do
    {
        printf ("Numero de linhas da matriz B (deve ser igual ao numero de colunas de A): \n");
        scanf ("%d", &linha_b);
    } while (linha_b!=coluna_a);

    printf ("Numero de colunas da matriz B: \n");
    scanf ("%d", &coluna_b);

    A = malloc(linha_a * sizeof(int*));
    for (int i=0; i<linha_a; i++)
    {
        A[i] = malloc(coluna_a * sizeof(int));
    }


    B = malloc(linha_b * sizeof(int*));
    for (int i=0; i<linha_b; i++)
    {
        B[i] = malloc(coluna_b * sizeof(int));
    }

    C = malloc(linha_a * sizeof(int*));
    for (int i=0; i<linha_a; i++)
    {
        C[i] = malloc(coluna_b * sizeof(int));
    }

    printf ("preencha a matriz A: \n");
    for (int i=0; i<linha_a; i++)
        {
            for (int j=0; j<coluna_a; j++)
            {
                printf ("\nA[%d][%d] = ", i, j);
                scanf ("%d", &A[i][j]);
            }
        }

    printf ("preencha a matriz B: \n");
    for (int i=0; i<linha_b; i++)
        {
            for (int j=0; j<coluna_b; j++)
            {
                printf ("\nB[%d][%d] = ", i, j);
                scanf ("%d", &B[i][j]);
            }

        }

    multi_vetor(A, B, C, linha_a, coluna_a, coluna_b);

    printf ("A x B =: \n");

    for (int i=0; i<linha_a; i++)
        {
            for (int j=0; j<coluna_b; j++)
            {
                printf ("\nC[%d][%d] = ", i, j);
                printf ("%d", C[i][j]);
            }

        }

    for (int i=0; i<linha_a; i++)
    {
        free (A[i]);
    }
    free(A);

    for (int i=0; i<linha_b; i++)
    {
        free (B[i]);
    }
    free(B);

    for (int i=0; i<linha_a; i++)
    {
        free(C[i]);
    }
    free(C);

    return 0;
}