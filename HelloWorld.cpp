#include <iostream>

namespace first{
    int z1 = 1;
}

namespace Second{
    int z1 = 2;
}

/*
typedef std::string text_t;
typedef int number_t;
*/

void happyBirthday(std::string name, int age);

std::string concatStrings(std::string string1, std::string string2);

int myNum = 3;

void printNum();

double getTotal(double prices[], int size);

int factorial(int num);

int main()
{ 
    
    /*

    // recursion = function that invokes itself from within    
    // Advantages = less code and cleaner
    // Disadvantages = use more memory and slows

        std::cout << factorial(10);


    // dynamic memory = memory that is allocated after
    //          is already compiled & running.
    //      using 'new' operator to allocate memory in the heap
    //      rather then the stack  

    int *pNum = NULL;

    pNum = new int;

    *pNum = 21;

    std::cout << "address: " << pNum << '\n';
    std::cout << "value: " << *pNum << '\n';

    delete pNum; // free up the memory to prevent memory leaks

    char *pGrades = NULL;

    int size;

    std::cout << "How many grades to enter?: ";
    std::cin >> size;

    for(int i = 0; i < size; i++)
    {
    std::cout << "Enter grade #" << i + 1 << ": ";
    std::cin >> pGrades[i];
    }
    for(int i = 0; i < size; i++)
    {
        std::cout << pGrades[i] << " ";
    }

    delete[] pGrades;

    //nullpt = null pointer literal
    //null value = a value that has no value

    int *pointer = nullptr;
    int x = 123;

    pointer = &x;

    if(pointer == nullptr)
    {
        std::cout << "address was not assigned! \n";
    }
    else
    {
        std::cout << "address was assigned! \n";
        std::cout << *pointer;
    }

    // pointers are variable that stores a memory address
    // & address-of
    // * dereference 

    std::string name = "Testing";

    std::string *pName = &name; // creating a pointer

    std::cout << pName;

    //finding a memory address with & symbol in front of value

    std::string name = "Zakk";
    int age = 21;
    bool student = true;

    std::cout << &name << '\n';
    std::cout << &age << '\n';
    std::cout << &student << '\n';

    // Multidimensional Array

     std::string cars[3][4] = {{"Mustang", "Escape", "F-150"},
                            {"Corvette", "Equinox", "Silverado"},
                            {"Challenger", "Durango", "Ram 1500"}};

    int rows = sizeof(cars)/sizeof(cars[0]);
    int columns = sizeof(cars[0])/sizeof(cars[0][0]);

    for(int i = 0; i < rows; i++)
    {   
        for(int j = 0; j < columns; j++){
        std::cout << cars[i][j] << " ";
        }
        std::cout << '\n';
    }

    std::string foods[5];
    int size = sizeof(foods)/sizeof(foods[0]);
    std::string temp;

    for(int i = 0; i < size; i++)
    {
        std::cout << "Enter a food you like or 'q' to quit #" << i + 1 << ": ";
        std::getline(std::cin, temp);
        if(temp == "q")
        {
            break;
        }
        else
        {
            foods[i] = temp;
        }
    }

    std::cout << "You like the following food: \n";

    for(int i = 0; !foods[i].empty(); i++)
    {
        std::cout << foods[i] << '\n';
    }

    //split into three's

    const int SIZE = 99;
    std::string foods[SIZE];
    
    fill(foods, foods + (SIZE/3), "pizza");
    fill(foods + (SIZE/3), foods + (SIZE/3)*2, "hamburger");
    fill(foods + (SIZE/3)*2, foods + SIZE, "hotdogs");

    for(std::string food : foods)
    {
        std::cout << food << '\n';
    }

     double prices[] = {49.99, 15.05, 10.10, 73};
     int size = sizeof(prices)/sizeof(prices[0]);
     double total = getTotal(prices, size);

     std::cout << "$" << total;

    // foreach loop
    std::string students[] = {"Tom", "Billy", "Lisa", "Sara"};
    for(std::string student : students)
    {
        std::cout << student << '\n';
    }

      // Iterate over an array
    std::string agents[] = {"Kali", "Echo", "Lesion", "Rook"};

    for(int i = 0; i < sizeof(agents)/sizeof(std::string); i++)
    {
        std::cout << agents[i] << '\n';
    }

     // sizeof() = determines the size in bytes of a:
     // ariable, data type, class, objects, etc.
    std::string name = "Test";
    double test = 5.0;

    std::cout << sizeof(name) << " bytes\n";
    std::cout << sizeof(test) << " bytes\n";


    std::string cars[3]; // Arrays

    cars[0] = "Camaro";
    cars[1] = "Mustang";
    cars[2] = "Camry";

    std::cout << cars[0] << '\n';
    std::cout << cars[1] << '\n';
    std::cout << cars[2] << '\n';

    int myNum = 1;
    printNum();
    std::cout << ::myNum << '\n'; // put :: in front to declare the global

    // Local varibles are delcared inside function or block
    // Global varibles are declared outside of all functions
    // using too many global can pollute global name space and it can be insecure

    
    std::string firstName = "Zakk";
    std::string lastName = "iza";
    std::string fullName = concatStrings(firstName, lastName);

    std::cout << "Hello " << fullName;
    
    std::string name = "Bro";
    int age = 21;

    happyBirthday(name, age);

    return 0;

  
    // pseudo-random = not truly random but close

    srand(time(NULL));

    int rnum = (rand() % 6) + 1; // gives 1-6 numbers

    switch (rnum){
        case 1: std::cout << "You win 1 dollar!\n";
        break;
        case 2: std::cout << "You win 2 dollars!\n";
        break;
        case 3: std::cout << "You win 3 dollars!\n";
        break;
        case 4: std::cout << "You win 4 dollars!\n";
        break;
        case 5: std::cout << "You win 5 dollars!\n";
        break;
        case 6: std::cout << "You win 6 dollars!\n";
        break;
    }

    std::cout << rnum;
  

    // Nested loops 
    int rows;
    int columns;
    char symbol;

    std::cout << "How many rows?: ";
    std::cin >> rows;

    std::cout << "How many columns?: ";
    std::cin >> columns;

    std::cout << "Enter a symbol to use: ";
    std::cin >> symbol;

    for(int i = 1; i <= rows; i++){
        for(int j = 1; j <= columns; j++){
        std::cout << symbol;
        }
        std::cout << '\n';
    }


     // break out of a loop
     // continue will skip current iteration
    
    for(int i = 1; i <= 20; i++){
        if(i == 13){
            continue;
        }
        std::cout << i << '\n';
    }

      for(int i = 0; i <= 10; i++)  //For loops
    {
        std::cout << i << '\n';
    }
    std::cout << "Happy New Years! \n";

    int number;

    std::cout << "Enter a positive #: ";
    std::cin >> number;

    while(number < 0) // do while loop = do some block of code first
                     // then repeat if condition is true
    {
        std::cout << "Enter a positive #: ";
        std::cin >> number;
    }

    std::cout << "The # is: " << number;

    std::string name2;

    while(name2.empty()) //while loop
    {
        std::cout << "Enter your name: ";
        std::getline(std::cin, name2);
    }

    std::cout << "Hello " << name2;


    std::string name;

    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    // name.empty will check if empty
    // name.clear will clear it
    // name.append will add to the end of it
    // name.find() will find whatever is in ();
    // name.erase(0, 5) will erase from starting index and end


    if(name.empty()){
        std::cout << "You didn't enter your name";
    }
    else
    {
        std::cout << "Hello " << name;
    }

    /* if(name.length() > 12)
    {
        std::cout << "Your name can't be over 12 characters";
    }
    else
    {
        std::cout << "Welcome " << name;
    } *\
       
    // && = check if two conditions are true
    // || = check if at least one of the two conditions is true
    // !  = reverse the logical state of its operand

    int temp;
    std::cout << "Enter a temp: " << "\n";
    std::cin >> temp;

    if(temp > 0 && temp < 30)
    {
        std::cout << "The temperaute is good!" << "\n";
    }
    else
    {
        std::cout << "The temp is bad!" << "\n";
    }

    bool light = true;

    if (!light)
    {
        std::cout << "It is dark!";
    }
    else
    {
        std::cout << "It is light!";
    }

    // ternary operator ?: = replacement for if/else 
    // condition ? expression1 : expresssion 2;
    
    int test = 60;
    test >= 50 ? std::cout << "Above 50!" : std::cout << "Under 50!";

    bool test10 = true;

    test10 ? std::cout << "The test is true" : std::cout << "The test is not true";


    int month;
    std::cout << "Enter your month: "
    std::cin >> month;
    switch(month){
        case 1:
            std::cout << "It is January";
            break;
        case 2:
            std::cout << "It is February";
            break;
        case 3:
            std::cout << "It is March";
            break;
        case 4:
            std::cout << "It is April";
            break;
        case 5:
            std::cout << "It is May";
            break;
        case 6:
            std::cout << "It is June";
            break;
        case 7:
            std::cout << "It is July";
            break;
        case 8:
            std::cout << "It is August";
            break;
        case 9:
            std::cout << "It is September";
            break;
        case 10:
            std::cout << "It is October";
            break;
        case 11:
            std::cout << "It is November";
            break;
        case 12:
            std::cout << "It is December";
            break;
        default:
            std::cout << "Please enter in only numbers (1-12)"; 
        }

    int age1;
    std::cout << "Enter your age: ";
    std::cin >> age1;

    if(age1 >= 18){
        std::cout << "You are over 18";
    }
    else if(age1 < 0){
        std::cout << "You haven't have born yet!";
    }
    else if(age1 >= 200){
        std::cout << "You are too old to enter this site!";
    }
    else{
        std::cout << "You are not old enough to enter!";
    }

    double a = 3;
    double b = 4;
    double c;

    //c = std::max(a, b);
    //c = std::min(a, b);
    //c = pow(2, 4);
    //c = sqrt(9);
    //c = abs(-3);
    //c = round(x);
    //c = ceil(x);
    //c = floor(x);
    
    std::cout << c;

    int sample = 5;
    int sample2 = 10;
    double sample3 = sample/(double)sample2 * 100;

    std::cout << sample3 << '\n';

    // cout << (insertion)
    // cin >> (extraction)

    std::string name;
    std::cout << "What's your name?: ";
    std::getline(std::cin >> std::ws, name);
    //std::cin >> name;
    std::cout << "Hello " << name;

       std::cout << (char) 100;

     text_t firstName = "Bro";
    number_t age = 21;

    std::cout << firstName << '\n';
    std::cout << age << '\n';
    
    std::cout << first::z << ' ' << Second::z << '\n';
    std::cout << "This is a test!" << std::endl; // or use '\n'
    std::cout << "Another test!" << '\n';

    int x; //declaration
    x = 5;

    std::cout << x << '\n';

    double price = 11.11;

    std::cout << price << '\n';

    char grade = 'A';

    std::cout << grade << '\n';

    bool student = false;

    std::cout << student << '\n';

    std::string username = "First123@";

    std::cout << "Hello " << username << '\n';

    const double pi = 3.14159;
    double radius = 10;
    double circumference = 2 * pi * radius;

    std::cout << circumference << "cm" << '\n';

    */

    return 0;
}


int factorial(int num)
{
    if(num > 1)
    {
        return num * factorial(num - 1);
    }
    else
    {
        return 1;
    }
}

void happyBirthday(std::string name, int age)
{
    std::cout << "Happy Birthday to " << name << '\n';
    std::cout << "Happy Birthday dear " << name << '\n';
    std::cout << "You are  " << age << " years old." << '\n';
    
}

std::string concatStrings(std::string string1, std::string string2){
    return string1 + " " + string2; // return values
}

void printNum()
{
    int myNum = 2;
    std::cout << myNum << '\n'; // local verision
}
double getTotal(double prices[], int size)
{
    double total = 0;

    for(int i = 0; i < size; i++)
    {
        total += prices[i];
    }
    return total;
}