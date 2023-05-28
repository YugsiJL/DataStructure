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

def palindromo(palabra):
    pila = Pila()

    for letra in palabra:
        pila.add(letra)

    palabra_invertida = ""
    while not pila.empty():
        palabra_invertida += pila.kill()

    return palabra.lower() == palabra_invertida.lower()


palabra = "reconocer"
if palindromo(palabra):
    print(f"{palabra} es un palíndromo.")
else:
    print(f"{palabra} no es un palíndromo.")