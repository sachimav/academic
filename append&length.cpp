#include<iostream>
using namespace std;

int main(){
    string fname,lname;

    cout<<"enter first name: ";
    getline(cin,fname);
    cout<<"enter last name: ";
    getline(cin,lname);


    string fullname = fname+" "+lname;
    fullname = fname.append(lname);

    cout<<"full name is : "<<fullname<<endl;

    int y = fullname.length();
    cout<<"number of characters in name is : "<<y;

    return 0;
}

