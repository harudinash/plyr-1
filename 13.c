#include <stdio.h>

int main()
{
   int i,j,k,l=0,x,y,z[100000];
   char a[100];
   printf("Input :\n");
   scanf("%d",&x);
  
   printf("Output :\n");
 while(x)
 
 {
     y=x%10;
     k=y*y;
     l=l+k;
     x=x/10;
 }
 printf("%d",l);
    return 0;
}
