#include <iostream>

int main()
{
    const int seconds_per_hour=3600;
    const double max_allowed_temperature=76.8;

    int user_age=46;
    double temperature=23.4;
    bool is_alive = false;
    
    std::string user_name="deepak is back to c++ world!";

    std::cout << "Hello restarting C++" << std::endl;
    std::cout << "First program done ..yaay" << std::endl;
    std::cout << user_age << std::endl;
    std::cout << temperature << std::endl;
    std::cout << is_alive << std::endl;
    std::cout << user_name <<std::endl;
    std::cout << seconds_per_hour << std::endl;

    return 0;
}