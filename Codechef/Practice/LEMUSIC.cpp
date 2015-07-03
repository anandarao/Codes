#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <vector>
#include <map>
 
using namespace std;
 
int main()
{
    long t,n;
    long long b,l;
    long long res;
    scanf("%ld",&t);
 
    while(t--)
    {
        map<long long,long long> band;
        vector<long long> s;
        scanf("%ld",&n);
        res = 0;
        while(n--)
        {
            cin>>b>>l;
            if(band.count(b)==0)
            {
                band[b] = l;
                s.push_back(l);
            }
            else
            {
                if(band[b]>l)
                {
                    res = res + band[b];
                    s.erase(find(s.begin(),s.end(),band[b]));
                    band[b] = l;
                    s.push_back(l);
                }
                else
                {
                    res = res + l;
                }
            }
        }
        sort(s.begin(),s.end());
        res = res * (long long)s.size();
        for(long i = 0; i < (int) s.size() ; i++)
        {
            res += s[i] * (i+1);
        }
        printf("%lld\n",res);
    }
    return 0;
} 