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
	int t,a[100000],n;
	cin>>t;
	while(t--)
    {
        cin>>n;
        for(int i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n);
        for(int i=1;i<n-1;i+=2)
            swap(a[i],a[i+1]);
        for(int i=0;i<n;i++)
            cout<<a[i]<<" ";
        cout<<endl;
    }
    return 0;
}