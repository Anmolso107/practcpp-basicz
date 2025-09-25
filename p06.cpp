#include<iostream>
using namespace std;

int main(){
    float math,eng,hindi,social,sci;
    cout<<"Enter math marks: ";
    cin>>math;
    cout<<"Enter eng marks: ";
    cin>>eng;
    cout<<"Enter hindi marks: ";
    cin>>hindi;
    cout<<"Enter social marks: ";
    cin>>social;
    cout<<"Enter sci marks: ";
    cin>>sci;

    float avg = (math+eng+hindi+social+sci)/5;
    cout<<"Avg of 5 subjects: "<<avg<<"%"<<endl;
    return 0;
}

/*
$ AVERAGE OF 5 SUBJECTS!!
Enter math marks: 78
Enter eng marks: 81
Enter hindi marks: 90
Enter social marks: 87
Enter sci marks: 75
Avg of 5 subjects: 82.2
*/