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
	int t,n,m,temp;
	cin>>t;
	while(t--)
	{
	    cin>>n>>m;
	    vector<int> v;
	    for(int i=1;i<=n;i++)
            v.push_back(i);
        while(m--)
        {
            cin>>temp;
            v.erase(find(v.begin(),v.end(),temp));
        }
 
        for(int i=0;i<v.size();i+=2)
            cout<<v[i]<<" ";
        cout<<endl;
 
        for(int i=1;i<v.size();i+=2)
            cout<<v[i]<<" ";
        cout<<endl;
        v.clear();
	}
	return 0;
}