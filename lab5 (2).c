#include<stdio.h>
int main()
{
    int n,h,m,s;
    scanf("%d",&n);
    h=n/3600;
    n=n%3600;
    m=n/60;
    s=n%60;
    s=n;
    printf("%02d:%02d:%02d",h,m,s);
}
