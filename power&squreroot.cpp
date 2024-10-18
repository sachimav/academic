#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int x,y;

    cout<<"enter number 1: ";
    cin>>x;
    cout<<"enter number 2: ";
    cin>>y;

    int power = pow(x,y);
    cout<<"raised to the power of "<<y<<"is: "<<power<<endl;
    cout<<"square root of "<<x<<"is:"<<sqrt(x)<<endl;
    cout<<"square root of "<<y<<"is:"<<sqrt(y)<<endl;
    cout<<"minimum of two numbers is: "<<min(x,y)<<endl;
    cout<<"maximum of two numbers is: "<<max(x,y);


    return 0;
}
