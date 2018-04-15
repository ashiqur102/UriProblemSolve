#include<stdio.h>

int main()
{
    int odd=1,even=0,i,j,n;
    scanf("%d",&n);
    int x[n];

    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    for(j=0;j<n;j++)
    {
        if(x[j]%2==0)
        {
            printf("%d\n",even);
        }
        else{
             printf("%d\n",odd);
        }
    }
}
