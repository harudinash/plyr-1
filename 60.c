#include <stdio.h>
#include<math.h>
int main()
{
    int i,j,k,l,m,n,q,f[100],p,a,b[10000];
    char e[100],c[1000];
    printf("Input :\n");
   gets(e);
   gets(c);
    printf("Output :\n");
    k=0;
    for(i=0;c[i]!='\0';i++)
    {
        for(j=0;e[j]!='\0';j++)
        {
        if(c[i]==e[j])
        {
            k=1;
            break;
        }
        }
    }
    if(k==1)
    printf("yes");
    else
    printf("no");
    return 0;
}
