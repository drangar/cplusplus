#include <iostream>

int main(){
    std::string person_name;
    int person_age;

    std::cout <<"Please enter name:";
    std::cin >> person_name;
    std::cout<<""<<std::endl;
    std::cout <<"Please enter age:";
    std::cin >> person_age;
    std::cout<<""<<std::endl;
    std::cout<<"Name="+person_name+", Age=";
    std::cout << person_age<<std::endl;
    return 0;
}