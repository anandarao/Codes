#include <iostream>

using namespace std;

int main()
{
    long long k,n,w,res;
    cin>>k>>n>>w;
    res = (k*w*(w+1))/2 - n;
    if(res>0)
        cout<<res;
    else
        cout<<0;
    return 0;
}