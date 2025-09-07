#include <iostream>
#include <cmath>

int main(){

    double x=3;
    double y=4;
    double z;
    // z=std::max(x,y);
    // z=std::min(x,y);

    //z=pow(3,5);
    // z=sqrt(64);
    // z=abs(-64.3);//accepts int and converts into mod of the value
    //z=round(3.14,1);//3
    //z=ceil(3.14);//4
    z=floor(3.99);//3

    
    std::cout<<z;


    return 0;
}