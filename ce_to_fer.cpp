#include<iostream>
using namespace std;

int main(){
    double c,f;

    cout<<"enter temperature in Celsius: ";
    cin>>c;
    cout<<"enter temperature in farenhite: ";
    cin>>f;
    cout<<"temp in farenhite is: "<<(5*c/9)+32<<endl;
    cout<<"temp in Celsius is "<<(f-32)*5/9;

    return 0;
}

