#include<iostream>
using namespace std;

int main(){
    double height,weight;

    cout<<"enter your height: ";
    cin>>height;
    cout<<"enter your weight: ";
    cin>>weight;

    double bmi = weight/(height*height);

    if(bmi < 18.5){
        cout<<"you are underweight";
    }
    else if(24.9 >bmi &&  bmi >= 18.5){
        cout<<"you are normal weight";
    }
    else if(29.9 > bmi &&  bmi >= 24.9){
        cout<<"you are over weight";
    }
    else{
        cout<<"you are obese";
    }

    return 0;
}

