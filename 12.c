#include <stdio.h>

int main()
{
   int i,j,k,l,x,y,z[100000];
   char a[100];
   printf("Input :\n");
   scanf("%d%d",&x,&y);
   for(i=0;i<x;i++)
   {scanf("%d",&z[i]);
   }
   printf("Output :\n");
  for(i=0;i<y;i++)
  {
      z[x+1]=z[x-1];
      for(j=x;j>0;j--)
      {
        z[j]=z[j-1];
        
          
      }
      z[0]=z[x+1];
      
      
  }
  for(i=0;i<x;i++)
  printf("%d ",z[i]);
    return 0;
}
