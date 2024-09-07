nome = input('digite uma palavra ou frase')

nome_maiusculo = nome.upper() #deixa todas as letras maiusculas
nome_minusculo = nome.lower() #deixa todas as letras minusculas
nome_sem_espacos = nome.strip() #remove espaços em branco no inicio e final da string
nome_dividido = nome.split(' ') #divide a string em listas com base no delimitador (' ')

lista = ['maçã', 'banana', 'mamão', 'melancia']

adiciona_item = lista.append('uva') #adiciona o item uva ao final da lista
inserit_item = lista.insert(2, 'abacate') #adiciona abacate na posição 2
remove_item = lista.remove('maçã') #remove a primeira ocorrencia onde aparecer o nome maçã
ordena_item = lista.sort() #ordena a lista em ordem alfabética
