## Given an array of integers print the result such that each value is equal to the procuts of all the elements of nums except array[i] without division operator.
Sample case:nums = [1,2,3,4]
Output=[24,12,8,6]


#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
	int i,n,j,count = 0,*arr,k=0;
	cout<<"Please enter the total number of elements:";
	cin>>n;
	arr = (int*)malloc(sizeof(int)*n);
	int prod = 1;
	for(i = 0;i<n;i++)
	{
		cin>>arr[i];
	}
	printf("[");
	for(i = 0,j=0;i<n;)
	{
		if(i!=j)
		{
			prod *= arr[j];
			j++;
			count++;
		}
		if(i == j)
		{
			j++;
		}
		if(count == n-1)
		{
			printf("%d,",prod);
			prod=1;
			i++;
			j=0;
			count = 0;
		}
	}
	printf("]");
	delete[] arr;
}
