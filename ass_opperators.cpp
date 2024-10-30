#include<iostream>
using namespace std;

int main(){
    int age = 20;
    bool isstudent= true;

    bool x= (age>18 && isstudent);
    bool y= (age<18 || isstudent);
    bool z= !(age<18 || isstudent);

    cout<<x<<'\n'<<y<<'\n'<<z;

    return 0;
}
