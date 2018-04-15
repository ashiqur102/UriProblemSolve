#include<stdio.h>

int main()
{
    int m,n,i;

    scanf("%d %d",&m,&n);

    for(i=1;i<=n;i++)
    {
        if(i%m==0)
        {
            printf("%d\n",i);
        }
        else if(i%m!=0 && i==n)
        {
            printf("%d\n",i);
        }
            else
            {
                printf("%d ",i);
            }
    }
    return 0;
}
