#include <iostream>
#include "arreglo.h"
#include "computadora.h"

using namespace std;

int main()
{
    Arreglo<Computadora> arreglo;

    Computadora n01("Computadora de Carlos", "Windows", "32 GB", "1 TB");
    Computadora n02("Computadora de David", "iOs", "8 GB", "1 TB");
    Computadora n03("Computadora de Lionel", "Linux", "8 GB", "500 GB");
    Computadora n04("Computadora de David", "Windows", "64 GB", "2 TB");
    Computadora n05("Computadora de David", "iOs", "6 GB", "500 GB");

    arreglo << n01 << n02 << n03 << n04 << n05;

    arreglo.mostrar();

    cout << endl;

    Computadora n06("Computadora de David", "iOs", "16 GB", "1 TB");
    Computadora n07("Computadora de Irina", "Linux", "8 GB", "800 GB");

    Computadora *ptr = arreglo.buscar(n06);

    if(ptr != nullptr)
    {
        cout << *ptr << endl << endl;
    }
    else
    {
        cout << "No Existe" << endl;
    }

    cout << *ptr << endl << endl;
    
    Arreglo<Computadora*> ptrs = arreglo.buscar_todos(n06);
    
    if(ptrs.size() > 0)
    {
        for (size_t i = 0; i < ptrs.size(); i++)
        {
            Computadora *p = ptrs[i];
            cout << *p << endl;
        }
    }
    else
    {
        cout << "No Existen Coincidencias" << endl;
    }

    cout << endl;

    for (size_t i = 0; i < ptrs.size(); i++)
    {
        Computadora *p = ptrs[i];
        cout << *p << endl;
    }

    return 0;
}