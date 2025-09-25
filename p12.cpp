#include<iostream>
using namespace std;

int main(){
    int n,rev=0,rem;
    cout<<"Enter n: ";
    cin>>n;

    while(n!=0){
        rem = n%10;
        rev = rev*10 + rem;
        n = n/10;
    }
    cout<<"Reverse n: "<<rev<<endl;
    return 0;
}

/*
$ REVERSE THE NUMBER!!
Enter n: 1234567
Reverse n: 7654321
*/