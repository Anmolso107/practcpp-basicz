#include<iostream>
using namespace std;

int main(){
    int a=5, b=7, c;
    cout<<"Before Swapping:";
    cout<<"\na = "<<a<<"\nb = "<<b;
    c = a;
    a = b;
    b = c;
    cout<<"\nAfter Swapping:";
    cout<<"\na = "<<a<<"\nb = "<<b<<endl;
    return 0;
}

/*
$ SWAPPING VALUES OF TWO VARIABLES USING THIRD VARIABLE!!
Before Swapping:
a = 5
b = 7
After Swapping:
a = 7
b = 5
*/