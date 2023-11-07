/*WAC++P to demonstrate use of this pointer.*/
#include <iostream>
using namespace std;
class MyClass {
private:
    int data;
public:
    MyClass(int value) : data(value) {}
    void displayData() {
        cout << "Data: " << data << endl;
    }
    void updateData(int newValue) {
        this->data = newValue; // Use the this pointer to access the member variable
        cout << "Data updated to: " << this->data << endl;
    }
};
int main() {
    cout<<"NAME : mamad lubna"<<endl;
    cout<<"ERNO : 220130318066"<<endl;
    cout<<"PROBLEM : WAC++P to demonstrate use of this pointer."<<endl;
    MyClass obj(42);
    obj.displayData();
    obj.updateData(55);
    return 0;
}