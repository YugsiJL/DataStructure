# ¿Cuál es la idea principal detrás del algoritmo de ordenación de selección?
## a) Dividir la lista en subgrupos y ordenarlos individualmente.
## b) Comparar cada elemento con su vecino y hacer intercambios si es necesario.
## c) Encontrar el elemento más grande y colocarlo al final de la lista.
## d) Utilizar una función hash para organizar los elementos.
### Respuesta:
c) Encontrar el elemento más grande y colocarlo al final de la lista.
### Explicación:
El algoritmo de selección funciona seleccionando repetidamente el elemento más grande (o más pequeño, dependiendo del orden deseado) de la lista no ordenada y colocándolo al final de la lista ordenada. Esto se hace iterativamente hasta que todos los elementos estén en la lista ordenada. En cada iteración, se busca el elemento más grande en la porción no ordenada de la lista y se intercambia con el último elemento de la porción no ordenada.
### Código de explicación:
```python
