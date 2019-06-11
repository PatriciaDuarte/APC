#include <stdio.h>
#include <stdlib.h>

#define TAM 10

void quick(int *vet1, int esq, int dir);
void intercala(int **vetor, int tamBuffer, int posVi, int posVj, int numUsu);

main (){
    int *vetorDesordenado;
    int *buffer, **vetor;
    int i, cont = 0, j, k, usu, v, a=1, f;

    printf ("Entre com o tamanho desejado para o vetor: ");
    scanf ("%d", &usu);

    vetorDesordenado = (int *)malloc(usu*sizeof(int));

    v = usu;

    for (i=0; i < usu; i++){
        vetorDesordenado[i] = 1 + rand () %20;
    }

    printf ("O vetor desordenado:\n");
    for (i=0; i < usu; i++){
        printf ("  %d", vetorDesordenado[i]);
    }

    if (usu <= TAM){
        buffer = (int *)malloc (usu*sizeof(int));
        for (i=0; i < usu; i++){
            buffer[i] = vetorDesordenado[i];
        }
        quick(buffer, 0, usu-1);
        printf ("\n\nO vetor ordenado eh:\n");
        for (j=0; j < usu; j++)
            printf ("  %d", buffer[j]);
    }
    else {
        buffer = (int *)malloc (TAM*sizeof(int));
        while (v > TAM){
            v = v / 2;
            a = a * 2;
        }

        vetor = (int **)malloc(a*sizeof(int));
        for (i=0; i < a; i++){
            vetor[i] = (int *)malloc(TAM*sizeof(int));
        }

        for (j=0; j < a; j++){
            for (i=0; i < TAM; i++){
                buffer[i] = vetorDesordenado[cont];
                cont++;
            }
            quick(buffer, 0, 9);
            for(k=0; k < TAM; k++){
                vetor[j][k] = buffer[k];
            }
        }

        printf ("\n\nOs sub-vetores ordenados:");
        for (j=0; j < a; j++){
            printf ("\n");
            for (i=0; i < TAM; i++){
                printf ("  %d", vetor[j][i]);
            }
        }
        intercala(vetor, TAM, a/2, TAM*2, usu);
    }

}

void quick(int *vet1, int esq, int dir){

    int pivo = esq, i, ch, j;

    for(i=esq+1;i<=dir;i++){
        j = i;
        if(vet1[j] < vet1[pivo]){
         ch = vet1[j];
         while(j > pivo){
            vet1[j] = vet1[j-1];
            j--;
         }
         vet1[j] = ch;
         pivo++;
        }
    }

    if(pivo-1 >= esq){
        quick(vet1,esq,pivo-1);
    }

    if(pivo+1 <= dir){
        quick(vet1,pivo+1,dir);
    }
 }

void intercala(int **vetor, int tamBuffer, int posVi, int posVj, int numUsu){
    int k, i, j, w = 0, posI = 0, posJ = 1;
    int tamB = tamBuffer;
    int **vet;

    vet = (int **)malloc(posVi*sizeof(int));
        for (i=0; i < posVi; i++){
            vet[i] = (int *)malloc(posVj*sizeof(int));
        }

    while (w < posVi){
        k=0; i=0; j=0;
        while (i < tamB+1 && j < tamB+1){
            if (vetor[posI][i] <= vetor[posJ][j]){
                vet[w][k] = vetor[posI][i];
                i++;
            }
            else{
                vet[w][k] = vetor[posJ][j];
                j++;
            }
            k++;
        }
        w++;
        if (posI < tamB){
            posI = posI + 2;
            posJ = posJ + 2;
        }
    }
    printf ("\n");
    for (i=0; i < posVi; i++){
        printf ("\n");
        for (j=0; j < posVj; j++)
            printf("  %d", vet[i][j]);
    }
    tamB = tamB * 2;
    if (tamB < numUsu){
        posVi = posVi / 2;
        posVj = posVj * 2;
        for (i=0; i < posVi; i++)
        intercala(vet, tamB, posVi, posVj, numUsu);
    }
}
