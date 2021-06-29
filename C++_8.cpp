#include<iostream>
using namespace std;
int main()
{
	char ch;
	cout<<"Enter a character:";
	cin>>ch;
	
	switch(ch)
	{
		case 'a':
			cout<<"The given character is small letter a";
			break;
		case 'A':
			cout<<"The given character is capital letter A";
			break;
		default:
			cout<<"The given character is neither a nor A";
			break;
	}
	
	return 0;
}
