#include<stdio.h>

int main() {
   int i,j,k,l,x[100][100];
   char a[10000];
   printf("Input :\n");
   //gets(a);
   scanf("%d",&k);
   
   for(i=0;i<k;i++)
   {
       for(j=0;j<k;j++)
       {
           
       
   
   scanf("%d",&x[i][j]);
       }
   }
   printf("Output :\n");
   
   for(i=0;i<k;i++)
   {
       for(j=0;j<k;j++)
       {
           if((i==0)||(j==0)||(i==k-1)||(j==k-1))
           {
            if(x[i][j]==1)
            {
                if((x[i+1][j]==0)&&(x[i][j+1]==0))
                {
                    
                x[i][j]=0;
                l++;
                }
            }
           }
           else if((i>0)||(j>0)||(i>k-1)||(j>k-1))
           {
               if(x[i][j]==1)
            {
                if((x[i+1][j]==0)&&(x[i][j+1]==0)&&(x[i-1][j]==0)&&(x[i][j-1]==0))
                {
                    l++;
                     x[i][j]=0;
                }
            }
           }
           
      
      }
   }

printf("%d",l);
return 0;
}
