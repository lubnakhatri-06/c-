/*WAC++P to demonstrate use of return by reference.*/
#include<iostream>
using namespace std;
int x=5;
int &test();
int main(){
   cout<<"NAME : mamad lubna"<<endl;
    cout<<"ERNO : 220130318066"<<endl;
    cout<<"PROBLEM : WAC++P "<<endl;
    cout<<x<<endl;
    test()=15;
    cout<<x<<endl;
    return 0;
}int &test(){
    return x;
}