#include <iostream>

struct Car
{
    std::string model;
    int year;
    std::string color;
};

void printCar(Car &car);

int main()
{
    Car car1;
    Car car2;

    car1.model = "Mustang";
    car1.year = 2023;
    car1.color = "green";

    car2.model = "Corvette";
    car2.year = 2024;
    car2.color = "black";

    std::cout << &car1 << '\n';

    printCar(car1);

    return 0;
}

void printCar(Car &car) 
{  // using &car will use the exact one without will make a copy 
    std::cout << &car << '\n';
    std::cout << car.model << '\n';
    std::cout << car.year << '\n';
    std::cout << car.color << '\n';
}
