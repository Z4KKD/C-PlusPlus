#include <iostream>

class Student{
    public:
        std::string name;
        int age;
        double gpa;
    Student(std::string name, int age, double gpa){
        this->name = name;
        this->age = age;
        this->gpa = gpa;

    }
};

int main()
{
    //constructor a special method that is automically called

    Student student1("Bobby", 29, 3.9);

    Student student2("Sara", 25, 3.4);

    std::cout << student1.name << '\n';
    std::cout << student1.age << '\n';
    std::cout << student1.gpa << '\n';
    
    std::cout << student2.name << '\n';
    std::cout << student2.age << '\n';
    std::cout << student2.gpa << '\n';

    return 0;
}