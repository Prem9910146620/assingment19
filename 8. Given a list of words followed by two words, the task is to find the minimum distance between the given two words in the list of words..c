#include<stdio.h>
#include<string.h>
int main()
{
    char a[4][10];
    char b[10];
    char c[10];
    int i,d=10000,k=-1,l=-1,m;
    printf("enter some words\n");
    for(i=0;i<4;i++)
      { gets(a[i]); }
      printf("enter word1:\n");
      gets(b);
      printf("enter word2:\n");
      gets(c);
     for(i=0;i<4;i++)
    {
        if(strcmp(a[i],b)==0)
            k=i;
        if(strcmp(a[i],c)==0)
            l=i;
            if(k!=-1&&l!=-1)
           {
             m=abs(k-l);
            if(m<d)
            d=m;
           }
    }
     printf(" \n difference of word1 and word2 is %d",d-1);

 return 0;
}

