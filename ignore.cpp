#include<iostream>
using namespace std;

int main(){
    string city,country;
    cout<<"enter your country: ";
    cin.ignore();
    cout<<endl;
    cout<<"enter your city: ";
    getline(cin,country);
    cout<<"you live in "<<city<<","<<country;

    return 0;
}

