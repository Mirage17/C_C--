#include<iostream>

template <typename T>

void showNumber(T number){
    std::cout<<number<<"\n";
}

int main(){
    int num=10;
    float num2=5.54;
    double num3=54.25418;
    showNumber(num);
    showNumber(num2);
    showNumber(num3);
}


