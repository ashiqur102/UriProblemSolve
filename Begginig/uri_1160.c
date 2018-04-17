#include<stdio.h>
 double ia,ib;
 int a,b,rs;

 void process_rs()
 {
     int i=0;
          while(a<=b)
        {
            a=a+(ia*(float)a)/100.0;
            b=b+(ib*(float)b)/100.0;
             i++;
                if(i>100)
                {
                    printf("Mais de 1 seculo.\n");
                    break;
                }
            }
            if(i<=100)
                printf("%d anos.\n",i);
 }


int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d%d",&a,&b);
        scanf("%lf%lf",&ia,&ib);
        process_rs();
    }
    return 0;
}
