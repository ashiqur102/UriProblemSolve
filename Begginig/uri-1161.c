#include<stdio.h>

long long int sum1,sum2,sum=1;

long long int fact(long long int a)
{
    if(a==1)
    {
        return sum;
    }
    else{
    sum=a*sum;
    fact(a-1);
    }
}

int main()
{
    int n,m;
    long long int rs=0;
        sum1=0;
        sum2=0;
         rs=0;
         n=0;m=0;

while( scanf("%d",&n)!=EOF)
      {
        scanf("%d",&m);

        if(n==0)
        {
           sum1=1;
        }
        else
        {
            sum=1;
            sum1=fact(n);
        }
        if(m==0)
        {
            sum2=1;
        }
        else
        {
            sum=1;
            sum2=fact(m);
        }
        rs=sum1+sum2;
        printf("%lld\n",rs);

      }

    return 0;
}
