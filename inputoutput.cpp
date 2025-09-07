#include <iostream>
//cout << (insertion operator)
//cin >> (extraction operator)

int main(){
    std::string name;
    int age;


    // std::cout<<"what's your name?: ";
    // std::cin>> name;//If there are spaces in the input it takes each word after input as another input.
    // std::cout<<"What's your age?: ";
    // std::cin>>age;// If the entered value isnt a number it returns 0.
    // std::cout<<"Hello, "<<name+" I have learnt you are "<<age<<" years old.\n";

    std::string fullname;
    int age;

    std::cout<<"What's your age?: ";
    std::cin>>age;

    std::cout<<"What's your fullname?: ";
    std::getline(std::cin >> std::ws,fullname);
    std::cout<<"Hii, "<<fullname;



    return 0;
}