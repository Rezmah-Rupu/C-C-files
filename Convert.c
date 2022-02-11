#include<stdio.h>
#include<string.h>

int main()
{
    char x, name[50];
    int i, p, c = 0;
    gets(name);
    p = strlen(name);
    for(i = 0; i < p; i++){
        x = name[i];
        if(name[i] >= 'A' && name[i] <= 'Z'){
            name[i] = name[i] + 32;
    }
    else if(name [i] >= 'a' && name[i] <= 'z'){
        name[i] = name[i] - 32;
    }
    }
    for(i = 0; i < p; i++){
        printf("%c", name[i]);
    }
}
