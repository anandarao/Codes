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

int main()
{
    int n;
	scanf("%d",&n);
	int res[n][n];
	int a[n];
	int flag[n];
	for(int i=0;i<n;i++)
    {
		scanf("%d",&a[i]);
		flag[i] = 0;
    }
	int row=0,col;
	for(int i=0;i<n;i++)
	{
		if(!flag[i])
		{
			col=0;
			res[row][col]=i;
			flag[i]=1;
			col++;
			int j = a[i]-1;
			flag[j]=1;
			while(j!=i)
			{
				res[row][col]=j;
				j = a[j]-1;
				flag[j]=1;
				col++;
			}
			res[row][col]=i;
			row++;
		}
	}
	printf("%d\n",row);
 
	for(int i=0;i<row;i++)
	{
		printf("%d ",res[i][0]+1);
		int j=1;
		while(res[i][j]!=res[i][0])
		{
			printf("%d ",res[i][j]+1);
			j++;
		}
		printf("%d\n",res[i][j]+1);
	}
    return 0;
}