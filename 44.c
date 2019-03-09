#include <stdio.h>

int main()
{
    int i,j,k,l,m,n;
    char a[1000],b[1000];
    printf("Input :\n");
    gets(a);
    scanf("%d",&m);
    printf("Output :\n");
    for(i=0;a[i]!='\0';i++);
    
    for(j=0;j<i;j++)
    {
        for(k=j+m-1;k>=j;k--)
        {
            b[l]=a[k];
            l++;
        }
        j=j+m-1;
    }
for(k=0;k<j;k++)
printf("%c",b[k]);
    return 0;
}
