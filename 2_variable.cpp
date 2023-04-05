#include <iostream>
using namespace std;


int glo=8;
void sum(){
    int a;
    cout<<glo;
}
int main()
{
    int glo=56;
    int a = 4;
    int b = 6;
    char c = 'a';
    cout << "this is tutorial. Value of a is " << a << "\nThe value of b is " << b;
    cout<<"\n The value of c is "<<c<<"\n";

    cout<<glo<<"\n";
    sum();

    bool is_try=true;
    cout<<is_try;
    return 0;
}

// precedence is given to the global variable
// if true then it will return 1 or else 0
