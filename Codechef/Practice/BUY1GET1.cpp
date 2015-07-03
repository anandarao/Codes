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
	string str;
	cin>>t;
	while(t--)
    {
        cin>>str;
        int c[52]={};
        int res=0;
        for(int i = 0;str[i]!='\0';i++)
        {
            if(str[i]>='a')
                c[str[i]-97]++;
            else
                c[str[i]-39]++;
        }
        for(int i =0;i<52;i++)
            res+= c[i]/2 + c[i]%2;
        cout<<res<<endl;
    }
    return 0;
}