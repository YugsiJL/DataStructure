#include <iostream>

struct MemoriaDinamica {
  size_t tamano=0;
  void* puntero=NULL;
};

void reservarMemoria(MemoriaDinamica& memoria, size_t tamano) {
  memoria.tamano = tamano;
  memoria.puntero = new char[tamano];
}

void escribirMemoria(MemoriaDinamica& memoria, size_t posicion, char valor) {
  char* puntero = static_cast<char*>(memoria.puntero);
  puntero[posicion] = valor;
}

char leerMemoria(const MemoriaDinamica& memoria, size_t posicion) {
  const char* puntero = static_cast<const char*>(memoria.puntero);
  return puntero[posicion];
}

void liberarMemoria(MemoriaDinamica& memoria) {
  delete[] static_cast<char*>(memoria.puntero);
  memoria.tamano = 0;
  memoria.puntero = nullptr;
}

int main() {
  MemoriaDinamica memoria;
  size_t tamano_memoria = 100;
  
  reservarMemoria(memoria, tamano_memoria);

  // Escribir algunos valores en la memoria
  escribirMemoria(memoria, 0, 'H');
  escribirMemoria(memoria, 1, 'o');
  escribirMemoria(memoria, 2, 'l');
  escribirMemoria(memoria, 3, 'a');
  escribirMemoria(memoria, 4, '!');

  // Leer y mostrar los valores de la memoria
  std::cout << "Valores de la memoria: ";
  for (size_t i = 0; i < 5; i++) {
    std::cout << leerMemoria(memoria, i);
  }
  std::cout << std::endl;

  // Liberar la memoria
  liberarMemoria(memoria);
  
  return 0;
}