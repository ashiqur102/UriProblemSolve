#include<stdio.h>

int main()
{
    double x,sum;
    int i;
    double N[100];

    scanf("%lf",&x);
    sum=x;
    N[0]=x;
    printf("N[0] = %.4lf\n",N[0]);

    for(i=1;i<100;i++)
    {
     sum= (double)(sum/2.000);
     N[i]=sum;
     printf("N[%d] = %.4lf\n",i,N[i]);
    }

    return 0;
}
