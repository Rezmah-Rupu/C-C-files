#include<stdio.h>
int main()
{
    int i,a,b,bigDigit=0;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {    //512
        b=a%10;
        a=a/10;
        if(b>bigDigit){
            bigDigit=b;
        }
    }
    printf("%d",bigDigit);
}


