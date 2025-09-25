#include<iostream>
using namespace std;

int main(){
    float celsius,fahrenheit;
    cout<<"Enter fahrenheit: ";
    cin>>fahrenheit;

    celsius = (fahrenheit-32)*5/9;
    cout<<"celsius is: "<<celsius<<endl;
    return 0;
}

/*
$ CONVERT FAHRENHEIT TO CELSIUS!!
Enter fahrenheit: 89.6
celsius is: 32
*/