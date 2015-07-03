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

/*long long pow_mod(ll x, ll y, ll z)
{
    ll number = 1;
    while (y)
    {
        if (y & 1)
            number = number * x % z;
        y >>= 1;
        x = (ll)x * x % z;
    }
    return number;
}*/

/*long long gcd(long long a,long long b)
{
    while(b)
        b ^= a ^= b ^= a %= b;
    return a;
}*/

/*long long _merge(long *a,long low,long mid,long high)
{
    long long inv_count = 0;
    long i = low , j = mid , k = 0;
    long c[200001];
    while (i <= mid-1 && j <= high)
    {
        if(a[i] <= a[j])
        {
            c[k++] = a[i++];
        }
        else
        {
            c[k++] = a[j++];
            inv_count += mid - i;
        }
    }
    while(i <= mid-1)
        c[k++] = a[i++];
    while(j <= high)
        c[k++] = a[j++];
    for(i = 0 ; i < k ; i++)
        a[i+low] = c[i];
    return inv_count;
}

long long merge_sort(long *a,long low,long high)
{
    long long inv_count = 0;
    long mid;
    if(low<high)
    {
        mid = (low+high)/2;
        inv_count = merge_sort(a,low,mid);
        inv_count += merge_sort(a,mid+1,high);
        inv_count += _merge(a,low,mid+1,high);
    }
    return inv_count;
}*/

/*int is_palindrome(char s[],int i,int j)
{
    while(i<=j)
        if(s[i++]!=s[j--])
            return 0;
    return 1;
}*/

int main()
{
    int k,i;
    char s[1002];
    scanf(" %s",s);
    scanf("%d",&k);
    int n = strlen(s);
    if(n%k != 0)
    {
        printf("NO\n");
        return 0;
    }
    
    if(n>=k)
    {
        int num = n/k;
        int p,q;
        int flag=1;
        for(i=0;i<n;i+=num)
        {
            p=i;
            q=i+num-1;
            while(p<=q)
            {
                if(s[p++]!=s[q--])
                {
                    flag = 0;
                    break;
                }
            }
            if(!flag)
                break;
        }
        if(flag)
            printf("YES");
        else
            printf("NO");
    }
    else
        printf("NO");
    return 0;
}