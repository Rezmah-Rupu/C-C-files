#include<stdio.h>
int main()
{
    int x[100],i,n,range;
    int max=x[0],min=x[0];
    scanf("%d",&n);
    for(i=0;i<n;i++){
            scanf("%d",&x[i]);
    }
     for(i=0;i<n; i++){
            if (x[i]>max)
        {
            max=x[i];
        }
        else if(min>x[i]){
            min=x[i];
        }
    }
    range = max-min;
    printf(" max =%d\nmin = %d\nrange = %d ",max,min,range);
}
