#include <iostream>
#include <vector>

int main()
{
    double temperature_list[4]={22.2,1.55,24.12,55.2};
    temperature_list[3]=77.77;
    std::cout<<temperature_list[3]<<std::endl;

    std::vector<double> temperature_list_vector = {22.2,1.55,24.12,55.2};
    temperature_list_vector.at(1)= 99.3;
    temperature_list_vector.push_back(3321.33);
    std::cout<<temperature_list_vector.at(1)<<std::endl;
    std::cout<<temperature_list_vector.size()<<std::endl;

    return 0;
}