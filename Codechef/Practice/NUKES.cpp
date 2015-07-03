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
	long long a,n,k;
	cin>>a>>n>>k;
	n++;
	while(k--)
    {
        cout<<a%n<<" ";
        a /= n;
    }
    return 0;
}