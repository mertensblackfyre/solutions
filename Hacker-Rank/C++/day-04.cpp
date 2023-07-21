using namespace std;
#include <iostream>

class Person{
    public:
        int age;
        Person(int initialAge);
        void amIOld();
        void yearPasses();
    };

    Person::Person(int initialAge){
        if(initialAge < 0) 
        {
            std::cout << "Age is not valid, setting age to 0." << "\n";
            this->age = 0;   
        } 
        this->age = initialAge;
    }

    void Person::amIOld(){
        if(this->age < 13) std::cout << "You are young." << "\n";
        else if(this->age >= 13 && this->age < 18) std::cout << "You are a teenager." << "\n";
        else std::cout << "You are old." << "\n";
        
        
    }

    void Person::yearPasses(){
        // Increment the age of the person in here
        this->age += 1;
    }

int main(){
