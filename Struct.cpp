#include <iostream>

struct student{
    std::string name;
    double gpa;
    bool enrolled;
};

int main()
{

    //struct is a group of related variables under one name

    student student1;
    student1.name = "Dokkabi";
    student1.gpa = 3.2;
    student1.enrolled = true;

    student student2;
    student2.name = "Echo";
    student2.gpa = 4.0;
    student2.enrolled = false;

    std::cout << student1.name << '\n';
    std::cout << student1.gpa << '\n';
    std::cout << student1.enrolled << '\n';

    std::cout << student2.name << '\n';
    std::cout << student2.gpa << '\n';
    std::cout << student2.enrolled << '\n';

    return 0;
}