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
	long long int t,x,y,k,n,req;
	int flag,p,c;
	cin>>t;
	while(t--)
    {
        cin>>x>>y>>k>>n;
        flag=0;
        req = x-y;
        while(n--)
        {
            cin>>p>>c;
            if(p >= req && c <= k)
                flag = 1;
        }
        if(flag)
            cout<<"LuckyChef"<<endl;
        else
            cout<<"UnluckyChef"<<endl;
    }
    return 0;
}