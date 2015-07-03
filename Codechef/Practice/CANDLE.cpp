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
    int t;
    cin>>t;
    while(t--)
    {
        pair<int,int> a[10];
        for(int i=0;i<10;i++)
        {
            cin>>a[i].first;
            a[i].second = i;
        }
        sort(a,a+10);
        if(a[0].first==0)
        {
            if(a[0].second!=0)
                cout<<a[0].second<<endl;
            else
            {
                if(a[1].first==0)
                    cout<<a[1].second<<endl;
                else
                    cout<<a[1].second<<0<<endl;
            }
        }
        else
        {
            if(a[0].second!=0)
            {
                while(a[0].first--)
                    cout<<a[0].second;
                cout<<a[0].second<<endl;
            }
            else
            {
                if(a[1].first == a[0].first)
                {
                    while(a[1].first--)
                        cout<<a[1].second;
                    cout<<a[1].second<<endl;
                }
                else
                {
                    cout<<1;
                    while(a[0].first--)
                        cout<<a[0].second;
                    cout<<a[0].second<<endl;
                }
            }
        }
    }
	return 0;
}