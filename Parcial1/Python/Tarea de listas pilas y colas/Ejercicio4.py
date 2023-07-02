class Cola:
    def __init__(self):
        self.items = []

    def empty(self):
        return len(self.items) == 0

    def add(self, elemento):
        self.items.append(elemento)

    def kill(self):
        if self.empty():
            raise IndexError("La cola está vacía.")
        return self.items.pop(0)

    def PrimerElemento(self):
        if self.empty():
            raise IndexError("La cola está vacía.")
        return self.items[0]

    def size(self):
        return len(self.items)

queue = Cola()
queue.add(1)
queue.add(2)
queue.add(3)

print("Elprimer elemento es:", queue.PrimerElemento())
print("Elemento a ser eliminado:", queue.kill())
print("La cola esta vacía?:", queue.empty())
print("La cantidad de elementos en la cola son:", queue.size())