#include <stdio.h>

int main()
{
   int i,j,k,l=0,x,y,z[100000];
   char a[100000];
   printf("Input :\n");
   scanf("%d%s",&y,a);
  
   printf("Output :\n");
for(i=0;i<y;i++)
{
    switch(a[i])
    {
    
        case 'a':a[i]=' ';
        case 'e':a[i]=' ';
        case 'i':a[i]=' ';
        case 'o':a[i]=' ';
        case 'u':a[i]=' ';
        case 'A':a[i]=' ';
        case 'E':a[i]=' ';
        case 'I':a[i]=' ';
        case 'O':a[i]=' ';
        case 'U':a[i]=' ';
        
        
    }
}

 for(j=y-1;j>=0;j--)
 {
    
 if(a[j]!=' ')
 printf("%c",a[j]);
 
 }
    return 0;
}
