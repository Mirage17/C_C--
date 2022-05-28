#include<iostream>
#include<stdlib.h>
struct Node
{
    int Data;
    Node *next;
};

void newNode(Node *&stack,int data);
void showNode(Node *&stack);
void deleteNode(Node *&stack, int data);


int main(){
    Node *stack =NULL;
    int data;
    char resp;

    do
    {
        std::cout<<"Ingresa un numero: ";
        std::cin>>data;
        newNode(stack,data);
        std::cout<<"Desea agregar más datos?(s/n): ";
        std::cin>>resp;
    } while (resp=='s' || resp=='S');
    showNode(stack);

    return 0;
}

void newNode(Node *&stack,int data){
    Node *newNodde= new Node;
    newNodde->Data=data;
    newNodde->next=stack;
    stack=newNodde;
}

void showNode(Node *&stack){
    while (stack!=NULL)
    {
        std::cout<<stack->Data<<"\n";
        stack=stack->next;

    }
    
}





