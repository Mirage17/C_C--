#include<iostream>

int main(){
    char letra;
    std::cout<<"Escriba una letra, se le dira si es vocal o consonante: ";
    std::cin>>letra;

    int d=int(letra);

    switch (d)
    {
    case 65:
    case 97:
    case 69:
    case 101:
    case 73:
    case 105:
    case 79:
    case 111:
    case 85:
    case 117:
        std::cout<<"vocal";
        break;
    
    default:
        std::cout<<"Es consonante";
        break;
    }


    return 0;
}