#include <iostream>

//Arithmetic operators

int main(){
    using namespace std;
    int students = 20;

    //INCREMENT
    students++;//increment {students=students+1 and students+=1 also work}
     
    

    //SUBTRACTION
    students=students-2;//student-=2 also works

    //Multiplication
    students*=2;

    //Division
    students/=3;//The decimal portion is removed and only the quotient is returned. to retain the decimal use double data type

    //Remainder
    int remainder=students%3;



    cout<<students<<'\n';
    cout<<remainder<<'\n';

    // Order of precedence 
    //Parenthesis-->Multiplication and Division-->Addition and Subtraction
    int number=6-7*4/2;
    cout<<number;

    return 0;
}