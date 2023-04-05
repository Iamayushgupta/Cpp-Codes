#include<iostream>
// There are two types of header files:
//     system header : it comes with the compiler
//     #include<iostream>
//     User deifned:
//     if create a new file, :
//     #include"this.h" ----> this will produce an error   
using namespace std;
int main(){
    cout<<"hello"<<endl;
    int a=4,b=5;
    //Airthematic operators
    cout<<a+b<<endl;
    cout<<a-b<<endl;
    cout<<a*b<<endl;
    cout<<a/b<<endl;
    cout<<a%b<<endl;
    cout<<a++<<endl;
    cout<<a--<<endl;
    cout<<++a<<endl;

    cout<<"comparison operators"<<endl;
    cout<<(a==b)<<endl;
    cout<<(a!=b)<<endl;
    cout<<(a>=b)<<endl;
    cout<<(a<=b)<<endl;
    cout<<(a>=b)<<endl;
    cout<<(a>b)<<endl;


    // Logical Operators
    return 0;

}
// endl prints new line