#include<stdio.h>

int main()
{
    int m,i,j,sum;
    int N[10];

    scanf("%d",&m);
    sum=m;
    N[0]=m;
     printf("N[0] = %d\n",m);

    for(i=1;i<10;i++)
    {
        sum=sum*2;
    printf("N[%d] = %d\n",i,sum);
    }
    return 0;
}
