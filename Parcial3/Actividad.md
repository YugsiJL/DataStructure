# Actividad de Análisis algoritmicos
## Parte teórica (40%) 
### 1. ¿Qué se entiende por "análisis de algoritmos" en ciencias de la computación?
* a) La implementación de algoritmos en un lenguaje de programación.
* b) La evaluación subjetiva de la eficiencia de los algoritmos.
* c) El estudio de la eficiencia y rendimiento de los algoritmos.
* d) La búsqueda de nuevos algoritmos para resolver problemas.
R: c)
### 2. ¿Cuál de las siguientes técnicas analiza la relación entre el tamaño del problema y el
tiempo de ejecución de un algoritmo?
* a) Notación asintótica.
* b) Complejidad algorítmica.
* c) Aritmética de la notación O.
* d) Análisis de recurrencia.
R: a)
### 3. ¿Qué representa la notación O grande (O(n)) en el análisis de algoritmos?
* a) El peor caso de tiempo de ejecución.
* b) El mejor caso de tiempo de ejecución.
* c) El caso promedio de tiempo de ejecución.
* d) El caso en que el algoritmo no se ejecuta.
R: a)
### 4. ¿Qué se entiende por "complejidad algorítmica"?
* a) La cantidad de instrucciones en un algoritmo.
* b) La dificultad de implementar un algoritmo en código.
* c) El nivel de complejidad mental necesario para entender un algoritmo.
* d) El crecimiento del tiempo de ejecución de un algoritmo conforme el tamaño del
problema aumenta.
R: d)
### 5. ¿Cuál es el objetivo principal del análisis de la recurrencia en el análisis de
algoritmos?
* a) Determinar la eficiencia de un algoritmo en el mejor caso.
* b) Calcular la cantidad de recursos (CPU, memoria) que un algoritmo consume.
* c) Analizar algoritmos que utilizan recursión para resolver problemas.
* d) Evaluar la velocidad de ejecución de un algoritmo en promedio
R: c)
## Parte Práctica (60%)
### Descripción del Problema

El problema que se desea resolver consiste en encontrar la posición de un número dado en una lista de números enteros. La lista está ordenada de forma ascendente.

Los tres algoritmos que se van a comparar son:

    * Búsqueda lineal: Este algoritmo compara el elemento buscado con cada elemento de la lista, de forma secuencial.
    * Búsqueda binaria: Este algoritmo divide la lista en dos mitades, y luego repite el proceso en la mitad correspondiente hasta encontrar el elemento buscado.
    * Búsqueda de hash: Este algoritmo utiliza una tabla hash para almacenar los elementos de la lista. La búsqueda se realiza mediante una operación de hash, que calcula un índice para el elemento buscado.

### Desarrollo

El código para implementar los tres algoritmos es el siguiente:

