#include <iostream>
#include <string>
#include <chrono>
#include <string_view>
#include <algorithm>
#include <cctype>


using namespace std;

bool isValidString(string_view string_value){
    return all_of(string_value.begin(), string_value.end(), [](char ch){
        return (isalpha(ch) || isspace(ch));
    });
}

int main(){
    std::string first_name, last_name, date_of_birth;
    std::cout << "Please enter your first name!\n";
    //std::cin >> first_name;
    std::getline(std::cin, first_name);

    if (isValidString(first_name)){
        std::cout << "Please enter your Last name!\n";
        //std::cin >> last_name;
        std::getline(std::cin, last_name);
        if (isValidString(last_name)){
            std::cout << "Please enter your date of birth (DD/MM/YY)!\n";
            //std::cin >> date_of_birth;
            std::getline(std::cin, date_of_birth);
            //std:cout << first_name <<  last_name << date_of_birth << "\n";
            printf("First Name: %s\nLast Name: %s\nDOB: %s\n",first_name.c_str(),last_name.c_str(),date_of_birth.c_str());
        }
        else{
            std::cout << "\nLast Name cannot contain integers!\n";
        }
    }
    else{
        std::cout << "\nFirst Name cannot contain integers!\n";
    }

}