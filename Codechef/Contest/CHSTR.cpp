#include <cstdio>
#include <cstring>
#include <algorithm>
#include <iostream>
#include <vector>
#include <map>
using namespace std;
 
#define MAX 5000
#define MOD 1000000007
 
long long triangle[MAX + 1][MAX + 1];
 
void makeTriangle() {
    int i, j;
    triangle[0][0] = 1;
 
    for(i = 1; i <= MAX; i++) {
        triangle[i][0] = 1;
        for(j = 1; j <= i; j++) {
            triangle[i][j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
            if(triangle[i][j]>=MOD)
                triangle[i][j]%=MOD;
        }
    }
}
 
#define SA_N 10001
#define SA_LN 5005
int lg, len, p[SA_LN][SA_N], sa[SA_LN];
int la[SA_N], lb[SA_N], lc[SA_N];
int bucket[SA_N], tla[SA_N], tlb[SA_N], tlc[SA_N];
void constructSA(int *a, int leng) {
    len = leng;
    lg = 1;
    for(int i=0; i<len; i++) p[0][i] = a[i];
    sort(a, a+len);
    map <int, int> M;
    for(int i=0; i<len; i++) if(i==0 || (a[i] != a[i-1])) M[a[i]] = i;
    for(int i=0; i<len; i++) p[0][i] = M[p[0][i]];
    for(int skip=1; skip/2 < len; skip<<=1, lg++) {
        for(int i=0; i<len; i++) {
            la[i] = p[lg-1][i];
            lb[i] = i+skip < len ? p[lg-1][i+skip] : -1;
            lc[i] = i;
        }
        for(int i=0; i<len+10; i++) bucket[i] = 0;
        for(int i=0; i<len; i++) bucket[lb[i]+1]++;
        for(int i=1; i<len+10; i++) bucket[i] += bucket[i-1];
        for(int i=len-1; i>=0; i--) {
            int wer = (bucket[lb[i]+1]--)-1;
            tla[wer] = la[i]; tlb[wer] = lb[i]; tlc[wer] = lc[i];
        }
        for(int i=0; i<len; i++) la[i] = tla[i], lb[i] = tlb[i], lc[i] = tlc[i];
        for(int i=0; i<len+10; i++) bucket[i] = 0;
        for(int i=0; i<len; i++) bucket[la[i]]++;
        for(int i=1; i<len+10; i++) bucket[i] += bucket[i-1];
        for(int i=len-1; i>=0; i--) {
            int wer = (bucket[la[i]]--)-1;
            tla[wer] = la[i]; tlb[wer] = lb[i]; tlc[wer] = lc[i];
        }
        for(int i=0; i<len; i++) la[i] = tla[i], lb[i] = tlb[i], lc[i] = tlc[i];
        for(int i=0; i<len; i++) {
            p[lg][lc[i]] = (i>0 && la[i-1]==la[i] && lb[i-1]==lb[i])? p[lg][lc[i-1]] : i;
        }
    }
    lg--;
    for(int i=0; i<len; i++) sa[p[lg][i]] = i;
    // for(int i=0; i<len; i++) printf("%d ",p[lg][i]); printf("\n");
    //p[lg][] has the rank of every index.
}
void constructSA(char *t, int leng) {
    int *a = new int[leng];
    for(int i=0; i<leng; i++) a[i] = int(t[i]);
    constructSA(a, leng);
    delete a;
}
int lcp(int i, int j) {
    if(i==j) return len - i;
    int ans = 0;
    for(int k = lg; k>=0 && i<len && j<len; k--)
        if(p[k][i] == p[k][j])
            ans += (1<<k), i += (1<<k), j += (1<<k);
    return ans;
}
 
#define N SA_N
int stk[N], LCP[N], L[N], R[N];
vector <int> li[N];
char s[N];
long long d[N];
int main() {
    makeTriangle();
    int t,n;
    long long q;
    scanf("%d", &t);
    while(t--) {
        scanf("%d %lld",&n,&q);
        scanf(" %s", s);
        constructSA(s, n);
        // cerr << string(s) << endl;
        for(int i=0; i<=len+2; i++) li[i].clear(), d[i] = 0;
        for(int i=0; i<len-1; i++) li[ (LCP[i] = lcp(sa[i], sa[i+1])) ].push_back(i);
        int top = 0;
        for(int i=0; i<len-1; i++) {
            while(top && LCP[stk[top-1]] >= LCP[i]) top--;
            if(top == 0) L[i] = -1;
            else L[i] = stk[top-1];
            stk[top++] = i;
        }
        top = 0;
        for(int i=len-2; i>=0; i--) {
            while(top && LCP[stk[top-1]] >= LCP[i]) top--;
            if(top == 0) R[i] = len-1;
            else R[i] = stk[top-1];
            stk[top++] = i;
        }
        for(int i=len; i; i--) {
            int j = 0;
            while(j < li[i].size()) {
                int mini = i;
                int k = li[i][j];
                if(L[k] != -1 && mini > i - LCP[L[k]]) mini = i - LCP[L[k]];
                if(R[k] != len-1 && mini > i - LCP[R[k]]) mini = i - LCP[R[k]];
                int range = R[k] - L[k];
                d[range] += (long long)mini;
                while(j < li[i].size() && li[i][j] < R[k]) j++;
            }
        }
 
        long long res[len+1][2];
 
        for(int j=1;j<=len;j++)
        {
            res[j][1] = d[j];
            for(int i=1;i<j;i++)
            {
                res[i][1] = res[i][0] + d[j]*triangle[j][i];
                if(res[i][1]>=MOD)
                    res[i][1]%=MOD;
            }
            for(int i=1;i<=j;i++)
                res[i][0] = res[i][1];
        }
        long long k;
        while(q--)
        {
            scanf("%lld",&k);
            if(k>n)
                printf("0\n");
            else
            {
                if(k==1)
                    printf("%lld\n",(long long)(n*(n+1))/2);
                else
                    printf("%lld\n",res[k][0]);
            }
        }
    }
    return 0;
} 