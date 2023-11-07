/*WAC++P to print message when object gets destroyed using destructor.*/
#include <iostream>
using namespace std;
class MyClass {
public:
    MyClass() {
        std::cout << "Object created." << std::endl;
    }
    ~MyClass() {
        std::cout << "Object destroyed." << std::endl;
    }
};
int main() {
    cout<<"NAME : mamad lubna"<<endl;
    cout<<"ERNO : 220130318066"<<endl;
    cout<<"PROBLEM : WAC++P to print message when object gets destroyed using destructor."<<endl;
    MyClass obj1;
    return 0;
}