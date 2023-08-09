# Consulta: Técnicas de Análisis de Algoritmos.
## 1. Concepto: Eficiencia de los algoritmos
La eficiencia de los algoritmos se refiere a la medida de recursos utilizados, como tiempo y memoria, por un algoritmo para resolver un problema. Es importante analizar la eficiencia para determinar qué tan rápido y bien puede resolver un algoritmo un problema, especialmente cuando se trata de conjuntos de datos grandes.
## Ejemplo: Comparación de algoritmos de búsqueda lineal y binaria
Supongamos que tenemos una lista ordenada de números del 1 al 1000 y queremos encontrar el número 750. Para ello, podemos utilizar dos enfoques diferentes: la búsqueda lineal y la búsqueda binaria.
### Código
```python
# Búsqueda Lineal
def busqueda_lineal(lista, objetivo):
    for i, num in enumerate(lista):
        if num == objetivo:
            return i
    return -1

# Búsqueda Binaria
def busqueda_binaria(lista, objetivo):
    izquierda, derecha = 0, len(lista) - 1
    while izquierda <= derecha:
        medio = (izquierda + derecha) // 2
        if lista[medio] == objetivo:
            return medio
        elif lista[medio] < objetivo:
            izquierda = medio + 1
        else:
            derecha = medio - 1
    return -1

lista_ordenada = list(range(1, 1001))
objetivo = 750
indice_lineal = busqueda_lineal(lista_ordenada, objetivo)
indice_binaria = busqueda_binaria(lista_ordenada, objetivo)

print("Búsqueda Lineal:")
print(f"El número {objetivo} se encuentra en el índice {indice_lineal}")

print("Búsqueda Binaria:")
print(f"El número {objetivo} se encuentra en el índice {indice_binaria}")
```
## Ejercicio: Analizar e identificar el algoritmo más eficiente para buscar un elemento en una lista ordenada
Para este ejercicio, tenemos una lista ordenada de 10000 números del 1 al 10000 y queremos encontrar el número 5678.

Analizando los dos enfoques:

* Búsqueda Lineal: En el peor caso, tendríamos que hacer 10000 comparaciones para encontrar el número.
* Búsqueda Binaria: Como aplicamos "divide y vencerás", en el peor caso, tendríamos que hacer log2(10000) ≈ 13 comparaciones para encontrar el número.
### Respuesta: 
El algoritmo más eficiente para buscar un elemento en una lista ordenada es la búsqueda binaria, ya que reduce significativamente el número de comparaciones en comparación con la búsqueda lineal.

## 2. Concepto: Tiempo de ejecución de un algoritmo
El tiempo de ejecución de un algoritmo se refiere al tiempo que lleva ejecutar dicho algoritmo en función del tamaño de entrada. Es una medida importante de la eficiencia de un algoritmo y nos permite comparar cómo diferentes algoritmos se desempeñan en situaciones diversas.
## Ejemplo: Calcular el tiempo de ejecución de un algoritmo de ordenamiento por inserción para una lista de tamaño n
Supongamos que queremos calcular el tiempo de ejecución de un algoritmo de ordenamiento por inserción en una lista de tamaño n. El algoritmo de ordenamiento por inserción recorre la lista y compara cada elemento con los elementos anteriores para insertarlo en su posición correcta.
### Código
```python
import time

def insertion_sort(lista):
    for i in range(1, len(lista)):
        key = lista[i]
        j = i - 1
        while j >= 0 and key < lista[j]:
            lista[j + 1] = lista[j]
            j -= 1
        lista[j + 1] = key

# Crear una lista desordenada de tamaño n
n = 1000
lista_desordenada = list(range(n, 0, -1))

start_time = time.time()
insertion_sort(lista_desordenada)
end_time = time.time()

time_taken = end_time - start_time
print(f"Tiempo de ejecución del ordenamiento por inserción para {n} elementos: {time_taken:.6f} segundos")
```
## Ejercicio: Determinar el tiempo de ejecución de un algoritmo de búsqueda en profundidad para un grafo con n nodos y m aristas
El tiempo de ejecución del algoritmo DFS en un grafo puede variar según la estructura del grafo y la implementación específica del algoritmo.
Para medir el tiempo de ejecución, podemos utilizar la biblioteca time de Python de manera similar al ejemplo anterior. Sin embargo, dado que la implementación de un algoritmo DFS puede ser más compleja, no es posible dar un código completo para este ejercicio. Se debe tener en cuenta la estructura del grafo y la implementación del DFS que se está utilizando.
## 3. Concepto: Notación asintótica

