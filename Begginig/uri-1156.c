#include<stdio.h>

int main()
{
    int i;
    float sum=1.0,j=3.0,k=2.0;

    for(i=0; ;i++)
    {
        sum=sum+j/k;
        if(j==39)
        {
            printf("%.2f\n",sum);
            break;
        }
        j=j+2;
        k=k*2;
    }
    return 0;
}
