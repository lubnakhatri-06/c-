/*Reading from a text file test.txt using C++ FileStream Programming.*/
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() {
    cout<<"NAME : mamad lubna"<<endl;
    cout<<"ERNO : 220130318066"<<endl;
    cout<<"PROBLEM : Reading from a text file test.txt using C++ FileStream Programming."<<endl;
    // Open the file for reading
    ifstream inputFile("test.txt");
    // Check if the file is open and ready for reading
    if (inputFile.is_open()) {
        string line;
        // Read and display each line from the file
        while (getline(inputFile, line)) {
            cout << line << endl;
        }
        // Close the file
        inputFile.close();
    } else {
        cerr << "Failed to open the file for reading." << endl;
    }
    return 0;
}