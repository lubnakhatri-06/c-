/*WAC++P to Find Largest Among 3 Numbers.*/
#include<iostream>
using namespace std;
int main(){
    cout<<"NAME : mamad lubna"<<endl;
    cout<<"ERNO : 220130318066"<<endl;
    cout<<"PROBLEM : WAC++P to Find Largest Among 3 Numbers."<<endl;
    int a,b,c,max;
    cout<<"Enter three numbers: ";
    cin>>a>>b>>c;
    max=a;
    if(b>max)
    max=b;
    if(c>max)
    max=c;
    cout<<"Largest number is "<<max<<endl;
    return 0;
}