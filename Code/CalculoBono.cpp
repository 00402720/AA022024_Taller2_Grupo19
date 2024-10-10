#include <iostream>
#include <string>

using namespace std;

//Estructura de datos del empleado
struct Employee
{
    string name;
    float salary;
};


int main(){

    Employee test = Employee{"Test employee", 1000.51};

    cout << test.salary << "\n";
    return 0;
}