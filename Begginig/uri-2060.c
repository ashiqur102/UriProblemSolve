#include<stdio.h>

int main()
{
    int n,c1=0,c2=0,c3=0,c4=0,i,j;
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
            c1++;
        }
         if(x[j]%3==0)
        {
            c2++;
        }
          if(x[j]%4==0)
        {
            c3++;
        }
          if(x[j]%5==0)
        {
            c4++;
        }
    }

    printf("%d Multiplo(s) de 2\n",c1);
     printf("%d Multiplo(s) de 3\n",c2);
      printf("%d Multiplo(s) de 4\n",c3);
       printf("%d Multiplo(s) de 5\n",c4);

       return 0;

}
