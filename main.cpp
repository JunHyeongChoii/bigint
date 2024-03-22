#include <iostream>
#include <string>

std::string sum(std::string first, std::string second);
std::string sub(std::string first, std::string second);
int main()
{
    //
    std::string first;
    std::string second;

    std::cout << "First number  >>  ";
    std::cin >> first;
    std::cout << "Second number >>  ";
    std::cin >> second;



    std::string summ = "";
    summ = sum(first, second);
    std::string subb ="";
    subb =  sub(first, second);


    std::cout << "Sum           >>  "<< summ << std::endl;

    std::cout << "Sub           >>  "<< subb << std::endl;



}