#include<iostream>

int main(){

    int numero,*dirNum;

    std::cout<<"ingresa un numero par: ";
    std::cin>>numero;

    dirNum=&numero;

    if(*dirNum%2==0){
        std::cout<<"correcto, es par";
    }else{
        std::cout<<"error, no es par";
    }

    return 0;
}