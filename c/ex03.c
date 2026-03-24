
sal1 = 2000
sal2 = 3000
sal3 = 2500

print(sal1 * 1.1)
print(sal2 * 1.1)
print(sal3 * 1.1)

def calcular_salario(salario):
    return salario * 1.1
def imprimir_salario(nome, salario):
    print(f"{nome}: {salario}")

imprimir_salario("A", calcular_salario(2000))
imprimir_salario("B", calcular_salario(3000))
imprimir_salario("C", calcular_salario(2500))
