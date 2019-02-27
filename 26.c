#include <stdio.h>

int main()
{
    int i,j,k,l;
    char a[10000];
    printf("Input :\n");
    gets(a);
    printf("Output :\n");
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]==' ')
            {
                k=1;
            
             if(a[i+1]==' ')
             a[i]='*';
            }
        
        
    }
    //printf("\n%d\n",i);
    for(j=0;j<i;j++)
    {
        if(a[j]!='*')
        printf("%c",a[j]);
    }
    return 0;
}
