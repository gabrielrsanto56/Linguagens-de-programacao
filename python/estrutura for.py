numero = int(input('digite um numero e veja a sua tabuada: '))
#a estrutura for serve para que se execute uma tarefa repetidas vezes usando apenas um comando
for i in range(1, 11):
# o i no for vai começar com o valor 1 e terminar com o valor 10, que é o numero anterior ao ultimo, percorrendo todos os numeros entre 1 e 10 indo de 1 em 1
    print(f'{numero} x {i} = {numero*i}')