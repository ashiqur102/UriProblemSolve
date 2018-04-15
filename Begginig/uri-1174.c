#include<stdio.h>

int main()
{
    float m[100];
    int i,j;
    for(j=0;j<100;j++)
    {
        scanf("%f",&m[j]);
    }

    for(i=0;i<100;i++)
    {
        if(m[i]<=10)
        {
            printf("A[%d] = %.1f\n",i,m[i]);
        }
    }
    return 0;
}
