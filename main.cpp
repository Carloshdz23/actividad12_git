#include <iostream>
#include "arreglo.h"

using namespace std;

void modificar(int *a)
{
    *a = *a + 1;
}

int main()
{
    ArregloDinamico arreglo;
    arreglo.insertar_final("de");
    arreglo.insertar_final("los");
    arreglo.insertar_final("ojos");
    arreglo.insertar_final("tristes");
    arreglo.insertar_final("Vive");
    arreglo.insertar_final("solo");
    arreglo.insertar_final("y");
    arreglo.insertar_final("necesita amor");
    arreglo.insertar_inicio("muchacho");
    arreglo.insertar_inicio("El");

    for (size_t i = 0; i < arreglo.size(); i++)
    {
        cout << arreglo[i] << " ";
    }

    return 0;
}