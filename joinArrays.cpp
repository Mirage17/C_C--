#include <iostream>

int main(){
    int array1[5];
    int array2[5];
    int array3[10];

    for (int i = 0; i < 5; i++)
    {
        std::cout<<"Ingrese el elemento "<<i+1<<" del arreglo 1: ";
        std::cin>>array1[i];
    }

    for (int i = 0; i < 5; i++)
    {
        std::cout<<"Ingrese el elemento "<<i+1<<" del arreglo 2: ";
        std::cin>>array2[i];
    }

    for (int i = 0; i < 10; i++)
    {
        if (i<5)
        {
            array3[i]=array1[i];
        }
        if (i>4)
        {
            array3[i]=array2[i-5];
        }

    }

    for (int i = 0; i < 10; i++)
    {
        std::cout<<"Elemento "<<i+1<<" = "<<array3[i]<<"\n ";
    }
    
    

    
    
    return 0;
}