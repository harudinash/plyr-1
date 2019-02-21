#include <stdio.h>

int main()
{
   int i,j,k,r;
   char a[100000];
   printf("Input:\n");
   scanf("%d",&k);
   printf("\nOutput:\n");
   while(k)
   {
       r=k%10;
       printf("%d",r);
       k=k/10;
   }

    return 0;
}
