#include<iostream>
using namespace std;

int c=45;
int main(){

    int a,b,c;
    cout<<"enter the value of a"<<endl;
    cin>>a;
    cout<<"enter the value of b"<<endl;
    cin>>b;
    cout<<"sum is "<<a+b<<endl;
    cout<<"global value of c is "<<::c;

    float d=34.4f;
    long double e=34.4l;
    cout<<"the value of d is "<<d<<endl<<"the value of e is "<<e<<endl;

    // C++ automatically take a decimal number as 'double'
    // by suffixing f or F it stores it as float

    cout<<"The size of 34.4 is "<<sizeof(34.4)<<endl;
    cout<<"The size of 34.4f is "<<sizeof(34.4f)<<endl;
    cout<<"The size of 34.4F is "<<sizeof(34.4F)<<endl;
    cout<<"The size of 34.4l is "<<sizeof(34.4l)<<endl;
    cout<<"The size of 34.4L is "<<sizeof(34.4L)<<endl;

    // ***********refrence variables***************
    float x=455;
    float & y=x;
    cout<<x;
    cout<<y;


    // ************type casting*******
    int a=45;
    float b=45.46;
    cout<<float(a);

    int c = int(b);
    cout<<c;



}