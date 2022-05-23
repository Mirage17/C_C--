#include<iostream>
struct Dir
{
    char country[32];
    char state[32];
    char city[32];
    int street;
};

struct Emp
{
    char name[64];
    char id[5];

    struct Dir dirEmp;
}
e1={"eugenio","0001","mexico","EdoMex","xxxxxx",10},
e2={"pedro","0002","mexico","EdoMex","yyyyy",20};

struct client
{
    char name[64];
    char phone[12];
    struct Dir dirClient;
}c1,c2;


int main(){
    std::cout<<"EMPLEADO1:\nNombre: "<<e1.name<<"\nID: "<<e1.id<<"\nPais: "
    <<e1.dirEmp.country<<"\nciudad: "<<e1.dirEmp.state;

    return 0;
}