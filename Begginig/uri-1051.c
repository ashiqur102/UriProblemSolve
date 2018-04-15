#include<stdio.h>

int main()
{
    float tax,n,m,k,l;

    scanf("%f",&n);

    if(n<=2000)
    {
        printf("Isento\n");
    }
    else if(n>2000 && n<=3000)
    {
        m=n-2000.0;
        tax= (m*8.0)/100.0;

        printf("R$ %.2f\n",tax);
    }
    else if(n>3000 && n<=4500)
    {
        m=n-2000.0;

        if(m>1000 && m<=1500)
        {
            k=m-1000.0;
            tax= (1000.0*8.0)/100.0;
            tax= tax+(k*18.0)/100.0;
            printf("R$ %.2f\n",tax);
        }
        else if(m<1000)
        {
            tax = (m*8.0)/100.0;
            printf("R$ %.2f\n",tax);
        }
        else if(m>1500.00)
        {
            k= m-1000.0;

            tax= (1000.0*8)/100.0;

           // if(k<=1500.0)
            //{
                tax = tax+(k*18.0)/100.0;
            //}
            printf("R$ %.2f\n",tax);
        }
    }
    else if(n>4500)
    {
        m=n-2000.0;

        if(m>1000)
        {
            l=m-1000.0;

            tax=(1000.0*8)/100.0;

            if(l>1500)
            {
                k=l-1500;
                tax=tax+(1500.0*18)/100.0;
                tax=tax+(k*28.0)/100.0;
            }
            printf("R$ %.2f\n",tax);
        }
    }
    return 0;
}
