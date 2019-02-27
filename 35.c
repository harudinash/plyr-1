#include <stdio.h>

int main()
{
    int i,j,k,l,m,n;
    char a[10000],b[10000];
    printf("Input :\n");
    gets(a);
    printf("Output :\n");
    for(i=0;a[i]!='\0';i++);
    
    for(k=0;k<i;k++)
    {
        l=0;
        for(j=0;j<i;j++)
        {
            if(a[k]==a[j])
            l++;
        }
        if(l==1)
        printf("%c",a[k]);
    }
 //   printf("%c",a[n]);
    return 0;
}
