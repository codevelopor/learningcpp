#include <iostream>
//Type Conversion= Conversion of a value of one data type to a value of another.
//Implicit=automatic
//Explicit = precede literal with new data type

int main(){
    
    int x=3.14;// it implicitly converts 3.14 into an integer

    double y=(int)1.414;//this explicitly converts 1.414 into an int first and then store the value in y a double data type variable
    
    // std::cout<<x<<'\n';//out:3
    // std::cout<<y<<'\n';//out:1

    char a=100;// a stores 'd' in itself implicitly converting 100 into asci character. 


    //Use cases
    int correct=8;
    int questions=10;
    double score=correct/(double)questions *100;//if there was no doubele then 0.8 would implicitly convert itself into 0 int
    std::cout<<score<<'%';//80%
 
    return 0;
}