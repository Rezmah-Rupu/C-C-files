#include<stdio.h>
int main()
{
    int n,h,m,s,c=0;
    scanf("%d",&n);
    h=n/3600;
    n=n%3600;
    m=n/60;
    s=n%60;
    if(h>=12){
        h=h-12;
        c++;
    }
    if(c=0){
        printf("%02d: %02d : %02d AM",h,m,s);
    }
    else{
        printf("%02d: %02d: %02d PM", h, m, s);
    }
}
