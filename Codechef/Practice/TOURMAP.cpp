#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <stack>
#include <queue>
#include <vector>
#include <set>
#include <string.h>
#include <map>
#include <math.h>
 
using namespace std;
 
int main()
{
    
    int t,n,num,temp3;
    long sum;
    string temp1,temp2,key;
    scanf("%d",&t);
    while(t--)
    {
        vector<string> sl,sr;
        map<string,int> ml;
        map<string,int> mr;
        map<string,pair<string,int> > link;
        sum = 0;
        scanf("%d",&n);
        num = n;
        while(--num)
        {
            //scanf(" %s %s %d$",temp1,temp2,&temp3);
            cin>>temp1>>temp2;
            scanf("%d$",&temp3);
            ml[temp1] = 1;
            if(mr[temp1] != 1)
                mr[temp1] = 0;
            mr[temp2] = 1;
            if(ml[temp2] != 1)
                ml[temp2] = 0;
            link[temp1] = make_pair(temp2,temp3);
            sum += temp3;
            sl.push_back(temp1);
            sr.push_back(temp2);
        }
 
        for(int i = 0;i<(int)sl.size();i++)
        {
            if( ml[sl[i]]==1 && mr[sl[i]]==0)
            {
                key = sl[i];
                break;
            }
        }
        while(--n)
        {
            //printf("%s %s %d$\n",key,link[key],price[key]);
            cout<<key<<" "<<link[key].first<<" "<<link[key].second<<"$"<<endl;
            key = link[key].first;
        }
        //printf("%ld\n",sum);
        cout<<sum<<"$"<<endl;
    }
    return 0;
} 