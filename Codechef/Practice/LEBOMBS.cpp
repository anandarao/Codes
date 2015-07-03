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
	int t,n;
	string str;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    cin>>str;
	    int res = 0;
	    int flag[n];
	    for(int i=0;i<n;i++)
            flag[i]=1;
	    for(int i=0;i<n;i++)
            if(str[i]=='1'||str[i+1]=='1')
            {
                flag[i]=0;
                if(i+1!=n)
                    flag[i+1]=0;
            }
        for(int i=0;i<n;i++)
        {
            res+=flag[i];
        }
 
        cout<<res<<endl;
	}
	return 0;
}