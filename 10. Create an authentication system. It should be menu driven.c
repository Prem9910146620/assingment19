
#include<stdio.h>
#include<string.h>
int main()
{
    char a[3][2][20];
    char b[2][20];
    int i,j,k,c=0;
    printf("enter 5 user name and password \n");
    for(i=0;i<3;i++)
    {
    for(j=0;j<2;j++)
    { gets(a[i][j]);

     }
    }
   printf("enter 1 user name and password for matching \n");
    for(j=0;j<2;j++)
    { gets(b[j]); }

    for(i=0;i<3;i++)
    {  c=0;
        for(j=0;j<2;j++)
        {
            if(strcmp(a[i][j],b[j])==0)
               {
                   c++; }


        } if(c==2)
                break;
             }
    if(c==2)
        printf("log in successfully");
    else
    printf(" error try again");





 return 0;
}
