#include<stdio.h>
int main()
{
    int n,i,c=0,d=0,person=0,teen,notT;
    scanf("%d",&n);
    for(i=1; i<=n; i++){
        scanf("%d",&person);
        if((person>13)&&(person<19)){
            teen=person;
            c++;
        }
        else{
            notT=person;
            d++;
        }
    }
    for(i=1;i<=n; i++){
        if(c%i==0 && d%i==0){
            printf("ratio= %d:%d",c/i, d/i);
            break;
        }
        else{
            printf("ratio= %d:%d",c,d);
            break;
        }
    }
}
