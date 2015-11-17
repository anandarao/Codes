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
    char str[100003];
    int i =0;

    stack<char> s;
    scanf(" %s",&str);
    while(str[i] != '\0')
    {
        if((int)s.size() == 0)
        {
            s.push(str[i]);
            i++;
            continue;
        }

        if(s.top() == str[i])
            s.pop();
        else
            s.push(str[i]);
        i++;
    }

    if(s.empty())
        printf("Yes");
    else
        printf("No");
    return 0;
}