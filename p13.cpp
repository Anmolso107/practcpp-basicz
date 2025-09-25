#include<iostream>
using namespace std;

int main(){
    int n,sum=0,rem;
    cout<<"Enter n: ";
    cin>>n;

    while(n!=0){
        rem = n%10;
        sum = sum + rem;
        n = n/10;
    }
    cout<<"Sum of n is: "<<sum<<endl;
    return 0;
}

/*
$ SUM OF ALL DIGITS!!
Enter n: 12345  
Sum of n is: 15
*/