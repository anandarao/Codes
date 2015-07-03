#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define l long

#define MAX 3010
#define MOD 1000000007

#define fin(a,n) for(ll i=a;i<=n;i++)
#define fint(a,n) for(int i=a;i<=n;i++)
#define fjnt(a,n) for(int j=a;j<=n;j++)
#define fjn(a,n) for(ll j=a;j<=n;j++)
#define fde(a,n) for(ll i=n;i>=a;i--)

#define sd(a) scanf("%d",&a)
#define sld(a) scanf("%ld",&a)
#define slld(a) scanf("%lld",&a)

#define pd(a) printf("%d",a)
#define pld(a) printf("%ld",a)
#define plld(a) printf("%lld",a)
#define pn printf("\n")
#define ps printf(" ")

#define mp make_pair;
#define pb push_back;

int main()
{
    map<int,string> m;
    m[0] = "zero";
    m[1] = "one";
    m[2] = "two";
    m[3] = "three";
    m[4] = "four";
    m[5] = "five";
    m[6] = "six";
    m[7] = "seven";
    m[8] = "eight";
    m[9] = "nine";
    m[10] = "ten";  
    m[11] = "eleven";
    m[12] = "twelve";
    m[13] = "thirteen"; 
    m[14] = "fourteen";     
    m[15] = "fifteen";  
    m[16] = "sixteen";  
    m[17] = "seventeen";        
    m[18] = "eighteen"; 
    m[19] = "nineteen"; 
    m[20] = "twenty";
    m[30] = "thirty";
    m[40] = "forty";    
    m[50] = "fifty";    
    m[60] = "sixty";    
    m[70] = "seventy";  
    m[80] = "eighty";   
    m[90] = "ninety";   
    m[100] = "hundred";
    int s;
    sd(s);
    if(m.count(s))
        cout<<m[s];
    else
    {
        cout<<m[s-s%10]<<"-"<<m[s%10];
        pn;
    }

    return 0;
}