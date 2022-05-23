#include <iostream>

int main(){
    int numeros[]={1,2,3,4,5},sum=0;
    for (int i = 0; i < 5; i++)
    {
        sum=sum+numeros[i];
    }
    std::cout<<"La suma es: "<<sum;
    
    system("pause");
    return 0;
}