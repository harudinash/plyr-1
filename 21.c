#include <stdio.h>

int main()
{
    int a,b,c,d,e,f,i,j,k=0,m,l;
    //char b[10000];
    printf("Input :\n");
   scanf("%d %d",&a,&b);
   scanf("%d %d",&c,&d);
   scanf("%d %d",&e,&f);
   
    printf("Output :\n");
    if((a==e)&&(a==c))
    printf("yes");
    else if((b==d)&&(b==f))
    printf("yes");
    else
    printf("no");
   
    
    return 0;
}
