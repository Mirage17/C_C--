#include<iostream>

int main(){
    int arreglo[5], size,greatest=0;

    for (int i = 0; i < 5; i++)
    {
        std::cout<<"Ingresa el elemento "<<i+1<<": ";
        std::cin>>arreglo[i];

    }
    for (int i = 0; i < 5; i++)
    {
        if(arreglo[i]>greatest){
            greatest=arreglo[i];
        }
    }

    std::cout<<"El numero mayor es: "<<greatest;
    
    

    return 0;
}