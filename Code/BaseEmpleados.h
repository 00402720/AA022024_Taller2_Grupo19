#include <string>

using namespace std;

#ifndef BaseEmpleados_H
#define BaseEmpleados_H

//Estructura de datos del empleado
struct Employee
{
    string name;
    float salary;
};

//Listado de Empleados Prueba(5); Entrega debe contener al menos 1000
Employee pedro = Employee{"Pedro Martinez", 510.50};
Employee maria = Employee{"Maria Mejia", 1000.30};
Employee rafael = Employee{"Rafael Nadal", 6065.00};
Employee paola = Employee{"Paola Novoa", 156.50};
Employee andres = Employee{"Andres Machuca", 461.71};

//Arreglo que contiene todos los empleados (Listado de empleados)
Employee employees[1100] = {pedro, maria, rafael, paola, andres};


#endif