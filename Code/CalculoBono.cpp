#include <iostream>
#include <string>
#include "BaseEmpleados.h"

using namespace std;


int main(){

    int option = 0;

    do
    {
        //Menu de opciones
        cout << "--------------------------------------------------\n";
        cout << "Seleccione una opcion para continuar:\n";
        cout << "1. Mostrar listado en orden descendiente\n";
        cout << "2. Agregar nuevo empleado\n";
        cout << "3. Modificar empleado existente\n";
        cout << "4. Eliminar empleado\n";
        cout << "0. Terminar\n";
        cin >> option;
        cout << "--------------------------------------------------\n";

        switch (option)
        {
        case 1:
            /* Hacer lo de min heap */
            break;
        case 2:
            /* Agregar nuevo empleado */
            break;
        case 3:
            /* modificar empleado */
            break;
        case 4:
            /* Emliminar empleado */
            break;
        
        default:
            break;
        }
    } while (option != 0);
    
    /*
    Para futura referencia
    int id = 0;
    cin >> id;

    cout << employees[id].salary << "\n";
    */
    return 0;
}