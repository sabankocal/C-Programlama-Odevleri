#include<iostream>

int main(int argc, char const *argv[])
{
    int a=10;
    int b=20;

    int*const ptr=&a;
    *ptr=20;
    
    std::cout<<"a="<<a<<std::endl;

    //ptr=&b;  // gecersiz

    return 0;
}
