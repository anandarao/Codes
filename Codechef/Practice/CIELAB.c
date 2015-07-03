#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {
 
    int a,b,c;
    scanf("%d %d",&a,&b);
    c=a-b;
    if(c%10>1)
        c--;
    else
        c++;
    printf("%d",c);
    return 0;
}