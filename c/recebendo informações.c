#include <stdio.h>
int main(){
    //para receber informações do teclado no c tem-se que criar uma variave especificando o tipo dela, depois da variavel criada se utiliza o scaf() para que a variavel possa receber o valor
    char nome[20];
    printf("digite seu nome: \n");
    scanf("%s", &nome);
    printf("muito prazer %s ", nome);
    return 0;
}