#include<iostream>
using namespace std;
void swap(int *,int *);
int main()
{
	int a,b;
	cout<<"Enter 2 numbers:";
	cin>>a>>b;
	cout<<"Before swapping:"<<a<<" "<<b<<endl;
	swap(&a,&b);
	return 0;
}

void swap(int *a,int *b)
{
	*a = *a ^ *b;
	*b = *a ^ *b;
	*a = *a ^ *b;
	
	cout<<"The swapped numbers are:"<<*a<<" "<<*b;
}
