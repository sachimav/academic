#include<iostream>
using namespace std;

int main(){
    int number;

    cout<<"enter a integer: ";
    cin>>number;

    if(number == 0){
        cout<<"you entered number is zero ";
    }
    else if(number%2 == 0){
        cout<<"you entered number is even";
    }
    else{
        cout<<"your entered number is odd";
    }

    return 0;
}
