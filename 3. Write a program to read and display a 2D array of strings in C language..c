#include<stdio.h>
int main()
{
    char a[3][100],i,j;
    printf("enter 3 sentences with some words\n");
   for(i=0;i<3;i++)
     { fgets(a[i],100,stdin); }
     for(i=0;i<3;i++)
   { printf("\n%s",a[i]); }
 return 0;
}
