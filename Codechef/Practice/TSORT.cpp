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
 
void _merge(long *a,long low,long mid,long high)
{
    long i = low , j = mid , k = 0;
    long c[1000000];
    while (i <= mid-1 && j <= high)
    {
        if(a[i] <= a[j])
        {
            c[k++] = a[i++];
        }
        else
        {
            c[k++] = a[j++];
        }
    }
    while(i <= mid-1)
        c[k++] = a[i++];
    while(j <= high)
        c[k++] = a[j++];
    for(i = 0 ; i < k ; i++)
        a[i+low] = c[i];
}
 
void merge_sort(long *a,long low,long high)
{
    long mid;
    if(low<high)
    {
        mid = (low+high)/2;
        merge_sort(a,low,mid);
        merge_sort(a,mid+1,high);
        _merge(a,low,mid+1,high);
    }
}
 
int main()
{
    long t;
    scanf("%ld",&t);
    long a[t];
    for(long i=0;i<t;i++)
        scanf("%ld",&a[i]);
    merge_sort(a,0,t-1);
    for(long i=0;i<t;i++)
        printf("%ld\n",a[i]);
	return 0;
}