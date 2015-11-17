#include <iostream>

using namespace std;

int main()
{
    long n;
    pair<long long,long long> t[100001];
    cin>>n;
    for(long i=0;i<n;i++)
        cin>>t[i].first>>t[i].second;
    if(n<=2)
    {
        cout<<n;
    }
    else
    {
        long count = 2;
        for(long i=1;i<n-1;i++)
        {
            long long x = t[i].first,h = t[i].second;
            if(x-h > t[i-1].first)
                count++;
            else if(x+h < t[i+1].first)
            {
                count++;
                t[i].first += h;
            }
        }
        cout<<count;
    }
    return 0;
}