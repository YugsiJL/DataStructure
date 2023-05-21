#include <stdio.h>
#include <stdlib.h>

struct MemoriaStatic {
  int size;
  char* StaticMem;
};

void InicioMemoria(struct MemoriaStatic *memoria, int size){
  memoria->size = size;
  memoria->StaticMem = (char*) malloc(size * sizeof(char));
  if (memoria->StaticMem == NULL){
    printf("Error: no se pudo reservar la memoria estática");
    return;
  }
  for(int i = 0; i < size; i++){
    memoria->StaticMem[i] = 0;
  }
}

void Escritura(struct MemoriaStatic *memoria, int posicion, char x){
  if (posicion < 0 || posicion >= memoria -> size){
    printf("Error: la posicion esta fuera de los limites de la memoria estática. \n");
    return;
  }
  memoria->StaticMem[posicion] = x;
}

char Lectura(struct MemoriaStatic *memoria, int posicion) {
  if (posicion < 0 || posicion >= memoria -> size) {
    printf("Error: la posicion esta fuera de los limites de la memoria estática. \n");
    return '\0';
  }
  return memoria->StaticMem[posicion];
}

void LiberarMemoria(struct MemoriaStatic *memoria){
  free(memoria->StaticMem);
  memoria->StaticMem = NULL;
  memoria->size = 0;
}

int main(){
  struct MemoriaStatic memoria;
  int sizeMem = 1024;
  InicioMemoria(&memoria, sizeMem);

  Escritura(&memoria, 0, 'A');
  printf("El valor en la posición 0 es: %c\n", Lectura(&memoria, 0));
  
  Escritura(&memoria, 1, 'B');
  printf("El valor en la posición 1 es: %c\n", Lectura(&memoria, 1));
  
  LiberarMemoria(&memoria);
  return 0;
}