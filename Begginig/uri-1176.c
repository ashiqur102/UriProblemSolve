#include<stdio.h>
#include<inttypes.h>
int fib(long long int a);
int main()
{
    int k,in[100],i,j;
    long long int tmp;
    scanf("%d",&k);

    for(i=0;i<k;i++)
    {
        scanf("%d",&in[i]);
    }
    for(j=0;j<k;j++)
    {
        tmp=fib(in[j]);
      printf("Fib(%d) = %lld\n",in[j],tmp);
    }

    return 0;
}

int fib(long long int a)
{
    int i,n=0,m=1;
   long long int N[61];
    N[0]=0;
    N[1]=1;
     for(i=2;i<61;i++)
    {
         N[i]=N[i-1]+N[i-2];
    }
    return N[a];
}
