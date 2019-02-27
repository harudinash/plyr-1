#include <stdio.h>

int main()
{
    int i,j,kl;
    char a[10000];
    printf("Input :\n");
    gets(a);
    printf("Output :\n");
    for(i=0;a[i]!='\0';i++)
    {
        printf("%c",a[i]);
        i=i+2;
    }
    return 0;
}
