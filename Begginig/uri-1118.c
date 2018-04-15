#include<stdio.h>

int main()
{
    float x,y,media,cnt=0;
    int n;

    while(1)
    {

          if(cnt==3)
        {
            printf("Enter n\n");

            scanf("%d",&n);

            if(n==2)
            {
                break;
            }
            else
            {
                cnt=0;
                continue;
            }
        }
        while(1)
        {
             printf("Enter x\n");
            scanf("%d",&x);

            if(x>=0 && x<=10 && cnt==0 || cnt==1 || cnt==2)
            {
                cnt++;
                break;
            }
            printf("nota invalida\n");
        }
        if(cnt<2){
             while(1)
            {
                 printf("Enter y\n");
                scanf("%d",&y);
                if(y>=0 && y<=10)
                {
                    break;
                }
                printf("nota invalida\n");
            }
        }
       if(cnt<2){
        media=(x+y)/2.0;
        printf("media = %.2f\n",media);
        cnt++;
       }
    }
}
