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
    if(n%2 == 0)
        return 0;

    for(long long i=3;i<=sqrt(n);i+=2)
        if(n%i == 0)
            return 0;
    return 1;
}*/

/*int is_palindrome(long long n)
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

/*long long C(long long n, long long r) {
    if(r > n / 2) r = n - r; // because C(n, r) == C(n, n - r)
    long long ans = 1;
    long i;

    for(i = 1; i <= r; i++) {
        ans *= n - r + i;
        ans /= i;
    }

    return ans;
}*/

int main()
{
    int n1,n2,i,j;
    long long sum1,sum2,sum;
    int a[100002],b[100002];
    scanf("%d",&n1);
    while(n1)
    {
        for(i=0;i<n1;i++)
            scanf("%d",&a[i]);
        scanf("%d",&n2);
        for(i=0;i<n2;i++)
            scanf("%d",&b[i]);
        sum1=sum2=sum=0;
        i=0;j=0;
        while(i!=n1 && j!=n2)
        {
            if(a[i]<b[j])
            {
                sum1+=a[i];
                i++;
            }
            else if(a[i]>b[j])
            {
                sum2+=b[j];
                j++;
            }
            else
            {
                sum+= a[i] + max(sum1,sum2);
                sum1=0;
                sum2=0;
                i++;
                j++;
            }
        }
        while(i!=n1)
        {
            sum1+=a[i++];
        }
        while(j!=n2)
        {
            sum2+=b[j++];
        }
        sum += max(sum1,sum2);
        printf("%lld\n",sum);
        scanf("%d",&n1);
    }
}
