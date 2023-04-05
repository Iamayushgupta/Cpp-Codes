#include<iostream>
using namespace std;
int main(){
    int marks[4]={23,45,56,89};
    
    int *p=marks;

    // cout<<*(p++)<<endl;
    // cout<<*(++p)<<endl;


    cout<<"the value of  is "<<*p<<endl;
    cout<<"the value of  is "<<*(p+1)<<endl;
    cout<<"the value of  is "<<*(p+2)<<endl;
    cout<<"the value of  is "<<*(p+3)<<endl;
    
    return 0;
}