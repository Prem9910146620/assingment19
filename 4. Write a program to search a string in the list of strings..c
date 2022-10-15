#include<string.h>
#include<stdio.h>
int main()
{
    char a[5][20]={ "ajay","aman","prem","vivek","sonu" },c[10];

    int i,j,f,d;
    for(i=0;i<5;i++)
    { printf("%s\n",a[i]); }
    printf("enter some characters\n");
       gets(c);

        for(i=0;i<5;i++)
         {

           f=strcmp(a[i],c);
           if(f==0)
    printf("match\n");


         }







return 0;
}
