#include <iostream>
//#include <algorithm>
#include <stdio.h>
//#include <stack>
//#include <queue>
//#include <vector>
//#include <set>
#include <string.h>
//#include <map>
//#include <math.h>
//#include <conio.h>
#include <cmath>

using namespace std;

int is_prime(long long n)
{
    if(n==1)
        return 0;
    int flag = 1;
    long long j = (long long)sqrt(n);
    for(long long i = 2;i <= j;i++)
        if(n%i==0)
        {
            flag = 0;
            break;
        }
    return flag;
}
int main()
{
    int t;
    long long m,n,i;
    cin>>t;
    while(t--)
    {
        cin>>m>>n;
        for(i=m;i<=n;i++)
            if(is_prime(i))
                cout<<i<<endl;
    }
    return 0;
}
