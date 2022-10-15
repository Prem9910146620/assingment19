#include<stdio.h>
int main()
{
    char a[5][10];
    int i,j,c=0;
    printf("enter 10 characters\n");
    for(i=0;i<5;i++)
    { gets(a[i]); }
printf("vowels are :");
    for(i=0;i<5;i++)
    {
        for(j=0;j<10;j++)
        {
            if(a[i][j]=='a'||a[i][j]=='e'||a[i][j]=='i'||a[i][j]=='o'||a[i][j]=='u')
            {
                c++;
                     }

        }  printf("\n %s===%d",a[i],c);
    c=0;
    }



  return 0;
}
