#include<stdio.h>

int main()
{
    int i,j,k;

    int X[10];
    for (i=0;i<10;i++){

        scanf("%d",&X[i]);
    }
    for (j=0;j<10;j++){

      if(X[j]<=0)
      {
        X[j]=1;
      }
    }
     for (k=0;k<10;k++){
            printf("X[%d] = %d\n",k , X[k]);

    }

return 0;
}
