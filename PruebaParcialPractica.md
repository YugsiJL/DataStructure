### ¿Cuál es la complejidad temporal de la operación de búsqueda en una lista?
Dependiendo de la cantidad de elementos que contenga la lista y de si está ordenada o no, porque el tiempo aumenta linealmente en función del número de elementos como se muestra a continuación:
```python
import timeit

def search(list, target):
  for item in list:
    if item == target:
      return True
  return False

list = list(range(1,100000))

target = 9999

time = timeit.timeit(lambda: search(list, target), number = 1)

print("La búsqueda tomó", time, "segundos en ser realizada")
```
En el anterior ejemplo se puede ver como en esta lista ordenada el tiempo varía dependiendo del elemento buscado y la cantidad de elementos dentro de la lista.
### ¿Cuál es la estructura de datos adecuada para implementar una pila? ¿Por qué?
Una lista, porque es una forma "general" de almacenar conjuntos de datos prestos a ser manipulados de una forma determinada, haciendo posible que la forma en la que agreguemos y eliminemos elementos de la lista sea del modo en el que una pila lo hace.
Ejemplo:
```python
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
```
En el ejemplo se muestra la creación de una clase Pila en la que se define por dentro primeramente una lista vacía a la que se le agregarán elementos al final con la función **append()** y se eliminaran del final con la función **pop()** si es que no está vacía, lo demás son métodos voluntariamente añadidos para mostrar el elemento que será eliminado y la cantidad de elementos que quedan después de dicha eliminación.
### ¿Cómo se puede implementar una cola utilizando una lista en Python?
Pues se crea la clase Cola, se define una lista con el atributo de ser vacía con **_init_**, se agregan los métodos para agregar al final con **append()**, eliminar del inicio con **pop(0)**, así se podrán agregar n cantidad de elementos a la cola y se podrá eliminar de la forma en que una cola maneja los datos.
Ejemplo:
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
```
El resto de métodos agregados voluntariamente son para demostrar que efectivamente es una cola al señalar que el elemento a ser eliminado sera el primero que fue añadido junto con la cantidad de elementos restantes despues de ser removido.
