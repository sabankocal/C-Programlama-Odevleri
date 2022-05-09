#include<iostream>

int main(int argc, char const *argv[])
{
    int a=10;
    int &r=a;

    std::cout<<"="<<a<<std::endl;

    r+=2;
    std::cout<<"a="<<a<<"\n";

    r=-r;
    
    std::cout<<"a="<<a<<std::endl;





    return 0;
}
