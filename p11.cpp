#include<iostream>
using namespace std;

int main(){
    float Area,radius;
    const float pi = 3.14;
    cout<<"Enter radius: ";
    cin>>radius;

    Area = pi*radius*radius;
    cout<<"Area of Circle: "<<Area<<endl;
    return 0;
}

/*
$ AREA OF CIRCLE!!
Enter radius: 7
Area of Circle: 153.86
*/