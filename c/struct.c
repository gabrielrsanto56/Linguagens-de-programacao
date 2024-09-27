#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

struct cadastro{
    char nome[50];
    char rua[50];
    int telefone;
    int idade;
};

struct cadastro cadastros[3];

int main(){
    setlocale(LC_ALL,"Portuguese");

    for(int i = 0; i<3; i++){
        printf("digite o %dº nome do cadastro \n", i+1);
        gets(cadastros[i].nome);

        printf("digite a %dº rua do cadastro \n", i+1);
        gets(cadastros[i].rua);

        printf("digite o %dº telefone do cadastro \n", i+1);
        scanf("%d", &cadastros[i].telefone);
        getchar();

        printf("digite a %dº idade do cadastro \n", i+1);
        scanf("%d", &cadastros[i].idade);
        getchar();

        }printf("\n");
        printf("cadastro realizado com sucesso! \n");

    for(int i = 0; i<3;i++){
        printf("\n nome: %s\n", cadastros[i].nome);
        printf("rua: %s\n", cadastros[i].rua);
        printf("telefone: %d\n", cadastros[i].telefone);
        printf("idade: %d\n", cadastros[i].idade);
    }
    return 0;
}