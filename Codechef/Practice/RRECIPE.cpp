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

/*int is_prime(long long n)
{
    for(long long i=2;i<=sqrt(n);i++)
        if(n%i == 0)
            return 0;
    return 1;
}

int is_palindrome(long long n)
{
    long long rev = 0,num = n;
    while(num)
    {
        rev = rev * 10 + num % 10;
        num /= 10;
    }
    if(rev==n)
        return 1;
    else
        return 0;
}*/


int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char str[1000005];
        scanf(" %s",str);
        int n = strlen(str);
        long long res = 1;
        int i = 0;
        int j = n-1;
        int flag = 1;
        while(i<=j)
        {
            if(str[i]!='?' && str[j]!='?')
            {
                if(str[i]!=str[j])
                {
                    flag = 0;
                    break;
                }
            }
            else
            {
                if(str[i]=='?' && str[j]=='?')
                {
                    res = (res*26)%10000009;
                }
            }
            i++;
            j--;
        }
        if(flag)
            printf("%lld\n",res);
        else
            printf("0\n");
    }
    return 0;
}
