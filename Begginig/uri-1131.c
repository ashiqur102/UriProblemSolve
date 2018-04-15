#include<stdio.h>

int main()
{
    int x,y,n=1,draw=0,inter=0,gremio=0,cnt=0;

    while(n==1)
    {
        scanf("%d %d",&x,&y);
        if(x>y)
        {
            inter++;
        }
        else if(x<y)
        {
            gremio++;
        }
        else if(x==y)
        {
            draw++;
        }
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d",&n);
        cnt++;
    }
    printf("%d grenais\n",cnt);
    printf("Inter:%d\n",inter);
    printf("Gremio:%d\n",gremio);
    printf("Empates:%d\n",draw);

    if(inter>gremio)
    {
        printf("Inter venceu mais\n");
    }
    else if(gremio>inter)
    {
        printf("Gremio venceu mais\n");
    }
    else if(inter==gremio)
    {
        printf("Não houve vencedor\n");
    }

  return 0;
}
