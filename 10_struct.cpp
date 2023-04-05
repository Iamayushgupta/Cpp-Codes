#include<iostream>
using namespace std;
typedef struct employee
    {
        /* data */
        int id;
        char favchar;
        float salary;
    } ep;

union money
{
    int rice;
    char car;
    float pounds;
};

int main(){
    struct employee ayush;
    // ep ayush;
    ayush.id=10;
    ayush.favchar='a';
    ayush.salary=1000000;
    // cout<<ayush.favchar<<endl;
    // cout<<ayush.id<<endl;
    // cout<<ayush.favchar<<endl;


    // we can only take one value at a time 
    union money m1;
    m1.rice=20;
    cout<<m1.rice<<endl;

    enum Meal{breakfast,lunch,dinner};
    Meal m2=breakfast;
    cout<<m2<<endl;
    cout<<breakfast<<endl;
    cout<<lunch<<endl;
    cout<<dinner<<endl;

    
    return 0;
}