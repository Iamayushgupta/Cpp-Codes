#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Tell me your age: "<<endl;
    cin>>age;

    if (age<18){
        cout<<"you are not allowed"<<endl;
    }
    else if(age==18){
        cout<<"maybe"<<endl;
    }
    else{
        cout<<"you are allowed"<<endl;
    }


    //*****Switch Case********

    switch (age)
    {
    case 18:
        cout<<"You are 18";
        break;
    case 22:
        cout<<"You are 22";
        break;
    case 15:
        cout<<"You are 15";
        break;
    default:
    cout<<"you are dead";
        break;
    }

    return 0;
}