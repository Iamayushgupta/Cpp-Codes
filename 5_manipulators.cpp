#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int a=34;
    cout<<"the value of a was "<<a;
    a=45;
    cout<<"the value of a is "<<a;


    // Constant in C++
    const int a =3;
    // now we cannot assign new value to a

    // //Manipulators helps in formatting
    int a=3,b=8,c=123;
    cout<<"value of a is: "<<a<<endl;
    cout<<"value of b is: "<<b<<endl;
    cout<<"value of c is: "<<c<<endl;

    cout<<"value of a is: "<<setw(4)<<a<<endl;
    cout<<"value of b is: "<<setw(4)<<b<<endl;
    cout<<"value of c is: "<<setw(4)<<c<<endl;

    // Operator precedence
    int a=3,b=4;
    int c=a*5 + b;
    cout<<c;

}