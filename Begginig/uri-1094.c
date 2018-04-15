#include<stdio.h>

int main()
{
    int i,j,c,cat=0,rat=0,frog=0,sum=0,tmp;
    float cp,rp,fp;

    scanf("%d",&c);
    char s[c];
    int n[c];

    for(i=0;i<c;i++)
    {
    scanf("%d %c",&n[i], &s[i]);

   }
   for(j=0;j<c;j++){

        tmp=n[j];
       sum=sum+tmp;
        tmp=0;

        if(s[j]=='C')
        {
            cat=cat+n[j];
        }
        else if(s[j]=='R')
        {
            rat=rat+n[j];
        }
        else if(s[j]=='S')
        {
            frog=frog+n[j];
        }

   }
     cp=(cat*100)/(float)sum;
    rp=(rat*100)/(float)sum;
    fp=(frog*100)/(float)sum;

    printf("Total: %d cobaias\n",sum);
    printf("Total de coelhos: %d\n",cat);
    printf("Total de ratos: %d\n",rat);
    printf("Total de sapos: %d\n",frog);

    printf("Percentual de coelhos: %.2f %%\n",cp);
     printf("Percentual de ratos: %.2f %%\n",rp);
      printf("Percentual de sapos: %.2f %%\n",fp);

    return 0;
}
