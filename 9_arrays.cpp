#include<iostream>
using namespace std;
int main(){
    int marks[4]={23,45,56,89};
    int newmarks[2];
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;

    // you can change the value of marks

    newmarks[0]=1;
    newmarks[1]=5;
    cout<<newmarks[0]<<endl;
    cout<<newmarks[1]<<endl;

    for (int i = 0; i < 4; i++)
    {
        cout<<"the value of marks "<<i<<" is "<<marks[i]<<endl;
    }
    
    return 0;
}