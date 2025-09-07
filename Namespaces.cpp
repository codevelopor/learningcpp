#include <iostream>
namespace first {
    int x=1;
}
namespace second {
    int x =2;
}
int main(){
    //Namespaces :- provides a solution for preventing name conflicts in large projects. Each entity needs a unique name. A namespace allows for identically named enities as long as the namespaces are different.

    int x=0;
    //int x=1; // error redeclaration of x
    std::cout<<x<<'\n'; //uses the  entity of same namespace prints 0
    std::cout<<first::x<<'\n';//prints 1 (:: --> scope resolution opeerator)
    std::cout<<second::x<<'\n';//prints 2
    using namespace second;// overshadowed by the local namespace means if local namespace has a variable then it will be used unless explicitly mentioned '::' 
    std::cout<<x;// prints 0

}