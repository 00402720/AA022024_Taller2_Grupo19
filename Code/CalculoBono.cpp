#include <iostream>
#include <string>
#include "BaseEmpleados.h"

using namespace std;

//Definicion de funciones
void showDescending(){
    /* ¿Como ordenar el listado para mostrar en orden descendiente? Min heap*/
}

void addEmployee(string n, float s){
    /*Agregar empleado a la lista deol archivo .h*/
}

void updateEmployee(int id){
    /*Reingresar la informacion del empleado*/
}

void removeEmployee(int id){
    /*Eliminar al empleado de la lista*/
}

int main(){

    int option = 0;

    string name = "";
    float salary = 0.00;

    int id = 0;

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
            cout << "Mostrando los empleados en orden descendiente basado en salario\n";
            cout << "   ID   ||      Nombre      ||      Salario      ||\n";
            showDescending();
            break;
        case 2:
            /* Agregar nuevo empleado */
            cout << "Favor ingresar los datos del nuevo empleado\n";
            cout << "Nombre "; cin >> name;
            cout << "Salario "; cin >> salary;
            addEmployee(name, salary);
            cout << "Nuevo empleado ingresado: " << name <<"\n"; 
            break;
        case 3:
            /* modificar empleado */
            cout << "Ingresar el numero identificador del empleado "; cin >> id;
            updateEmployee(id);
            cout << "Se ha modificado correctamente el empleado\n";
            break;
        case 4:
            /* Emliminar empleado */
            cout << "Ingresar el numero identificador del empleado a eliminar "; cin >> id;
            removeEmployee(id);
            cout << "Se ha eliminado correctamente el usuario\n";
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