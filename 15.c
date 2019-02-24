#include <stdio.h>

int main()
{
   int i,j,k,l=0,x,y,z[100000];
   char a[100000];
   printf("Input :\n");
   gets(a);
  
   printf("Output :\n");
for(i=0;a[i]!='\0';i++);
for(k=0;k<i;k++)
{
    y=0;
    for(j=k+1;j<i;j++)
    {
        if(a[k]==a[j])
        y++;
    }
    z[k]=y;
}
x=z[0];y=0;
for(l=0;l<i;l++)
{

    for(j=l+1;j<i;j++)
    {
       if(z[j]>x)
      {
          x=z[j];
          y=j;
      }
    }
}
//printf("%d",x);
printf("%c",a[y]);
    return 0;
}
