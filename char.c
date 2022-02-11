#include<stdio.h>
#include<string.h>
int main()
{
    char name[40];
    int i, p, c = 0;
    //for(i = 0; i < 40; i++){
        gets(name);
        //scanf("%s ", &name);
    p = strlen(name);
    //printf("%s", name);
    for(i = 0; i < p; i++){
        if(name[i] >= 'A' && name[i] <= 'Z'){
                c++;
                 }
    }
   printf("%d ", c);
}
