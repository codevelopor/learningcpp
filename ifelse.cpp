#include <iostream>

//If- when condition is true 
//else-otherwise

int main(){
    int age;
    std::cout<<"Enter your age : ";
    std::cin>>age;

    if(age>=18){
        std::cout<<"You are welcome.";

    }
    else if (age<0){
        std::cout<<"You Entered a wrong age.";
    }
    else{
        std::cout<<"Please leave you are not allowed.";
    }
    return 0;

}