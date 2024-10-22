#include<iostream>
#include<cmath>
using namespace std;

int main(){
    double PI = 3.14159;
    double radius,height;

    cout<<"enter radius : "<<endl;
    cin>>radius;
    cout<<"enter height : "<<endl;
    cin>>height;

    double surface = 2*PI*radius*(radius+height);
    double volume = PI* pow(radius,2)*height;

    cout<<"volume is: "<<volume<<endl;
    cout<<"surface is:"<<surface;

    return 0;
}
