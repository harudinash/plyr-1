#include <stdio.h>

int main()
{
   int i,j,k,l=0,x,y,z[100000];
   char a[100000];
   printf("Input :\n");
   scanf("%d",&y);
   for(i=0;i<y;i++)
   {
       scanf("%d",&z[i]);
   }
  
   printf("Output :\n");
  // x=z[0];
for(i=0;i<y;i++)
{
   x=0;
    for(j=i+1;j<y;j++)
    {
        if(z[i]==z[j])
        {
            z[j]=' ';
            x=1;
        }
    }
    if(x==1)
    {
        z[i]=' ';
    }
    
}
for(i=0;i<y;i++)
{
    if(z[i]!=' ')
    printf("%d",z[i]);
}

    return 0;
}
