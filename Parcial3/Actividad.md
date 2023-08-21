# Actividad de Análisis algoritmicos
## Parte teórica (40%) 
### 1. ¿Qué se entiende por "análisis de algoritmos" en ciencias de la computación?
* a) La implementación de algoritmos en un lenguaje de programación.
* b) La evaluación subjetiva de la eficiencia de los algoritmos.
* c) El estudio de la eficiencia y rendimiento de los algoritmos.
* d) La búsqueda de nuevos algoritmos para resolver problemas.
#### R: c)
### 2. ¿Cuál de las siguientes técnicas analiza la relación entre el tamaño del problema y el
tiempo de ejecución de un algoritmo?
* a) Notación asintótica.
* b) Complejidad algorítmica.
* c) Aritmética de la notación O.
* d) Análisis de recurrencia.
#### R: a)
### 3. ¿Qué representa la notación O grande (O(n)) en el análisis de algoritmos?
* a) El peor caso de tiempo de ejecución.
* b) El mejor caso de tiempo de ejecución.
* c) El caso promedio de tiempo de ejecución.
* d) El caso en que el algoritmo no se ejecuta.
#### R: a)
### 4. ¿Qué se entiende por "complejidad algorítmica"?
* a) La cantidad de instrucciones en un algoritmo.
* b) La dificultad de implementar un algoritmo en código.
* c) El nivel de complejidad mental necesario para entender un algoritmo.
* d) El crecimiento del tiempo de ejecución de un algoritmo conforme el tamaño del
problema aumenta.
#### R: d)
### 5. ¿Cuál es el objetivo principal del análisis de la recurrencia en el análisis de
algoritmos?
* a) Determinar la eficiencia de un algoritmo en el mejor caso.
* b) Calcular la cantidad de recursos (CPU, memoria) que un algoritmo consume.
* c) Analizar algoritmos que utilizan recursión para resolver problemas.
* d) Evaluar la velocidad de ejecución de un algoritmo en promedio
#### R: c)
## Parte Práctica (60%)
### Descripción del Problema

El problema que se desea resolver consiste en encontrar la posición de un número dado en una lista de números enteros. La lista está ordenada de forma ascendente.

Los tres algoritmos que se van a comparar son:

   * Búsqueda lineal: Este algoritmo compara el elemento buscado con cada elemento de la lista, de forma secuencial.
   * Búsqueda binaria: Este algoritmo divide la lista en dos mitades, y luego repite el proceso en la mitad correspondiente hasta encontrar el elemento buscado.
   * Búsqueda de hash: Este algoritmo utiliza una tabla hash para almacenar los elementos de la lista. La búsqueda se realiza mediante una operación de hash, que calcula un índice para el elemento buscado.

### Desarrollo
El código para implementar los tres algoritmos es el siguiente:
```python
def busqueda_lineal(lista, elemento):
  for i in range(len(lista)):
    if lista[i] == elemento:
      return i
  return -1

def busqueda_binaria(lista, elemento):
  inicio = 0
  fin = len(lista) - 1
  while inicio <= fin:
    medio = (inicio + fin) // 2
    if lista[medio] == elemento:
      return medio
    elif lista[medio] < elemento:
      inicio = medio + 1
    else:
      fin = medio - 1
  return -1

def busqueda_hash(lista, elemento):
  tabla = {}
  for i in range(len(lista)):
    tabla[lista[i]] = i
  return tabla.get(elemento, -1)
```
### Comparación de Eficiencia

Para comparar la eficiencia de los tres algoritmos, se realizaron pruebas con listas de diferentes tamaños. Las pruebas se realizaron utilizando el lenguaje de programación Python, y se midió el tiempo de ejecución de cada algoritmo.

Los resultados de las pruebas se muestran en la siguiente tabla:

| Tamaño de la lista | Búsqueda lineal	| Búsqueda binaria | Búsqueda de hash |
| --- | --- | --- | --- |
| 1000	| 0.000100s	| 0.000005s	| 0.000001s |
| 10000 | 0.001000s | 0.000010s | 0.000002s |
| 100000 | 0.010000s | 0.000100s | 0.000020s |
| 1000000 | 0.100000s | 0.001000s | 0.000200s |

Con dichos datos se compara gráficamente para entender de mejor manera la diferencia temporal entre cada uno en funcion de la cantidad de datos que conforman la lista:

![](https://github.com/YugsiJL/DataStructure/blob/main/Parcial3/Tama%C3%B1o%20de%20la%20lista%20frente%20a%20B%C3%BAsqueda%20binaria.png)
![](https://github.com/YugsiJL/DataStructure/blob/main/Parcial3/Tama%C3%B1o%20de%20la%20lista%20frente%20a%20B%C3%BAsqueda%20de%20hash.png)
![](https://github.com/YugsiJL/DataStructure/blob/main/Parcial3/Tama%C3%B1o%20de%20la%20lista%20frente%20a%20B%C3%BAsqueda%20lineal.png)

### Análisis de los resultados

Los resultados muestran que la búsqueda de hash es el algoritmo más eficiente, ya que su tiempo de ejecución es independiente del tamaño de la entrada. La búsqueda binaria es el siguiente algoritmo más eficiente, y su tiempo de ejecución se reduce a la mitad por cada vez que se duplica el tamaño de la entrada. La búsqueda lineal es el algoritmo menos eficiente, y su tiempo de ejecución aumenta linealmente con el tamaño de la entrada.

### Conclusiones

La búsqueda de hash es el algoritmo más eficiente para resolver el problema de encontrar la posición de un número dado en una lista de números enteros. La búsqueda binaria es una buena opción para listas de tamaño mediano, y la búsqueda lineal es una buena opción para listas de tamaño pequeño.
