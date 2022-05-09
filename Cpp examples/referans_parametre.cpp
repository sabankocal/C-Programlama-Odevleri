#include<iostream>

void swap(int &a, int &b){
    int temp=a;
    a=b;
    b=temp;
}

int main(int argc, char const *argv[])
{
    int a=10, b=20;

    std::cout<<"a="<<a<<"\n";
    std::cout<<"b="<<b<<"\n";

    swap(a,b);

    std::cout<<"a="<<a<<"\n";
    std::cout<<"b="<<b<<"\n";



    return 0;
}
