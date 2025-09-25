#include<iostream>
using namespace std;

int main(){
    int a=5,b=7;
    cout<<"Before Swapping:";
    cout<<"\na = "<<a<<"\nb = "<<b;
    a = a+b;
    b = a-b;
    a = a-b;
    cout<<"\nAfter Swapping:";
    cout<<"\na = "<<a<<"\nb = "<<b<<endl;
    return 0;
}

/*
$ SWAPPING VALUES OF TWO VARIABLES WITHOUT THIRD VARIABLE!!
Before Swapping:
a = 5
b = 7
After Swapping:
a = 7
b = 5
*/