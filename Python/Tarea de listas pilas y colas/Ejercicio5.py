class Pila:
    def __init__(self):
        self.items = []

    def empty(self):
        return len(self.items) == 0

    def add(self, elemento):
        self.items.append(elemento)

    def kill(self):
        if self.empty():
            raise IndexError("La pila está vacía.")
        return self.items.pop()
      
def es_simetrica(lista):
    pila = Pila()
    mitad = len(lista) // 2

    for i in range(mitad):
        pila.add(lista[i])

    for i in range(mitad, len(lista)):
        if lista[i] != pila.kill():
            return False

    return True

mi_lista = [1, 2, 3, 3, 2, 1]
if es_simetrica(mi_lista):
    print("La lista es simétrica.")
else:
    print("La lista no es simétrica.")