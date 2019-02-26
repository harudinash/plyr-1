#include <stdio.h>

int main()
{
    int a[10000],i,j,k=0,m,l;
    printf("Input :\n");
    scanf("%d",&l);
    printf("Output :\n");
    for(i=2;i<=l;i++)
    {
        if(l%i==0)
        {
         if(i==2)
         printf("%d ",i);
         else
         {
             m=0;
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                m=1;
                break;
            }
            
        }
        if(m==0)
        printf("%d ",i);
        }
        }
    }
    
    return 0;
}
