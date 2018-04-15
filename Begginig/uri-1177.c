#include<stdio.h>

int main()
{
    int T,i,j,k=0,m,c=0;
    int N[1000];

    scanf("%d",&T);

    for(i=0;i<1000;i++)
    {
       if(c<T)
        {
             N[k]=c;
             printf("N[%d] = %d\n",k,N[k]);
            c++;
            k++;
        }
      else if(i%T==0){
        c=0;
          N[k]=c;
             printf("N[%d] = %d\n",k,N[k]);
             k++;
             c++;
       }
    }
    return 0;
}
