def aplicar_desconto(lista):
    for i in range(len(lista)):
        lista[i] -= 10

estoque = [100, 200, 300]
aplicar_desconto(estoque)

print(estoque)
