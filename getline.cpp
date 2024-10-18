#include<iostream>
using namespace std;

int main(){
    string name,country;
    cout<<"enter your country name : ";
    getline(cin,country);
    cout<<"enter your name : ";
    getline(cin,name);
    cout<<"your name is "<<name<<" and your country is "<<country;

    return 0;
}

