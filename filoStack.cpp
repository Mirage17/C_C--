#include<iostream>
#include<stdlib.h>


struct Nodo
{
    int data;
    Nodo *next;
};

void push(Nodo *&stack, int data);
void remove(Nodo *&stack,int &data);
int main(){
    Nodo *pila=NULL;

    push(pila,5);
    push(pila,6);
    int num;
    while (pila!=NULL)
    {
        remove(pila,num);
        if(pila!=NULL){
            std::cout<<num<<",";
        }else{
            std::cout<<num<<".";
        }
    }
    


    return 0;
}

void push(Nodo *&stack, int data){
    Nodo *newNode= new Nodo();
    newNode->data=data;
    newNode->next=stack;
    stack=newNode;
    std::cout<<"El dato es :"<<data<<"\n";
}

void remove(Nodo *&stack,int &data){
    Nodo *aux=stack;
    data=aux->data;
    stack=aux->next;
    delete aux;
}