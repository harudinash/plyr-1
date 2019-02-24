#include <stdio.h>

int main()
{
   int i=1,j,k,l=0,x,y,z[100000];
   char a[100000];
   printf("Input :\n");
   scanf("%d%d",&y,&x);
  printf("Output :");
  if(x>y)
  k=y;
  else
  k=x;
  while(i)
  {
      //printf("%d ",k);
      if((k%x==0)&&(k%y==0))
      {
          printf("%d",k);
      i=0;
      }
      k++;
  }

    return 0;
}
