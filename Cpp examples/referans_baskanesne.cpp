#include<iostream>

int main(int argc, char const *argv[])
{
    int a=10;
    int b=20;

    int &r=a;
    std::cout<<"r="<<a<<"\n";

    r=b;

    std::cout<<"a="<<a<<"\n";

    return 0;
}
