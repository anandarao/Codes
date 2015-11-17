#include <stdio.h>
#include <algorithm>

using namespace std;

int main()
{
    int n,i;
    float a[100003];
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%f",&a[i]);
    sort(a,a+n);
    float sum = a[0];
    int res = 1;
    for(i=1;i<n;i++)
        if(a[i]>=sum)
        {
            sum+=a[i];
            res++;
        }
    printf("%d",res);
}