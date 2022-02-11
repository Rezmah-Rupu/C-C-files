#include<stdio.h>
#include<string.h>

int main()
{
    char name[50];
    int i, p, l = 0, s = 0;
    gets(name);
    p = strlen(name);
    for(i = 0; i < p; i++){
        if( (name[i] >= 'A' && name[i] <= 'Z') || (name[i] >= 'a' && name[i] <= 'z') ){
            l++;
        }
        if (name[i] == ' '){
            s++;
        }
    }
    printf("%d ", l - s);
}
