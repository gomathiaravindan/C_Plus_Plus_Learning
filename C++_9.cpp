#include<iostream>
using namespace std;
int addition(int,int);

int main()
{
	int a,b,sum;
	cout<<"Enter 2 numbers for addition:";
	cin>>a>>b;
	sum = addition(a,b);
	cout<<"The addition of a and b is:"<<sum;
	return 0;
	
}

int addition(int a, int b)
{
	return a+b;
}
