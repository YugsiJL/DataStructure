def orden(lista):
    for i in range(len(lista) - 1):
        if lista[i] > lista[i + 1]:
            return False
    return True
mi_lista = [1, 2, 3, 4, 5]
Verificacion = orden(mi_lista)
if Verificacion:
    print("La lista está ordenada de forma ascendente.")
else:
    print("La lista no está ordenada de forma ascendente.")