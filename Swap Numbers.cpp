#include <iostream>
#include <conio.h>
//Swap Numbers with out any third variable
using namespace std;
int swap(int a,int b)
{
	b=b+a;
    a=b-a;
    b=b-a;
    cout<<"Numbers after Swap:"<<a<<","<<b;
    return 0;
}
int main() {
    
    int a,b;
    
    cout<< "Enter Two Numbers:";
    cin>>a>>b;
    swap(a,b);
    getch();
}
