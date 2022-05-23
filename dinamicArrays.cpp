#include<iostream>
#include<stdlib.h>

int *grades,gradesQuantity;

void askData();
void showData();

int main(){

    askData();
    showData();

    std::cout<<"_______________________\n";
    delete[] grades;
    askData();
    showData();

    return 0;
}

void askData(){
    std::cout<<"Cuantas calificaciones necesitas=: ";
    std::cin>>gradesQuantity;
    grades=new int[gradesQuantity];

    for (int i = 0; i < gradesQuantity; i++)
    {
        std::cout<<"calificaciones "<<i+1<<": ";
        std::cin>>grades[i];
    }
    
}

void showData(){
    for (int i = 0; i < gradesQuantity; i++)
    {
        std::cout<<"Calificación "<<i+1<<": "<<grades[i]<<". Direccion memoria: "<<&grades[i]<<"\n";

        
    }
    
}

