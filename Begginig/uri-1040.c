#include<stdio.h>

int main()
{
    float n1,n2,n3,n4,avg,new_avg,m;
    scanf("%f %f %f %f",&n1,&n2,&n3,&n4);

    avg=((n1*2.0)+(n2*3)+(n3*4)+(n4*1))/10;
    printf("Media: %.1f\n",avg);
    if(avg>=7)
    {
        printf("Aluno aprovado.\n");
    }
    else if(avg<5)
    {
        printf("Aluno reprovado.\n");
    }
    else if(avg>=5 && avg<7)
    {
        printf("Aluno em exame.\n");
        scanf("%f",&m);
        printf("Nota do exame: %.1f\n",m);
        new_avg=(avg+m)/2;

        if(new_avg>=5)
        {
             printf("Aluno aprovado.\n");
        }
        else if(new_avg<5)
        {
            printf("Aluno reprovado.\n");
        }

        printf("Media final: %.1f\n",new_avg);
    }

    return 0;
}
