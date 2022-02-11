#include<stdio.h>
int main()
{
    int x[]={2,8,10,5,6,13,4},i,a,cnt1=0,cnt2=0;
    int size=7;

    for(i=0;i<size;i++)
    {
        if((x[i]+x[i+1])%2==0)
            cnt1++;
        else
            cnt2++;
    }
    printf("even%d\n, odd%d\n",cnt1,cnt2);
}
