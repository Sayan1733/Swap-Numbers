#include <iostream>
#include <stdio.h>
//Swap Numbers with out any third variable
using namespace std;
int main() {
    
    int a,b;
    
    cout<< "Enter Two Numbers:";
    cin>>a>>b;
    b=b+a;
    a=b-a;
    b=b-a;
    cout<<"Numbers after Swap:"<<a<<","<<b;

    return 0;
}
