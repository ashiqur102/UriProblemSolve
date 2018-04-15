#include<stdio.h>

int main()
{
    int even[15],odd[15],input[15];
    int i,c,t,k=0,l,j,m;

    for(m=0;m<15;m++)
    {
        scanf("%d",&input[m]);
    }

    for(i=0;i<15;i++)
    {
        if(input[i]%2==0)
        {
          even[k]=input[i];
         /* k++;
          if(k==4)
          {
              for(j=0;j<5;j++)
              {
                  printf("par[%d] = %d\n",j,even[j]);
              }
              k=0;
          }*/
        }
        else if(input[i]%2!=0)
        {
             odd[k]=input[i];
         /* k++;
          if(k==4)
          {
              for(l=0;l<5;l++)
              {
                  printf("par[%d] = %d\n",j,even[j]);
              }
              k=0;
          }


        }*/
       }
    }
    for(j=0;i<sizeof(even);j++)
    {
        printf("par[%d] = %d\n",j,even[j]);
    }


    return 0;

}
