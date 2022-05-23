#include<iostream>

int main(){
    int num;
    std:: cout<<"escribe un numero:";
    std::cin>>num;
    switch (num)
    {
    case 1:
        std::cout<<"Ingresó el numero 1.";
        break;
    case 2:
        std::cout<<"Ingresó el numero 2.";
        break;
    
    default:
    std::cout<<"ingreso otro numero distinto al 1 o 2.";
        break;
    }

    return 0;
}