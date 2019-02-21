#include <stdio.h>

int main()
{
    int a,x=0,b,y,z,i,c,j;
    //clrscr();
    printf("Input :");
    scanf("%d%d",&a,&b);
    printf("Output :\n");
    c=a;
    for(i=c;i<3;i++)
    {
            
    if((a==2)||(a==3))
    {
             x++;
    }
    //printf("a=%d",a);
        a++;
    }
    
    for(j=a;j<=b;j++)
 {
     y=0;
     //printf("a+=%d",a);
        for(i=2;i<j;i++)
        { 
            if(a%i==0)
            
        
            { 
                y=1;
                break;
            }
        
           
        }
        if(y==0)
        x++;
        a++;
    }
   printf("%d",x);
    return 0;
}
