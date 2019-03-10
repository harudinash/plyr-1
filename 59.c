#include <stdio.h>
#include<math.h>
int main()
{
    int i,j,k,l,m,n,q,f[100],p,a,b[10000];
    char e[100],c[1000];
    printf("Input :\n");
   scanf("%d",&a);
   for(i=0;i<a;i++)
   scanf("%d",&b[i]);
    printf("Output :\n");
    
    for(i=a-1;i>=0;i--)
    {
        if(b[i]==0)
        {
            for(k=i-1;b[k]!=0;k--)
            {
               f[q]=b[k];
               q++;
                
            }
        }
    }
   
    for(i=q-1;i>=0;i--)
    printf("%d ",f[i]);
    return 0;
}
