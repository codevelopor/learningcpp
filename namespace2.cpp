#include <iostream>
namespace first {
   int x = 4;
}
namespace second {
    int x = 5;
}
int main() {
    using namespace second;
    using namespace std;
    cout<<x;//prints the value of local x if no local x then it uses the value from the imported namespace.
    return 0;
}