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
 
int main()
{
    int t,l,b;
    float r;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&b,&l);
        r = sqrt(pow(l,2)-pow(b,2));
        printf("%f ",r);
        r = sqrt(pow(l,2)+pow(b,2));
        printf("%f\n",r);
    }
    return 0;
}