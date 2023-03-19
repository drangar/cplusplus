#include <iostream>

int main()
{
    std::string user_name;
    std::cout<<"What is the user name:";
    std::cin >> user_name;

    std::cout << "User is " + user_name << std::endl;
    return 0;
}