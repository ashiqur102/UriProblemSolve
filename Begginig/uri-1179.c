#include<stdio.h>
int par[15],impar[15],n[15],k=0,z=0;

int print_par(int s)
{
    int l;
    if(s<=5)
    {
        for(l=0;l<s;l++)
        {
            printf("par[%d] = %d\n",l,par[l]);
        }
    }
    return 0;
}

int print_impar(int s2)
{
    int l;
    if(s2<=5)
    {
        for(l=0;l<s2;l++)
        {
            printf("impar[%d] = %d\n",l,impar[l]);
        }
    }

    return 0;
}

int main()
{
    int i,j,s=0,s2=0,t,l,m;

   for(i=0;i<15; i++)
   {
       scanf("%d",&n[i]);
   }
       for(t=0;t<15;t++)
       {
           if(n[t]%2==0)
           {
               par[s]=n[t];
               s++;
               if(s==5)
               {
                   print_par(s);
               }
           }
           else
           {
               impar[s2]=n[t];
               s2++;
               if(s2==5)
               {
                print_impar(s2);
               }
           }
       }

        z=0;
      for(l=5;l<s2;l++)
        {

            printf("impar[%d] = %d\n",z,impar[l]);
            z++;
        }

        z=0;
      for(m=5;m<s;m++)
        {

            printf("par[%d] = %d\n",z,par[m]);
            z++;
        }

    return 0;

}
