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
    long long m,temp2,temp3;
    scanf("%lld",&m);
    long long res = 0;
    char ch;
    string temp;

    set< pair<long long,long long> > s;
    map<string,pair<long long,long long> > name;
    while(m--)
    {

        scanf(" %c",&ch);
        if(ch=='A')
        {
            cin>>temp>>temp2>>temp3;
            if(!name.count(temp))
            {
                set< pair<long long,long long> >::iterator y = s.insert(make_pair(temp2,temp3)).first;
                name[temp] = make_pair(temp2,temp3);
                if (s.size() == 1)
                    {
                        res = 0;
                    }
                else
                {
                    if(y == s.begin())
                    {
                        set< pair<long long,long long> >::iterator x = y;
                        res += x->second * (++x)->second;
                    }
                    else if (++y == s.end())
                    {
                        set< pair<long long,long long> >::iterator x = --y;
                        res += x->second * (--x)->second;
                    }
                    else
                    {
                        set< pair<long long,long long> >::iterator x = --y;
                        res += x->second * (--x)->second + y->second * (++y)->second - (x)->second * (y)->second;
                    }
                }
            }
        }
        else
        {
            cin>>temp;
            if(name.count(temp))
            {
                pair<long long,long long> p = name[temp];
                set< pair<long long,long long> >::iterator y = s.find(p);
                if(s.size()==1)
                {
                	res = 0;
                }
                else
                {
                	if (y == s.begin())
                	{
                	    set< pair<long long,long long> >::iterator x = y;
                	    res = res - x->second * (++x)->second;
                	}
                	else if (++y == s.end())
                	{
                	    set< pair<long long,long long> >::iterator x = --y;
                	    res = res - x->second * (--x)->second;
            	 	}
                	else
                	{
                    	set< pair<long long,long long> >::iterator x = --y;
                    	res = res - x->second * (--x)->second - y->second * (++y)->second + (x)->second * (y)->second;
                	}
                }
                s.erase(p);
            }
        }
        printf("%lld",res);
        if(m)
            printf("\n");
    }
    return 0;
}


