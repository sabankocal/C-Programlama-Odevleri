#include<iostream>

int func_callbyvalue(int a){

   return a=20;
}

int func_callbyref(int &a){

    return a=20;
}

int main(int argc, char const *argv[])
{
    int a=10;

    func_callbyvalue(a);

    std::cout<<"a="<<a<<"\n";

    func_callbyref(a);

    std::cout<<"a="<<a;

    return 0;
}
