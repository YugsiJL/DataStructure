# Repaso Teórico y Práctico
## Preguntas
### Qué es una lista? 
Estructura de datos que nos permite almacenar y manipular conjuntos de elementos de manera ordenada
### Cuál es su principal característica?
Tiene una secuencia determinada lo que permite acceder a los elementos de forma individual o colectiva.
### Dos operaciones básicas que se pueden realizar con pilas.
Agregar y eliminar, todo con el último elemento de la pila
### Qué es una cola de prioridad y que la diferencia de una tradicional?
En la cla de prioridad los elementos tienen una prioridad asociada y se manejan en función de ella, lo que la hace distinta de la cola tradicional porque la tradicional tiene siempre trabajar con agregar un elemento al final pero eliminar el del inicio.
### Cuál es la complejidad temporal de la operación de búsqueda en una lista?
Dependiendo si están ordenados los elementos o no puede aumentar el tiempo en función de la cantidad de elementos (si no está ordenada) pero se puede ser aún más eficiente independientemente de la cantidad de elementos que haya (si es que está ordenada)
### Cuál es la estructura de datos adecuada para implementar una pila?Por qué?
La misma pila, porque nos da una gestión sencilla y eficiente de los elementos en base al principio LIFO.
### Cémo se puede implementar una cola utilizando una lista en Python?
Pues se define la clase cola, se le agrega el atributo de ser una lista vacía con _init_, se agregan los métodos para agregar al final con append, eliminar del inicio con pop(0), así se podrán agregar n cantidad de elementos a la cola y se podrá eliminar como la definición lo dicta.
## Ejercicios
### 1. Escribe un programa que permita crear una lista de nombres y luego muestre los nombres en orden alfabético.
```python
def Orden_Alfabetico(nombres):
  nombres.sort()
  for nombre in nombres:
    print(nombre)

lista_nombres = []

cantidad_nombres = int(input("ingresar la cantidad de nombres: "))

for i in range (cantidad_nombres):
  nombre = input("Ingrese un nombre: ")
  lista_nombres.append(nombre)

print("En orden alfabético son:")
Orden_Alfabetico(lista_nombres)
```
### 2. Implementa una Pila utilizando una estructura de datos adecuada y realiza las operaciones de apilar y desapilar.
```python
class Pila:
    def __init__(self):
        self.items = []

    def empty(self):
        return len(self.items) == 0
  
    def apilar(self, elemento):
        self.items.append(elemento)

    def desapilar(self):
        if self.empty():
            raise IndexError("La pila está vacía.")
        return self.items.pop()

mi_pila = Pila()
mi_pila.apilar(1)
mi_pila.apilar(2)
mi_pila.apilar(3)

print("Elemento a ser eliminado:", mi_pila.desapilar())
```
### 3. Crea una Cola que permita almacenar números enteros y realiza las operaciones de encolar y desencolar.
```python
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

cola = Cola()
cola.add(1)
cola.add(2)
cola.add(3)

print("Elemento a ser eliminado:", cola.kill())
```
Aqui encolar se llama add y desencolar se llama kill para acortar palabras.
