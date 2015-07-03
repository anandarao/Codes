#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <stack>
#include <queue>
#include <vector>
#include <set>
#include <string.h>

using namespace std;

int main()
{
    int n,temp,i;
    scanf("%d",&n);
    while(n)
    {
        queue<int> q;
        stack<int> s;
        s.push(1001);
        for(i=0;i<n;i++)
        {
            scanf("%d",&temp);
            q.push(temp);
        }
        int c = 1;
        while(q.size())
        {
            if(q.front() == c)
                {
                    c++;
                    q.pop();
                }
            else if(s.top()==c)
                {
                    c++;
                    s.pop();
                }
            else
                {
                    s.push(q.front());
                    q.pop();
                }
        }
        while(s.size()>1)
        {
            if(s.top() == c)
            {
                c++;
                s.pop();
            }
            else
            {
                break;
            }
        }

        if(c == n+1)
            printf("yes\n");
        else
            printf("no\n");
        scanf("%d",&n);
    }
    return 0;
}