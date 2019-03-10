#include <stdio.h>
#include<math.h>
int main()
{
    int i,j,k,l,m,n,q,f[10000],p,a,b[10000];
    char e[100],c[1000];
    printf("Input :\n");
   scanf("%d",&n);
   /*for(i=0;i<n;i++)
   scanf("%d",&b[i]);*/
   for(i=0;i<n;i++)
           scanf("%d",&f[i]);
   
    printf("Output :\n");
   
   
   for(i=0;i<n;i++)
   {
       m=0;
       if(f[i]==f[i+1])
          {
              for(k=i;f[k]==f[i];k++)
              m++;
          }
      //printf("f[i]=%d m=%d",f[i],m);
      if(m>p)
      {
          p=m;
          
      }
      if(m!=0)
      i=k-1;
   }
   printf("%d",p);
    return 0;
}
