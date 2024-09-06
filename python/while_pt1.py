numero = int(input('digite um numero e veja se é par ou impar: '))
#a estrutura while é parecida com o for, com a diferença que o for repete um numero fixo de vezes enquanto o while pode repetir em uma quantidade indefinida de vezes

while numero != 0:
    if numero % 2 == 0:
        print(f'o numero {numero} é par')
    else:
        print(f'o numero {numero} é impar') 
    numero = int(input('digite um numero e veja se é par ou impar ou 0 para encerrar o programa: '))
print('fim do programa')