#include <iostream>
#include <chrono>

using namespace std;

int main(){
    string first_name, last_name, date_of_birth;
    std::cout << "Please enter your first name!\n";
    //std::cin >> first_name;
    std::getline(std::cin, first_name);
    std::cout << "Please enter your Last name!\n";
    //std::cin >> last_name;
    std::getline(std::cin, last_name);
    std::cout << "Please enter your date of birth (DD/MM/YY)!\n";
    //std::cin >> date_of_birth;
    std::getline(std::cin, date_of_birth);
    //std:cout << first_name <<  last_name << date_of_birth << "\n";
    printf("First Name: %s\nLast Name: %s\nDOB: %s\n",first_name.c_str(),last_name.c_str(),date_of_birth.c_str());
}