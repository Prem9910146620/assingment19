#include<string.h>
#include<stdio.h>
int main()
{
    char a[10][20],c[20];
    int i,j;
    printf("enter 10 city names characters\n");
    for(i=0;i<10;i++)
    { gets(a[i]); }
     for(i=0;i<9;i++)
     {
         for(j=i+1;j<10;j++)
         { if( strcmp(a[i],a[j])>0)
         { strcpy(c,a[i]);
         strcpy(a[i],a[j]);
         strcpy(a[j],c);
         }

         }
     } printf("sorted names ====>");
    for(i=0;i<10;i++)
    {
        printf("\n %s",a[i]);
    }


return 0;
}
