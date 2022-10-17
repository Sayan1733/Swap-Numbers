#include <iostream>
#include <conio.h>
//Swap Numbers Using Third Variable
using namespace std;
int swap(int a,int b)
{
	int temp=0;
	temp=b;
	b=a;
	a=temp;
	cout<<"After Swapping The Numbers "<<a<<","<<b;
	return temp;
}
int main()
{
	int a,b;
	cout<<"Enter the Numbers:";
	cin>>a>>b;
	swap(a,b);
	getch();
	return 0;
}
