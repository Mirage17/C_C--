#include<iostream>
#include<stdlib.h>

struct Empleados
{
    char name[30];
    int edad;
}e,*punteroEmpleado=&e;
void askData();
void showData();
int main(){
    askData();
    showData();

    return 0;
}

void askData(){
    std::cout<<"Eingresa datos de empleado\n";
    std::cout<<"nombre: ";
    std::cin>>punteroEmpleado->name;
    std::cout<<"edad: ";
    std::cin>>punteroEmpleado->edad;
}

void showData(){
    std::cout<<"\n Datos del empleado\n";
    std::cout<<"Nombre: "<<punteroEmpleado->name<<"\n Edad: "<<punteroEmpleado->edad<<"\n";
}