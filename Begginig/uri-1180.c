#include<stdio.h>

int main()
{
    int n,i,j,tmp,k,l,m;
    scanf("%d",&n);
    int x[n],y[n];
    for (i=0;i<n;i++){

        scanf("%d",&x[i]);
    }
    for (j=0;j<n;j++){

       y[j]=x[j];
    }
     for (k=0;k<n;k++){

      for(l=0;l<n;l++){
        if(y[k]<y[l]){
            tmp=y[k];
            y[k]=y[l];
            y[l]=tmp;
        }
      }
    }
    for(m=0;m<n;m++)
    {
        if(y[0]==x[m]){
            printf("Menor valor: %d\n",y[0]);
            printf("Posicao:%d\n",m);
        }
    }

return 0;
}
