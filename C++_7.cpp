#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter a number:";
	cin>>n;
	
	if(n > 0)
	{
		cout<<"The number is greater than zero and positive"<<endl;
		if(n % 2 == 0)
		{
			cout<<"Great!! It is a even number too";
		}
	}
	else if(n == 0)
	{
		cout<<"The given number is zero";
	}
	else 
	{
		cout<<"The given number is negative";
	}
	return 0;
}
