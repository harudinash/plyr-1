#include <stdio.h>

int main()
{
    int a[10000],i,j,k=0,m,l;
    char b[10000];
    printf("Input :\n");
    gets(b);
    printf("Output :\n");
    
    for(i=0;b[i]!='\0';i++)
    {
        if(((b[i]>64)&&(b[i]<88))||((b[i]>95)&&(b[i]<121)))
        b[i]=b[i]+3;
        if(b[i]==88)
        b[i]=65;
        if(b[i]==90)
        b[i]=67;
        if(b[i]==89)
        b[i]=66;
        if(b[i]==121)
        b[i]=98;
        if(b[i]==122)
        b[i]=99;
        if(b[i]==120)
        b[i]=97;
    }
    for(j=0;j<i;j++)
    printf("%c",b[j]);
    
    return 0;
}
