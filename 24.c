#include <stdio.h>

int main()
{
    int i,j,k,l,c=0,t,a,b,m[10000],n[10000];
    char x[10000];
    printf("Input :\n");
    gets(x);
    printf("Output :\n");
    
    for(i=0;x[i]!='\0';i++)
    {
        if((x[i]>47)&&(x[i]<58))
        continue;
        else
        {
            c=1;
            printf("no");
            break;
        }
    
    }
    if(c==0)
    printf("yes");
    return 0;
}
