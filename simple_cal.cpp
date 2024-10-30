#include<iostream>
using namespace std;

int main(){
    double x,y;
    char symbol;

    cout<<"enter calculation eg:(2+4): ";
    cin>>x>>symbol>>y;

    if(symbol == '+'){
        cout<<x+y;
    }
    else if(symbol == '-'){
        cout<<x-y;
    }
    else if(symbol == '*'){
        cout<<(x*y);
    }
    else{
        cout<<(x/y);
    }

    return 0;
}
