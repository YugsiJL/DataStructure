# 2. ¿Cuál es la idea principal detrás del algoritmo de ordenación de selección?
### a) Dividir la lista en subgrupos y ordenarlos individualmente.
### b) Comparar cada elemento con su vecino y hacer intercambios si es necesario.
### c) Encontrar el elemento más grande y colocarlo al final de la lista.
### d) Utilizar una función hash para organizar los elementos.
## Respuesta:
c) Encontrar el elemento más grande y colocarlo al final de la lista.
## Explicación:
El algoritmo de selección funciona seleccionando repetidamente el elemento más grande (o más pequeño, dependiendo del orden deseado) de la lista no ordenada y colocándolo al final de la lista ordenada. Esto se hace iterativamente hasta que todos los elementos estén en la lista ordenada. En cada iteración, se busca el elemento más grande en la porción no ordenada de la lista y se intercambia con el último elemento de la porción no ordenada.
## Código de respuesta:
```python
def selection_sort(arr):
    n = len(arr)
    
    for i in range(n):

        min_idx = i
        for j in range(i+1, n):
            if arr[j] < arr[min_idx]:
                min_idx = j

        arr[i], arr[min_idx] = arr[min_idx], arr[i]
    
    return arr

lista = [64, 25, 12, 22, 11]
resultado = selection_sort(lista)
print(resultado)
```
La salida del código sería:
```
Lista ordenada:
[11, 12, 22, 25, 64]
```
# 3. ¿Cuál es la complejidad temporal del algoritmo de ordenación de selección en el
peor de los casos?
### a) O(n)
### b) O(n^2)
### c) O(log n)
### d) O(1)
## Respuesta:
 b) O(n^2).
## Explicación:
En el algoritmo de selección, en cada iteración del bucle externo se busca el elemento más grande (o más pequeño) en la porción no ordenada de la lista, lo cual requiere recorrer la porción no ordenada y comparar cada elemento con el elemento máximo actual. Esto implica realizar aproximadamente n comparaciones en la primera iteración, n-1 comparaciones en la segunda iteración, n-2 comparaciones en la tercera iteración, y así sucesivamente. Por lo tanto, el número total de comparaciones realizadas es aproximadamente la suma de los primeros n números, que es del orden de n*(n+1)/2.

En el peor de los casos, donde la lista está completamente desordenada, el algoritmo de selección realizará esta cantidad de comparaciones, lo que resulta en una complejidad temporal de O(n^2). Esto significa que el tiempo de ejecución del algoritmo crece cuadráticamente con el tamaño de la lista a ordenar.
## Código de respuesta:
```python
def selection_sort(arr):
    n = len(arr)
    comparisons = 0
    
    for i in range(n):
        min_idx = i
        for j in range(i+1, n):
            comparisons += 1
            if arr[j] < arr[min_idx]:
                min_idx = j
        
        arr[i], arr[min_idx] = arr[min_idx], arr[i]
    
    return arr, comparisons

lista = [64, 25, 12, 22, 11]
resultado, num_comparaciones = selection_sort(lista)
print("Lista ordenada:", resultado)
print("Número de comparaciones realizadas:", num_comparaciones)
```
La salida sería:
```
Lista ordenada: [11, 12, 22, 25, 64]
Número de comparaciones realizadas: 10
```
En este caso, se realizaron 10 comparaciones para ordenar la lista de longitud 5. En general, en el peor de los casos, el número de comparaciones será aproximadamente n*(n-1)/2, lo cual es del orden de n^2.
# 4. ¿Cuál es el principal inconveniente del algoritmo de ordenación de selección?
### a) Requiere una lista previamente ordenada.
### b) No es estable, es decir, no preserva el orden relativo de los elementos iguales.
### c) Solo funciona para listas de números enteros.
### d) No es eficiente para listas grandes.
## Respuesta:
d) No es eficiente para listas grandes.
## Explicación:
El algoritmo de selección tiene una complejidad temporal de O(n^2) en el peor de los casos, por ende su tiempo de ejecución aumenta cuadráticamente con el tamaño de la lista a ordenar, es adecuado para listas pequeñas o en casos donde el rendimiento no es una preocupación. Sin embargo, cuando se trabaja con listas grandes, el algoritmo de selección puede ser significativamente más lento en comparación con otros algoritmos más eficientes como ordenamiento rápido (quick sort) u ordenamiento de mezcla (merge sort) que tienen una complejidad temporal promedio de O(n log n).
## Código de respuesta:
```python
import random
import time

def selection_sort(arr):
    n = len(arr)
    
    for i in range(n):
        min_idx = i
        for j in range(i+1, n):
            if arr[j] < arr[min_idx]:
                min_idx = j
        
        arr[i], arr[min_idx] = arr[min_idx], arr[i]
    
    return arr

# Generar una lista aleatoria de números
lista = random.sample(range(1000000), 10000)

# Medir el tiempo de ejecución
inicio = time.time()
resultado = selection_sort(lista)
fin = time.time()

tiempo_ejecucion = fin - inicio

print("Lista ordenada:")
print(resultado[:10], "...", resultado[-10:])
print("Tiempo de ejecución:", tiempo_ejecucion, "segundos")
```
Dependiendo de la velocidad del sistema y del tamaño de la lista que se le agregue el tiempo de ejecución dará como resultado le ineficiencia de este algoritmo para listas de un tamaño abismal.
# 5. ¿Cuál es el resultado de aplicar el algoritmo de ordenación de selección a la
siguiente lista de números: [9, 2, 5, 1, 7]?
### a) [1, 2, 5, 7, 9]
### b) [9, 7, 5, 2, 1]
### c) [5, 2, 1, 7, 9]
### d) [2, 5, 1, 7, 9]
## Respuesta:
a) [1, 2, 5, 7, 9]
## Explicación:
El algoritmo de selección busca repetidamente el elemento más pequeño en la porción no ordenada de la lista y lo coloca al principio de la porción ordenada. Siguiendo este proceso, la lista se ordena de forma ascendente. En cada iteración del algoritmo de selección, se busca el elemento más pequeño y se intercambia con el primer elemento de la porción no ordenada.
## Código de respuesta:
```python
def selection_sort(arr):
    n = len(arr)
    
    for i in range(n):
        min_idx = i
        for j in range(i+1, n):
            if arr[j] < arr[min_idx]:
                min_idx = j
        
        arr[i], arr[min_idx] = arr[min_idx], arr[i]
    
    return arr

lista = [9, 2, 5, 1, 7]
resultado = selection_sort(lista)

print("Resultado de la ordenación:")
print(resultado)
```
