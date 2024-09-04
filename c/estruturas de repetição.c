#include <stdio.h>
int main(){
    int idade;
    printf("digite sua idade: ");
    scanf("%d", &idade);
//para fazer um estrutura condicional no c se coloca if(condição){o que deve ser feito caso a condição seja atendida}
    if(idade < 16){
        printf("voce nao tem idade de votar ");
//a proxima condição caso a primeira não seja atendida é escrita com else if(segunda condição){o que deve ser feito caso a segunda condição seja atendida}

//Uma expressão usando && é verdadeira somente se ambos os operadores forem verdadeiros. Uma expressão usando || é verdadeira apenas um dos operadores for verdadeiro.
    }else if(idade >= 16 && idade < 18 || idade >= 70){
        printf("voce pode votar mas nao e obrigatorio ");
//por fim, caso nenhuma condição anterior seja atendida se utiliza apenas else{o que deve ser feito caso nenhuma outra condição tenha sido atendida}
    }else{
        printf("voce deve votar ");
    }
    return 0;
}