#include <iostream>

void swap(std::string &x, std::string &y); // passing memory address instead 
                                            // by using & infront

int main()
{

    std::string x = "Kool-Aid";
    std::string y = "Water";

    swap(x, y);

    std::cout << "X: " << x << '\n';
    std::cout << "X: " << y << '\n';    

}

void swap(std::string &x, std::string &y)
{
    std::string temp;
    temp = x;
    x = y;
    y = temp;

}