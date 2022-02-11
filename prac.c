#include<stdio.h>
int main()
{
    int n,i,max,a,b,c,x[200];
    scanf("%d",&n);
    for(i=0; i<=n; i++){
        scanf("%d",&x[i]);
    }
    max=x[0];
    for(a=1; a<n; a++){
        if(x[a]>max){
            max=x[a];
            c=0;
        }
        for(b=0; b<n; b++){
            if(x[b]==max){
                c++;
            }
        }
    }
    printf("%d",b);
}
