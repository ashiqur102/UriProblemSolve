#include<stdio.h>

int main()
{
    int N[20],y[20];
    int i,j,k=0,m;
    for(j=0;j<20;j++)
    {
        scanf("%d",&N[j]);
    }

    for(i=19;i>=0;i--)
    {
     y[k]=N[i];
     k++;
    }
    for(m=0;m<20;m++)
    {
        printf("N[%d] = %d\n",m,y[m]);
    }
    return 0;
}
