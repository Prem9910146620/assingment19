#include<stdio.h>
#include<string.h>
int fact(int);
int main()
{
    char a[4][10];
    char b[10];
    int i,c,d;
    printf("enter some user name\n");
    for(i=0;i<4;i++)
      { gets(a[i]); }
      printf("enter correct username to calculate factorial:\n");
      gets(b);

    for(i=0;i<4;i++)
    {
        if(strcmp(a[i],b)==0)
            { c=1; break; }
    }  if(c==1)
     { printf("successful\n");
       printf("enter n number to calculate factorial:\n");
    scanf("%d",&d);
    printf("factorial of %d is =%d",d,fact(d));


     }
    else
    printf("\n error");

  return 0;
}
int fact( int b)
{ int i,j=1,h=0;
  for(i=1;i<=b;i++)
  {   j=j*i;

  }
   return j;
}
