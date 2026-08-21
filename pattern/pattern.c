// Online C compiler to run C program online
#include <stdio.h>

int main()
{
   int i,j,n=5;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(j==1||i==1&&j<n||i==n&&j<n||j==n && i>1&&i<n)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("   ");
       
        for(j=1;j<=n;j++)
        {
            if(i==1||i==3||j==1||j==n)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
         printf("   ");
        for(j=1;j<=n;j++)
        {
            if(j==1||i+j==6&&j!=2||i-j==0&&i!=2)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
         printf("  ");
         for(j=1;j<=n;j++)
        {
            if(i==1||i==3||i==5||j==1&&i<3||j==5&&i>3)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("  "); 
        for(j=1;j<=n;j++)
        {
            if(i==1&&j!=2&&j!=3&&j!=4||j==1||j==n||i==3)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("  ");
        for(j=1;j<=n;j++)
        {
            if(i==1||i==3||j==1||j==n)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("  ");
        printf("\n");
    }
}