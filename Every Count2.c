#include<stdio.h>
#include<string.h>



int main()
{
    char name[50];
    int i, j, p, c, q;
    gets(name);
    p = strlen(name);
    for(i = 0; i < p; i++)
    {
        c = 0;
        for(j = i; j < p; j++)
        {
            if(name[i] == name[j])
            {
                c++;
                name[i] = '0';
                printf("%s\n",name);
            }

        }

//        printf("%c = %d\n",name[i], c);
    }
}

