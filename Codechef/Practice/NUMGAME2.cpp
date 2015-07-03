#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <stack>
#include <queue>
#include <vector>
#include <set>
#include <string.h>
#include <map>
#include <string>
#include <math.h>
 
using namespace std;
 
int main()
{
	long long t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		if(n%4 == 1)
			cout<<"ALICE"<<endl;
		else
			cout<<"BOB"<<endl;
	}
	return 0;
}