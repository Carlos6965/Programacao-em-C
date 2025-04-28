#include <stdio.h>

int main(){
    int *vetor;
    int n = 0;
    int tamanho = 5;

    vetor = maloc(tamanho * sizeof(int));

    vetor[n++] = 15;
    vetor[n++] = 25;
    vetor[n++] = 5;

    preintf("Vetor não ordenado (Array Dinâmico): \n");

    for(int i = 0; i < n; i++){
        printf("Posição %d: %d\n", i, vetor[i]);
    }

    return 0;
}