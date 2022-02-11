#include<stdio.h>
int main()
{

    int x,y,sum;
    scanf("%d",&x);
    for( ; ; )
    {
        y=x%10;
        x=x/10;
        sum=sum+y;
        if(x==0)
        {
            break;
        }
    }
    printf("%d",sum);
}
