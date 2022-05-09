#include<iostream>

struct person{
    char name[30];
    int no;
};

void display_person(person y){
    std::cout<<y.name<<"\n"<<y.no;
}

void display_person_pointer(person *ptr){
    std::cout<<ptr->name<<"\n"<<ptr->no;
}

void display_person_ref(person &r){
    std::cout<<r.name<<"\n"<<r.no;
}


int main(int argc, char const *argv[])
{
    person per={"Necati Ergin", 123};

    display_person(per);
    display_person_pointer(&per);
    display_person_ref(per);

    return 0;
}