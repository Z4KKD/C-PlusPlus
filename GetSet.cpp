#include <iostream>

class Stove{
    private:
        int temperature = 0;
    public:

    Stove(int temperature){
        setTemperature(temperature);
    }
    
    int getTemperature(){
        return temperature;
    }
    void setTemperature(int temperature){
        if(temperature < 0){
            this->temperature = 0;
        }
        else if(temperature >= 10){
            this->temperature = 10;
        }
        else{
        this->temperature = temperature;
        }
    }
};

int main()
{
    // Abstraction is hiding uncessary data from outclass class
    // getter is a function that makes a private attribute readable
    // setter is a function that makes a private attribute writeable

    Stove stove(2);
    
    //stove.setTemperature(9999);

    std::cout << "The temperature setting is: " << stove.getTemperature();

    return 0;

}