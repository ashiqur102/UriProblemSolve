#include<stdio.h>

int main()
{
    float i,j;

    for(i=0;i<2;i=i+.2)
    {
        if(i==0)
        {
            printf("I=0 J=1\n");
            printf("I=0 J=2\n");
            printf("I=0 J=3\n");
        }
        else if(i==1)
        {
             printf("I=1 J=2\n");
            printf("I=1 J=3\n");
            printf("I=1 J=4\n");
        }
         else if(i<2 && i!=1)
        {
            for(j=1;j<=3;j++)
            {
                printf("I=%.1f J=%.1f\n",i,j+i);
            }
        }

    }
            printf("I=2 J=3\n");
            printf("I=2 J=4\n");
            printf("I=2 J=5\n");

    return 0;
}
