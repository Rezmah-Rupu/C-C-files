#include<stdio.h>
int main()
{

    int i,a,b,bigdigit=0;
    scaqnf("%d",&a);
    for(i=1; i<=a; i++){
        b=a%10;
        a=a/10;
        if(b>bigdigit){
        bigdigit=b;
    }
    }
    printf("%d",bigdigit);
}

