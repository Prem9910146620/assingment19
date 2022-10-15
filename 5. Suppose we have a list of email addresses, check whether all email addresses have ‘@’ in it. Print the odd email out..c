#include<string.h>
#include<stdio.h>
int main()
{
    char a[10][20];
    int i,j;
    printf("enter characters of email address \n");
    for(i=0;i<3;i++)
    { gets(a[i]); }
    printf("\n valid gmail id's are: \n");
    for(i=0;i<3;i++)
    {   if(strchr(a[i],'@')!=0)
        {
             printf("%s\n",a[i]);

        }
    }

}
