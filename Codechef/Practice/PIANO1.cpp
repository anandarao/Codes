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
 
int  main()
{
	int t,n;
	string str;
	cin>>t;
	while(t--)
	{
		cin>>str;
		cin>>n;
		int num = 12*n;
		int x = 1;
		int res = 0;
		while(x<=num)
        {
            for(int i=0;str[i]!='\0';i++)
                if(str[i]=='T')
                    x += 2;
                else
                    x += 1;
            if(x<=num)
                res += num - x + 1;
        }
        cout<<res<<endl;
	}
	return 0;
}