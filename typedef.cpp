#include <iostream>
#include <vector>

//Typedef = reserved keyword used to create an additional name (alias) for another data type.
//New Identifier for an existing type helps with readability and typos

//tydef std::vector<std::pair<std::string,int>> pairlist_t;
// typedef std::string text_t;
// typedef double decimal;

//Typedef has been replaced by using keyword.

using text_t = std::string;
using decimal = double;

int main(){

    text_t firstname="Sumit";
    decimal x=0.095;
    
    std::cout<<firstname<<'\n';
    std::cout<<x<<'\n';

    return 0;
}