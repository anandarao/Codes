#include <iostream>
 
using namespace std;
 
void print(void)
{
	char ch,ch2,ch3;
	cin>>ch;
	if(ch=='(')
	{
		print();
		cin>>ch;
	}
	else
		cout<<ch;
	cin>>ch2;
	cin>>ch3;
	if(ch3=='(')
		{
			print();
			cin>>ch;
		}
	else
		cout<<ch3;
	cout<<ch2;
	return;
}
 
int main()
{
	long t;
	char ch;
	cin>>t;
	while(t--)
	{
		cin>>ch;
		print();
		cin>>ch;
		cout<<endl;
	}
	return 0;
} 