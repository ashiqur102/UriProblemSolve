#include<stdio.h>

int main()
{
    int x,z,i,cnt=0,sum=0;

    scanf("%d",&x);

    while(1)
    {
        scanf("%d",&z);
        if(z>x)
        {
            break;
        }
    }
    for(i=x; ;i++)
    {
        cnt++;
        sum=sum+i;

        if(sum>z)
        {
            printf("%d\n",cnt);

            break;
        }
    }
    return 0;
}
