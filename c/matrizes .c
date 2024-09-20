#include <stdio.h>
int main(){
    int matriz[3][3]; //declarando matriz com 3 linhas e 3 colunas

    for(int i=0; i<3; i++){ //laço for para percorrer os dados da matriz
        for(int j=0; j<3; j++){ //laço for aninhado para percorrer a matriz
            printf("digite o elemento da posição [%d] [%d] \n", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    //mostrando a matriz
    printf("\n matriz que voce digitou: \n");
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf(" %d ", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}