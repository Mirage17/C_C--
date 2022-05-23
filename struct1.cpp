#include<iostream>

struct Empleados
{
    char name[64];
    char dir[64];
    char phone[11];
}
e1={"Juan","Argentina","1032181452"},
e2={"Maria","mexico","1234567890"},
e3={"Pepe","chile","0987654321"};

struct Cliente
{
    char name[64];
    char dir[64];
}c1,c2;



int main(){
    std::cout<<"Empleado\n";
    std::cout<<"Nombre: "<<e1.name<<"\n";
    std::cout<<"Pais: "<<e1.dir<<"\n";
    std::cout<<"Telefono: "<<e1.phone<<"\n\n";

    std::cout<<"Empleado\n";
    std::cout<<"Nombre: "<<e2.name<<"\n";
    std::cout<<"Pais: "<<e2.dir<<"\n";
    std::cout<<"Telefono: "<<e2.phone<<"\n\n";

    std::cout<<"Empleado\n";
    std::cout<<"Nombre: "<<e3.name<<"\n";
    std::cout<<"Pais: "<<e3.dir<<"\n";
    std::cout<<"Telefono: "<<e3.phone<<"\n\n";


    std::cout<<"CLIENTES\n";

    std::cout<<"Nombre de c1: ";
    std::cin>>c1.name;
    std::cout<<"Direccion c1: ";
    std::cin>>c1.dir;

    std::cout<<"Nombre de c2: ";
    std::cin>>c2.name;
    std::cout<<"Direccion c2: ";
    std::cin>>c2.dir;

    std::cout<<"CLIENTES:\n";
    std::cout<<"Nombre: "<<c1.name<<"\n";
    std::cout<<"Pais: "<<c1.dir<<"\n";

    std::cout<<"Cliente:\n";
    std::cout<<"Nombre: "<<c2.name<<"\n";
    std::cout<<"Pais: "<<c2.dir<<"\n";

    
    return 0;
}