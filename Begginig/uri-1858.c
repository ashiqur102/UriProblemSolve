#include<stdio.h>

int main()
{
    int i,j,c,tmp,cnt=0,k,e=0,m=0,l=0,ch;
    scanf("%d",&c);
    int a[c],cp[c];

    for(j=0;j<c;j++)
    {
        scanf("%d",&a[j]);
    }

     tmp=a[0];

    for(i=0;i<c;i++)
    {
        if(tmp>a[i])
        {
            if(l>=1)
            {
                cp[m]=a[i-1];
                m++;
            }
            else if(l<1)
            {
                cnt++;
            }
          if(m>0){
                for(k=0;k<=c;k++)
                {
                    if(cp[k]==a[i])
                    {
                     e=1;
                     e++;
                    }
                }
                if(e==0)
                {
                    cnt++;
                }
                else
                   e=0;
            }
            l++;
        }
    }
    printf("%d\n",cnt);

    return 0;
}
