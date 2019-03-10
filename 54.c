#include <stdio.h>
#include<math.h>
int main()
{
    int i,j,k,l,m,n,p,a,b[10000];
    char c[10000],d[10000];
    printf("Input :\n");
    
    gets(c);
    gets(d);
    printf("Output :\n");
    
    for(i=0;c[i]!='\0';i++);
    for(j=0;d[j]!='\0';j++);
    if(i==j)
    {
        n=1;
        for(k=0;k<i;k++)
        {
            if(c[k]!=d[k])
            {
                n=0;
                break;
            }
        }
    }
    

if(n==1)
printf("yes");
else
printf("no");
    
   
    
    return 0;
}
