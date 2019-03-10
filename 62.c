#include <stdio.h>
#include<math.h>
int main()
{
    int i,j,k,l,m,n,q,f[100],p,a,b[10000];
    char e[100],c[1000];
    printf("Input :\n");
   scanf("%d",&n);
   
    printf("Output :\n");
   a=1;
   i=1;
   while(a)
   {
       if(n%i==0)
       {
           m=n/i;
           if(m%2!=0)
           {
               a=0;
               printf("%d ",i);
               break;
               
           }
          
       }
       i++;
       
   }
   
   
    return 0;
}
