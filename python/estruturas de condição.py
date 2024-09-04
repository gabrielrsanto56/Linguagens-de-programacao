idade = int(input('digite sua idade '))
#as estruturas de condição servem para executar uma parte especifica do código onde uma condição deve ser atendida

#na primeira condição se usa if condição:
    #com o código indentado se define o que deve ser feito naquela condição

if idade >= 16 and idade < 18 or idade >= 70:

#uma expressão usando and é verdadeira somente se ambos os operadores forem verdadeiros. Uma expressão usando or é verdadeira apenas um dos operadores for verdadeiro.

    print('voce pode votar mas não tem obrigação')
elif idade < 16:

#para declarar outra estrutura de condição caso ainda haja uma posterior se usa elif condição:
    #com o código indentado se define o que deve ser feito nesta condição

    print('voce não tem idade para votar')
else:

#por fim quando se for utilizar a ultima estrutura se usa else:
    #com o código indentado se define o que deve ser feito na ultima condição

    print('voce deve votar')
