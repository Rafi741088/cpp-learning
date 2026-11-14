#include <iostream>
using namespace std;
int main (){
    double num1,num2;
    cout<<"Enter a num1:";
    cin>>num1;
    cout<<"Enter a num2:";
    cin>>num2;

    cout<<"calculation"<<endl;

    cout<<"Addition:"<<num1+num2<<endl;
    cout<<"subtraction:"<<num1-num2<<endl;
    cout<<"Multiplication:"<<num1*num2<<endl;

    cout<<(num1>num2?"num1 is greater":"num2 is greater")<<endl;

    return 0;

}