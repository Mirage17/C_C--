#include<iostream>
#include<stdlib.h>


struct Nodo
{
    int data;
    Nodo *next;
};

void push(Nodo *&stack, int data);
void remove(Nodo *&stack,int &data);
void show(Nodo *&stack);
int main(){
    Nodo *pila=NULL;

    push(pila,5);
    push(pila,6);
    push(pila,7);
    show(pila);
    int num;
    while (pila!=NULL)
    {
        remove(pila,num);
       
    }
    show(pila);
    


    return 0;
}

void push(Nodo *&stack, int data){
    Nodo *newNode= new Nodo();
    newNode->data=data;
    newNode->next=stack;
    stack=newNode;
    std::cout<<"El dato es :"<<data<<"\n";
}
void show(Nodo *&stack){
    while (stack!=NULL)
    {
        std::cout<<stack->data<<"\n";
        stack=stack->next;
    }
    
    
}
void remove(Nodo *&stack,int &data){
    Nodo *aux=stack;
    data=aux->data;
    stack=aux->next;
    delete aux;
}