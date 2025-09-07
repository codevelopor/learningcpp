#include <iostream>
#include <cmath>

int main(){

    double a;
    double b;
    double c;
    std::cout<<"Enter the value of perpendicular: ";
    std::cin>>a;
    std::cout<<"Enter the value of base: ";
    std::cin>>b;
    c=sqrt(pow(a,2)+pow(b,2));
    std::cout<<"Hypotenuse is equal to "<<c;

    return 0;
}