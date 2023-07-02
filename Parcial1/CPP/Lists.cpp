#include <iostream>
#include <list>

using namespace std;
int main() {
    list<int> myList;

    // Agregar elementos a la lista
    myList.push_back(10);
    myList.push_back(20);
    myList.push_back(30);

    // Recorrer y mostrar los elementos de la lista
    cout << "Elementos de la lista: ";
    for (const auto& element : myList) {
        cout << element << " ";
    }
    cout << endl;

    // Eliminar un elemento de la lista
    myList.pop_back();

    // Acceder a elementos individuales
    cout << "Primer elemento de la lista: " << myList.front() << endl;
    cout << "Último elemento de la lista: " << myList.back() << endl;

    // Verificar si la lista está vacía
    if (myList.empty()) {
        cout << "La lista está vacía" << endl;
    } else {
        cout << "La lista no está vacía" << endl;
    }

    return 0;
}
