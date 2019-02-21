#include <stdio.h>

int main()
{
   int i,j,k=0,l;
   char a[100000],b[100];
   printf("Input :\n");
   gets(a);
   printf("Output :\n");
   for(i=0;a[i]!='\0';i++)
   {
       if((a[0]>=97)&&(a[0]<=122))
       a[0]=a[0]-32;
    
    if((i>0)&&(a[i]==' '))
    {
       if((a[i+1]>=97)&&(a[i+1]<=122))
        a[i+1]=a[i+1]-32;
    }
   }
for(i=0;a[i]!='\0';i++)
{
    printf("%c",a[i]);
}
    return 0;
}
