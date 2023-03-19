#include <iostream>
#include<vector>
#include<iostream>
#include<numeric>

int main(){
    std::vector<double> all_numbers={2.2,43.2,2.14,4.55};
    double avg_numbers;
    double sum_numbers;
    int count_numbers=all_numbers.size();
   // all_numbers.begin()
    //avg_numbers=(all_numbers[0]+all_numbers[1]+all_numbers[2]+all_numbers[3])/4;
    sum_numbers=std::accumulate(all_numbers.begin(),all_numbers.end(),0.0);
    avg_numbers=sum_numbers/count_numbers;
    std::cout <<"Average of all numbers:";
    std::cout << avg_numbers<<std::endl;
    return 0;
}