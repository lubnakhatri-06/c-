/*WAC++P to add two integer values using call by reference.*/
#include<iostream>
using namespace std;
int add(int &,int &);
int main(){
    cout<<"NAME : mamad lubna"<<endl;
    cout<<"ERNO : 220130318066"<<endl;
    cout<<"PROBLEM : WAC++P to add two integer values using call by reference."<<endl;
    int x,r;
    cin>>x>>r;cout<<add(x,r)<<endl;
}int add(int &x,int &r){
    return x+r;
}