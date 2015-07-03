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
	long long int t,n,c,sum,temp;
	cin>>t;
	while(t--)
    {
        sum = 0;
        cin>>n>>c;
        while(n--)
        {
            cin>>temp;
            sum+=temp;
        }
        if(sum<=c)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
    return 0;
}