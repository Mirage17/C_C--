#include<iostream>

int main(){
    int numeros [2][3]; //Filas,columnas
    int numeros2[2][3]={{1,2,3} ,{4,5,6}};
    for (short i = 0; i < 2; i++)
    {
        for (short j = 0; j < 3; j++)
        {
            std::cout<<numeros2[i][j]<<" ";
        }
        std::cout<<"\n";
        
    }
    
    return 0;
}