#include <iostream>
#include <string>
#include "BaseEmpleados.h"

using namespace std;

//Basado en que el archivo .h tendra 1000 registros by default
//Varia en base a los registros agregados y eliminados de la lista
int extraCount = 1000;

void printEmployees(){
    cout << "   ID   ||      Nombre      ||      Salario      ||\n";
    for (int p = 0; p < extraCount; p++)
    {
        if(employees[p].name != ""){
        cout << "  " << p << "        " << employees[p].name << "         " << employees[p].salary << "\n";
        }
    }
}

//Funcion temporal de prueba
void viewEmployee(int id){
    cout << "Nombre: " << employees[id].name << "\n";
    cout << "Salario: " << employees[id].salary << "\n";
}

//Definicion de funciones
void showDescending(){
    /* ¿Como ordenar el listado para mostrar en orden descendiente? Min heap*/
    printEmployees();//No version de ordenamiento solo muestra de listado
}

void addEmployee(string n, float s){
    /*Agregar empleado a la lista del archivo .h*/
    employees[extraCount].name = n;
    employees[extraCount].salary = s;
    extraCount++;
}

void updateEmployee(int id, string n, float s){
    /*Reingresar la informacion del empleado*/
    employees[id].name = n;
    employees[id].salary = s;    
}

void removeEmployee(int id){
    /*Eliminar al empleado de la lista*/
    for (int i = id+1 ; i < extraCount; i++)
    {
        employees[i - 1] = employees[i];
    }
    extraCount--;
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
            cout << "Nuevo nombre "; cin >> name;
            cout << "Nuevo salario "; cin >> salary;
            updateEmployee(id, name, salary);
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

    return 0;
}