# Ejercicios con Árboles
## 1. Implementa la función contar_nodos en Python que reciba como parámetro
un árbol binario y devuelva la cantidad total de nodos en el árbol.
```python
class ArbolBinario:
    def __init__(self, valor):
        self.valor = valor
        self.izquierdo = None
        self.derecho = None


def contar_nodos(arbol):
    if arbol is None:
        return 0
    else:
        return 1 + contar_nodos(arbol.izquierdo) + contar_nodos(arbol.derecho)

# Crear un árbol binario
arbol = ArbolBinario(1)
arbol.izquierdo = ArbolBinario(2)
arbol.derecho = ArbolBinario(3)
arbol.izquierdo.izquierdo = ArbolBinario(4)
arbol.izquierdo.derecho = ArbolBinario(5)

# Contar los nodos en el árbol
cantidad_nodos = contar_nodos(arbol)
print("Cantidad de nodos en el árbol:", cantidad_nodos)
```
Este ejemplo crearía el siguiente árbol binario:
```
      1
    /   \
   2     3
  / \
 4   5
```
Y la salida sería:
```
Cantidad de nodos en el árbol: 5
```
## 2. Modifica la función buscar_valor en Python para que reciba un árbol binario
y un valor como parámetros, y devuelva True si el valor se encuentra en el
árbol, y False en caso contrario.
```python
def buscar_valor(arbol, valor):
    if arbol is None:
        return False
    elif arbol.valor == valor:
        return True
    elif valor < arbol.valor:
        return buscar_valor(arbol.izquierdo, valor)
    else:
        return buscar_valor(arbol.derecho, valor)

# Utilizando el mismo árbol binario del ejemplo anterior
valor_buscado = 3
encontrado = buscar_valor(arbol, valor_buscado)
print("El valor", valor_buscado, "se encuentra en el árbol:", encontrado)
```
La salida sería:
```
El valor 3 se encuentra en el árbol: True
```
En este caso, la función buscar_valor devuelve True porque el valor 3 se encuentra en el árbol. Puedes probar con diferentes valores buscados para verificar si se encuentran en el árbol o no.
## 3. Implementa la función eliminar_valor en Python que reciba un árbol binario
y un valor como parámetros, y elimine el nodo con ese valor del árbol.
```python
class ArbolBinario:
    def __init__(self, valor):
        self.valor = valor
        self.izquierdo = None
        self.derecho = None


def encontrar_minimo(arbol):
    while arbol.izquierdo is not None:
        arbol = arbol.izquierdo
    return arbol


def eliminar_valor(arbol, valor):
    if arbol is None:
        return arbol
    if valor < arbol.valor:
        arbol.izquierdo = eliminar_valor(arbol.izquierdo, valor)
    elif valor > arbol.valor:
        arbol.derecho = eliminar_valor(arbol.derecho, valor)
    else:
        if arbol.izquierdo is None:
            return arbol.derecho
        elif arbol.derecho is None:
            return arbol.izquierdo
        else:
            minimo = encontrar_minimo(arbol.derecho)
            arbol.valor = minimo.valor
            arbol.derecho = eliminar_valor(arbol.derecho, minimo.valor)
    return arbol

# Crear un árbol binario
arbol = ArbolBinario(4)
arbol.izquierdo = ArbolBinario(2)
arbol.derecho = ArbolBinario(6)
arbol.izquierdo.izquierdo = ArbolBinario(1)
arbol.izquierdo.derecho = ArbolBinario(3)
arbol.derecho.izquierdo = ArbolBinario(5)
arbol.derecho.derecho = ArbolBinario(7)

# Eliminar un valor del árbol
valor_eliminar = 2
arbol = eliminar_valor(arbol, valor_eliminar)
```
En este ejemplo, se crea un árbol binario con los valores del 1 al 7. Luego, se elimina el valor 2 del árbol utilizando la función eliminar_valor. Después de la eliminación, el árbol se actualizará sin el nodo que tenía el valor 2.
