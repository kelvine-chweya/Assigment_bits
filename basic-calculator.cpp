#include<iostream>
#include<string>
using namespace std;

int main()
{
    float num1,num2;
    char action;
    cout<<"Enter two numbers \nNUM1: ";
    cin>>num1;
    cout<<"\nNUM2: ";
    cin>>num2;
    cout<<"Enter operation to be done: ";
    cin>>action;
    switch(action)
    {
        case '+':
        cout<< num1 <<" + "<<num2<<" = "<<num1+num2;
        break;
        case '-':
        cout<< num1 <<" - "<< num2<<" = "<<num1-num2;
        break;
    }
    return 0;
}
