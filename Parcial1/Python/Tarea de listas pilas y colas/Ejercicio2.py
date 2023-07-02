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

    def UltimoElemento(self):
        if self.empty():
            raise IndexError("La pila está vacía.")
        return self.items[-1]

    def size(self):
        return len(self.items)

mi_pila = Pila()
mi_pila.add(1)
mi_pila.add(2)
mi_pila.add(3)

print("El ultimo elemento de la pila es:", mi_pila.UltimoElemento())
print("Elemento a ser eliminado:", mi_pila.kill())
print("La pila esta vacia?:", mi_pila.empty())
print("Numero de elementos que quedan en la pila:", mi_pila.size()) 