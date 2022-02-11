#include<stdio.h>
int main ()
{
    int i,n,a,x[100],sum=0;
    scanf("%d",&n);
    for(i=0; i<n; i++){
        scanf("%d",&x[i]);

        sum=sum+x[i];

      }

       printf("%d",sum);

}
