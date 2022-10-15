
#include<string.h>
#include<stdio.h>
int main()
{
    char a[10][20];
    int i,l,j;
    printf("enter characters of email address \n");
    for(i=0;i<3;i++)
    { gets(a[i]); }
   printf("palindrome are:\n");
    for(i=0;i<3;i++)
    {
        l=strlen(a[i]);
         for(j=0;j<l/2;j++)
        {
            if(a[i][j]!=a[i][l-1-j])
            {
              break;
            }
        }
        if(j==l/2)
        { printf("%s\n",a[i]);  }

    }
return 0;
}
