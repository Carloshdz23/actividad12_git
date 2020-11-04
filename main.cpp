#include <iostream>
#include "arreglo.h"

using namespace std;

int main()
{
    Arreglo<string> arreglo;

    arreglo.insertar_inicio("como");
    arreglo.insertar_inicio("Hola,");
    arreglo.insertar_final("estas?");
    arreglo.insertar_final("Adios");
    
    for (size_t i = 0; i < arreglo.size(); i++)
    {
        cout << arreglo[i] << " ";
    }

    cout << endl;

    arreglo.mostrar();

    arreglo.insertar("tu", 2);

    for (size_t i = 0; i < arreglo.size(); i++)
    {
        cout << arreglo[i] << " ";
    }

    cout << endl;

    arreglo.mostrar();

    arreglo.eliminar_inicio();
    arreglo.eliminar_final();

    for (size_t i = 0; i < arreglo.size(); i++)
    {
        cout << arreglo[i] << " ";
    }

    cout << endl;

    arreglo.eliminar(1);

    for (size_t i = 0; i < arreglo.size(); i++)
    {
        cout << arreglo[i] << " ";
    }

    cout << endl;

    arreglo.mostrar();

    return 0;
}