#include <iostream>
#include <string>
#include "BaseEmpleados.h"

using namespace std;


int main(){

    //Prueba de busqueda simple de empleado en el otro archivo (base de datos)
    //Es principlamente para verificar la conexion entre archivos y verificar la llamada de informacion
    int id = 0;
    cin >> id;

    cout << employees[id].salary << "\n";
    return 0;
}