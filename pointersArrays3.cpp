#include<iostream>
#include<stdlib.h>

int nElements,*numbers;
void askData();
void ordering();
void showData();
int main(){
    askData();
    ordering();
    showData();
    delete []numbers;
    return 0;
}

void askData(){
    std::cout<<"cuantos datos quiere?";
    std::cin>>nElements;
    numbers=new int[nElements];
    for (int i = 0; i < nElements; i++)
    {
        std::cout<<"numero "<<i+1<<": ";
        std::cin>>*(numbers+i);
    }
    
}

void ordering(){
    int aux;
    for (int i = 0; i < nElements; i++)
    {
        for (int j = 0; j < nElements-1; j++)
        {
            if(*(numbers+j)>*(numbers+j+1)){
                aux=*(numbers+j);
                *(numbers+j)=*(numbers+j+1);
                *(numbers+j+1)=aux;
            }
        }
        
    }
    
}

void showData(){
    for (int i = 0; i < nElements; i++)
    {
        std::cout<<"Numero "<<i+1<<": "<<*(numbers+i)<<"\n";
    }
    
}