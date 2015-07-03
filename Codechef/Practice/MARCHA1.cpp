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
 
int calc(vector<int> v,int i,int num)
{
    int sum = 0,j=1,pos=0;
    while(j<num)
    {
        if(i&j)
            sum+=v[pos];
        pos++;
        j*=2;
    }
    return sum;
}
int main()
{
	int t,n,m,temp;
	cin>>t;
	while(t--)
	{
	    vector<int> v;
		cin>>n>>m;
		int flag =0;
        for(int i = 0;i<n;i++)
        {
            cin>>temp;
            if(temp<m)
                v.push_back(temp);
            if(temp==m)
                flag = 1;
        }
        if(flag)
            cout<<"Yes"<<endl;
        else
        {
            int num = v.size();
            num = pow(2,num);
            for(int i = 3;i<num;i++)
            {
                flag = 0;
                if(calc(v,i,num)==m)
                    flag = 1;
                if(flag)
                    break;
            }
            if(flag)
                cout<<"Yes"<<endl;
            else
                cout<<"No"<<endl;
;        }
	}
	return 0;
}