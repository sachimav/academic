#include<iostream>
using namespace std;

int main(){
    int x =10,y=20;
    cout<<"x--"<<x--<<endl;
    cout<<"x="<<x<<endl;

    cout<<"--y"<<--y<<endl;
    cout<<"y-- "<<y--<<endl;

    int z = ++y/++x;
    cout<<"x="<<x++<<endl;
    cout<<"x="<<++x<<endl;
    cout<<"z="<<z<<endl;

    int a=(y+1)-(--x);
    cout<<"a="<<a<<endl;
    int b= --y+--x;
    cout<<"x--"<<b<<endl;

    return 0;
}
