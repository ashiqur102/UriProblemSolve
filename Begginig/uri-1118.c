#include<stdio.h>

int main()
{
     int n,i;
    float x,y,media;
    while(1)
    {
         float x,y,media;
           if(n==2)
           {
               break;
           }
           while(1)
           {
            scanf("%f",&x);
               if(x>=0 && x<=10)
               {
                   break;
               }
                  else
              {
                  printf("nota invalida\n");
                  continue;
              }

           }
           while(1)
           {
              scanf("%f",&y);
              if(y>=0 && y<=10)
              {
                  break;
              }
                 else
              {
                  printf("nota invalida\n");
                  continue;
              }

           }
                  media=(x+y)/2.0;
                  printf("media = %.2f\n",media);
                  for(i=0; ;i++)
                  {
                      printf("novo calculo (1-sim 2-nao)\n");
                      scanf("%d",&n);
                      if(n==1 || n==2)
                      {
                          break;
                      }
                  }

    }
}
