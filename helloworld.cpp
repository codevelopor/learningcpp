#include <iostream>

int main(){
    std::cout << "Hey there I'm using Whsatsapp !!\n";
    int x; //declaration
    x=5;
    int y=6;
    int sum=x+y;
    std::cout<<x<<'\n';
    std::cout<<y<<'\n';
    std::cout<<sum<<'\n';

    //Data Types
    //Integer(Whole Numbers)
    int age=18.5;
    int months=222;

    std::cout<< age<<'\n';//truncated and stores only whole numbers out: 18
    
    // Doubles(numbers including Decimal point )
    double price=49.99;
    double cgpa =8.0;//stores only 8 not 8.0
    double temperature =30.2;
    std::cout<<cgpa<<'\n';

    //Char (single character)
    char grade='A';
    char initial= 'C'; // assigns only the last char to the variable
    //std::cout<<initial<<'\n'; 

    //Boolean (true or false)
    bool pass = true;
    bool student = false;
    bool forSale = true;

    //String(object that represents sequence of char)
    std::string name = "Sumit";
    std::string day = "Friday";
    std::string password = "Someone2424";
    // std::cout<< "Hello "<<name;
    
    //const keyword used for constants that should not be changed for the whole program
    const double PI=3.14159;


    //Namespaces :- provides a solution for preventing name conflicts in large projects. Each entity needs a unique name. A namespace allows for identically named enities as long as the namespaces are different.

    // int x=0;
    // int x=1; // error redeclaration of x
    

    
    return 0;


}