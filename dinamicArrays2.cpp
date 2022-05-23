#include<iostream>

int greatestOfAll(int *number,int nElements);
int main(){
    int nElements=5;
    int number[]={1,2,3,4,5};
    int max=greatestOfAll(number,nElements);
    std::cout<<max<<"\n";


    return 0;
}

int greatestOfAll(int *number, int nElements){
    int max=0;
    for (int i = 0; i < nElements; i++)
    {
        if(*number>max){
            max=*number;
        }
        number++;
    }

    return max;
    
}