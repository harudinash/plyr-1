#include <stdio.h>

int main()
{
   int i,j,k,r;
   char a[100000];
   printf("Input:\n");
  // scanf("%d",&k);
    gets(a);
   printf("\nOutput:\n");
  // k=string stl(a);
  for(i=0;a[i]!='\0';i++);
  a[i]='.';
  for(j=0;j<=i;j++)
  {
      printf("%c",a[j]);
  }
  // printf("%d",k);

    return 0;
}
