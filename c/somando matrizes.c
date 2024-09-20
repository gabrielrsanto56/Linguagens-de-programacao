#include <stdio.h>
int main(){
    int primeiraMatriz[2][2];
    int segundaMatriz[2][2];
    int somaMatriz[2][2];
    printf("\n primeira matriz \n");
    for(int i = 0; i<2; i++){
        for(int j = 0; j<2; j++){
            printf("digite o elemento [%d] [%d] da primeira matriz \n", i, j);
            scanf("%d", &primeiraMatriz[i][j]);            
        }
    }

    printf("\n segunda matriz \n");
    for(int i = 0; i<2; i++){
        for(int j = 0; j<2; j++){
            printf("digite o elemento [%d] [%d] da segunda matriz \n", i, j);
            scanf("%d", &segundaMatriz[i][j]);            
        }
    }

    for(int i = 0; i<2; i++){
        for(int j = 0; j<2; j++){
            somaMatriz[i][j] = primeiraMatriz[i][j] + segundaMatriz[i][j];        
        }
    }

    printf("\n soma das matrizes \n");
    for(int i = 0; i<2; i++){
        for(int j = 0; j<2; j++){
            printf(" %d", somaMatriz[i][j]);        
        }printf("\n");
    }

    return 0;
}