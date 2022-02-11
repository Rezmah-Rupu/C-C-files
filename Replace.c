#include<stdio.h>
#include<string.h>


int main()
{
    char name[50];
    int i, p;
    gets(name);
    p = strlen(name);
    for(i = 0; i < p; i++){
        if(name[i] == 'a' || name[i] == 'e' || name[i] == 'i' || name[i] == 'o' || name[i] == 'u' || name[i] == 'A' || name[i] == 'E' || name[i] == 'I' || name[i] == 'O' || name[i] == 'U' ){
            name[i] = '?';
        }
    }
    for(i = 0; i < p; i++){
        printf("%c", name[i]);
    }
}
