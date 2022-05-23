#include<iostream>
void changeValue(int &val1, int &val2);
int main(){

    int num1=1;
    int num2=2;

    std::cout<<num1<<"\n";
    std::cout<<num2<<"\n";
    changeValue(num1,num2);
    std::cout<<num1<<"\n";
    std::cout<<num2<<"\n";

    
    return 0;
}

void changeValue(int &val1,int &val2)
{
    val1=10;
    val2=20;
}