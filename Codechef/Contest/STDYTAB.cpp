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
#include <cmath>
 
using namespace std;

#define MAX 5000
#define MOD 1000000000
 
long long triangle[MAX + 1][MAX + 1];
 
void makeTriangle() {
    long long i, j;
 
 
    triangle[0][0] = 1;
 
    for(i = 1; i <= MAX; i++) {
        triangle[i][0] = 1;
        for(j = 1; j <= i; j++) {
            triangle[i][j] = (triangle[i - 1][j - 1] + triangle[i - 1][j])%MOD;
        }
    }
}
 
long long solve(long long n,long long m)
{
    long long sum[3][m+1];
    long long i,j;
    for(i=0;i<=m;i++)
        sum[0][i] = triangle[i+m-1][m-1];
    sum[1][0]=1;
    for(i=1;i<=m;i++)
    {
        sum[1][i] = (sum[0][i] +sum[1][i-1]);
        if(sum[1][i]>=MOD)
            sum[1][i]%=MOD;
    }
    for(i=2;i<=n;i++)
    {
        sum[2][0]=1;
        for(j=1;j<=m;j++)
        {
            sum[2][j] = ( ( sum[0][j] * sum[1][j] )%MOD + sum[2][j-1]%MOD );
            if(sum[2][j]>=MOD)
                sum[2][j]%=MOD;
        }
        for(j=0;j<=m;j++)
        {
            sum[1][j] = sum[2][j];
        }
    }
    return sum[1][m];
}
 
int main()
{
    long long t,n,m;
    scanf("%lld",&t);
    makeTriangle();
    while(t--)
    {
        scanf("%lld %lld",&n,&m);
        printf("%lld\n",solve(n,m));
    }
    return 0;
}