La notación asintótica es una forma de describir el comportamiento del tiempo de ejecución o el consumo de recursos de un algoritmo a medida que el tamaño de entrada crece hacia el infinito. Se utiliza para proporcionar una idea general de cómo un algoritmo se escala en términos de eficiencia en relación con el tamaño de los datos.

## Ejemplo: Explicación de la notación O(grande), Ω(omega) y Θ(theta) usando un algoritmo de búsqueda binaria como ejemplo

* La notación O(grande) (O) representa el límite superior de la complejidad de un algoritmo. En el caso de un algoritmo de búsqueda binaria, podríamos decir que su tiempo de ejecución está en O(log n), lo que significa que crece de manera logarítmica con el tamaño de entrada.

* La notación Ω(omega) (Ω) representa el límite inferior de la complejidad de un algoritmo. Para la búsqueda binaria, podríamos decir que su tiempo de ejecución está en Ω(1), lo que indica que crece al menos de manera constante o mejor.

* La notación Θ(theta) (Θ) representa la complejidad promedio o exacta de un algoritmo. Para la búsqueda binaria, podríamos decir que su tiempo de ejecución está en Θ(log n), lo que significa que tanto el límite superior como el límite inferior están acotados por una función logarítmica en función del tamaño de entrada.

## Ejercicio: Encontrar la notación asintótica de diferentes funciones: f(n) = 3n^2 + 2n + 1 y g(n) = 5nlog(n) + 10

* Para la función f(n) = 3n^2 + 2n + 1, su notación asintótica es O(n^2) porque el término dominante es n^2 en el peor caso.
* Para la función g(n) = 5nlog(n) + 10, su notación asintótica es O(n log n) porque el término dominante es n log n en el peor caso.
## 4. Concepto: Aritmética de la notación O

La notación O(grande) (O) se utiliza para describir la cota superior asintótica de la complejidad de un algoritmo en función del tamaño de entrada. Cuando se realiza aritmética con notación O, se deben considerar reglas específicas para determinar la notación resultante.

## Ejemplo: Calcular O(f(n)) para diferentes funciones f(n) y determinar si una función g(n) es O(f(n))

1. Primero, calculamos O(f(n)):
Para f(n) = 2n + 3, O(f(n)) = O(n), ya que el término dominante es n en el peor caso.

1. Luego, verificamos si g(n) es O(f(n)):
Para g(n) = n^2 y f(n) = 2n + 3, podemos ver que g(n) crece más rápido que f(n) a medida que n aumenta. Por lo tanto, g(n) no es O(f(n)).

## Encontrar una función g(n) que sea O(n^2) pero no sea O(nlog(n))

Una función que sea O(n^2) pero no sea O(n log n) podría ser g(n) = n^2. Aunque g(n) es O(n^2) porque su crecimiento está acotado por n^2, no es O(n log n) ya que n^2 crece más rápido que n log n y no cumple con la restricción de ser acotado por esta función logarítmica.

## 5. Concepto: Complejidad algorítmica

La complejidad algorítmica se refiere a la cantidad de recursos (como tiempo y memoria) que un algoritmo necesita para resolver un problema en función del tamaño de entrada. Puede dividirse en complejidad temporal (tiempo) y complejidad espacial (memoria).

## Ejemplo: Comparar la complejidad algorítmica de dos algoritmos de ordenamiento: Burbuja y QuickSort

* Burbuja: El algoritmo de ordenamiento Burbuja tiene una complejidad temporal promedio y peor caso de O(n^2), lo que lo hace ineficiente para conjuntos de datos grandes.
* QuickSort: El algoritmo de ordenamiento QuickSort tiene una complejidad temporal promedio de O(n log n) en el caso promedio y O(n^2) en el peor caso. Su rendimiento suele ser mejor que el Burbuja en la mayoría de los casos.

## Ejercicio: Calcular la complejidad algorítmica de un algoritmo que busca todos los pares de elementos duplicados en una lista de tamaño n

Para este ejercicio, consideramos un algoritmo que busca todos los pares de elementos duplicados en una lista de tamaño n.

Complejidad temporal: En el peor caso, tendríamos que comparar cada elemento con todos los demás elementos, lo que resulta en una complejidad temporal de O(n^2).

