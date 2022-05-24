#include<iostream>
#include<stdlib.h>


struct Nodo
{
    int data;
    Nodo *next;
};

void push(Nodo *&stack, int data);

int main(){
    Nodo *pila=NULL;

    push(pila,5);
    push(pila,6);


    return 0;
}

void push(Nodo *&stack, int data){
    Nodo *newNode= new Nodo();
    newNode->data=data;
    newNode->next=stack;
    stack=newNode;
    std::cout<<"El dato es :"<<data<<"\n";
}