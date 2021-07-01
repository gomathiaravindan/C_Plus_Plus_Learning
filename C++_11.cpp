#include<iostream>
using namespace std;
int main()
{
	int arr[20],i,n,sum = 0;
	
	cout<<"Enter the size of the array:";
	cin>>n;
	
	for(i = 0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	for(i = 0;i<n;i++)
	{
		sum += arr[i];
	}
	
	cout<<"The sum of the array is:"<<sum;
	
	return 0;
}