Complejidad espacial: Dependiendo de cómo se almacenen los elementos duplicados, la complejidad espacial puede variar. Si almacenamos los pares duplicados en una estructura de datos separada, la complejidad espacial sería O(n) en el peor caso.

La complejidad algorítmica puede variar según la implementación y las optimizaciones utilizadas.
## 6. Concepto: Análisis de la recurrencia

El análisis de la recurrencia es un enfoque utilizado para analizar la complejidad de algoritmos recursivos, donde la relación de recurrencia describe cómo se descompone el problema en subproblemas más pequeños. Resolver una recurrencia implica encontrar una expresión cerrada para la función que describe el tiempo o el espacio en función del tamaño de entrada.

## Ejemplo: Resolver una ecuación de recurrencia lineal utilizando el método de sustitución

Supongamos que tenemos la ecuación de recurrencia: T(n) = 2T(n/2) + 1 con T(1) = 1. Queremos resolver esta ecuación utilizando el método de sustitución.

### Solución:

Asumimos que T(k) = O(k), donde k es una potencia de 2 (n = 2^k).
Sustituimos T(n) con T(n/2) en la ecuación: T(n) = 2 * O(n/2) + 1 = O(n) + 1.
Por lo tanto, la solución aproximada es T(n) = O(n).

## Ejercicio: Encontrar la solución de la recurrencia T(n) = 2T(n/2) + n utilizando el método del árbol de recurrencia

Para resolver esta recurrencia utilizando el método del árbol de recurrencia, debemos descomponer repetidamente el problema en subproblemas más pequeños y sumar las contribuciones de cada nivel del árbol.

### Solución:

En cada nivel del árbol, el costo es n debido a la suma constante n en la recurrencia.
El árbol de recurrencia tendrá log_2(n) niveles.
Sumando todas las contribuciones en cada nivel, obtenemos una complejidad total de n * log_2(n).
Respuesta: La solución de la recurrencia T(n) = 2T(n/2) + n utilizando el método del árbol de recurrencia es T(n) = O(n log n).

# Preguntas
### Por favor seleccionar la respuesta correcta.
## 1. ¿Qué concepto se refiere a la medida de eficiencia de un algoritmo en términos de recursos utilizados, como tiempo y memoria?
- a) Notación asintótica
- b) Eficiencia de los algoritmos
- c) Complejidad algorítmica
- d) Análisis de la recurrencia
### R: b) Eficiencia de los algoritmos
- Justificación: La eficiencia de los algoritmos se refiere a la medida de recursos utilizados, como tiempo y memoria, por un algoritmo para resolver un problema. Es la opción correcta.
## 2. ¿Cuál de las siguientes notaciones se utiliza para describir el peor caso de tiempo de ejecución de un algoritmo en términos de una función ajustada?
- a) Θ(theta)
- b) Ω(omega)
- c) O(grande)
- d) O(little)
### R: c) O(grande)
- Justificación: La notación O(grande) (O) se utiliza para describir el peor caso de tiempo de ejecución de un algoritmo en términos de una función ajustada. Es la opción correcta.
## 3. ¿Cuál es el tiempo de ejecución de un algoritmo que tiene una complejidad O(n^2) en el peor caso y se ejecuta en un procesador que realiza 10^9 operaciones por segundo?
- a) 10 segundos
- b) 1 segundo
- c) 100 segundos
- d) 1000 segundos
### R: c) 100 segundos
- Justificación: Si un algoritmo tiene una complejidad O(n^2) y se ejecuta en un procesador que realiza 10^9 operaciones por segundo, el tiempo de ejecución sería proporcional a n^2. Si n = 10^5 (para simplificar), entonces el tiempo sería (10^5)^2 / 10^9 = 100 segundos.
## 4. Si se tiene una ecuación de recurrencia T(n) = T(n/2) + n, ¿cuál es la complejidad algorítmica de este algoritmo?
- a) O(n)
- b) O(nlog(n))
- c) O(n^2)
- d) O(log(n))
### R: b) O(nlog(n))
- Justificación: La ecuación de recurrencia T(n) = T(n/2) + n representa un algoritmo que divide el problema en mitades y realiza n operaciones en cada nivel. Utilizando el método del árbol de recurrencia, se observa que en cada nivel se suma n. El número total de niveles será log_2(n). Entonces, la complejidad será O(n log n). Esta es la opción correcta.
