#include<stdio.h>
#include<string.h>
int main()
{
    char a[20];
    int i,c=0;
    printf("enter IP address:\n");
    fgets(a,20,stdin);
    char *b=strtok(a,".");
    while(b!=NULL)
    { int x=atoi(b);
    if((x>=0)&&(x<=255))
    { c++;
        printf(" %d",x);
        }
    b=strtok(NULL,".");
 }
 if(c==4)
    printf("\n valid IP Address");
    else
    printf("\n not valid IP Address");

    return 0;
}
