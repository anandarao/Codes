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
    int t;
    double T1,T2,t1,t2;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lf %lf %lf %lf",&T1,&T2,&t1,&t2);
            if(t1==0&&t2==0)
                printf("0.000000\n");
            else if(t1==0 || t2==0)
            {
                if(t1==0)
                {
                    swap(t1,t2);
                    swap(T1,T2);
                }
                double res;
                if(t1 >= T2)
                    {
                        if(T2>=T1)
                        {
                            res = (T1*T2 - 0.5*T1*T1)/(T1*T2);
                        }
                        else
                        {
                            res = (T1*T2 - 0.5*T2*T2 - T2*(T1-T2))/(T1*T2);
                        }
                    }
                else
                {
                    if(T2-t1 >= T1)
                    {
                        res = (T1*T2 - T1*T1 - T1*(T2-T1-t1))/(T1*T2);
                    }
                    else
                    {
                        if(T2>T1)
                        {
                            res = (T1*T2 - 0.5*(T2-t1)*(T2-t1) - 0.5*T1*T1)/(T1*T2);
                        }
                        else
                        {
                            res = (T1*T2 - 0.5*(T2-t1)*(T2-t1) - 0.5*T2*T2 - T2*(T1-T2))/(T1*T2);
                        }
                    }
                }
                printf("%lf\n",res);
            }
            else
            {
                double res1,res2,res;
                if(t1 >= T2)
                    {
                        if(T2>=T1)
                        {
                            res1 = (T1*T2 - 0.5*T1*T1)/(T1*T2);
                        }
                        else
                        {
                            res1 = (T1*T2 - 0.5*T2*T2 - T2*(T1-T2))/(T1*T2);
                        }
                    }
                else
                {
                    if(T2-t1 >= T1)
                    {
                        res1 = (T1*T2 - T1*T1 - T1*(T2-T1-t1))/(T1*T2);
                    }
                    else
                    {
                        if(T2>T1)
                        {
                            res1 = (T1*T2 - 0.5*(T2-t1)*(T2-t1) - 0.5*T1*T1)/(T1*T2);
                        }
                        else
                        {
                            res1 = (T1*T2 - 0.5*(T2-t1)*(T2-t1) - 0.5*T2*T2 - T2*(T1-T2))/(T1*T2);
                        }
                    }
                }
                if(t2 >= T1)
                    {
                        if(T1>T2)
                        {
                            res2 = (T1*T2 - 0.5*T2*T2)/(T1*T2);
                        }
                        else
                        {
                            res2 = (T1*T2 - 0.5*T1*T1 - T1*(T2-T1))/(T1*T2);
                        }
                    }
                else
                {
                    if(T1-t2 >= T2)
                    {
                        res2 = (T1*T2 - T2*T2 - T2*(T1-T2-t2))/(T1*T2);
                    }
                    else
                    {
                        if(T1>T2)
                        {
                            res2 = (T1*T2 - 0.5*(T1-t2)*(T1-t2) - 0.5*T2*T2)/(T1*T2);
                        }
                        else
                        {
                            res2 = (T1*T2 - 0.5*(T1-t2)*(T1-t2) - 0.5*T1*T1 - T1*(T2-T1))/(T1*T2);
                        }
                    }
                }
                res = res1+res2;
                printf("%lf\n",res);
            }
    }
    return 0;
}