#include<iostream>
#include<stdlib.h>

int **mtx,rows,collumns;

void askData();

void showData();
int main(){
    askData();
    showData();
    delete *mtx;
    return 0;
}

void askData(){
    std::cout<<"How many rows is gonna have the matrix?: ";
    std::cin>>rows;
    std::cout<<"And how many collumns?: ";
    std::cin>>collumns;

    mtx=new int *[rows];
    for (short i = 0; i < rows; i++)
    {
        mtx[i]=new int[collumns];
    }

    for (short i = 0; i < rows; i++)
    {
        for (short j = 0; j < collumns; j++)
        {
            std::cout<<"mtx["<<i+1<<"]["<<j+1<<"]: ";
            std::cin>>mtx[i][j];
        }
        
    }
    
    

}

void showData(){
    for (short i = 0; i < rows; i++)
    {
        for (short j = 0; j < collumns; j++)
        {
            std::cout<<mtx[i][j]<<" ";
        }
        std::cout<<"\n";
        
    }
    
}