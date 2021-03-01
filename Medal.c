#include<stdio.h>
int main()
{
    int n,i,j;
    int maxlow=0,minlow=0,sum=0,max=0,min=2000;
    scanf("%d",&n);
    int num[n][3];
    for(i=0;i<n;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&num[i][j]);
        }
    }
    for(i=0;i<n-2;i++)
    {
        for(j=i;j<i+3;j++)
        {
            sum+=(num[j][0]*4)+(num[j][1]*2)+(num[j][2]*1);
        }
        if(max<sum)
        {
            max=sum;
            maxlow=i;
        }
        if(min>sum)
        {
            min=sum;
            minlow=i;
        }
        sum=0;
    }
    printf("%d %d",maxlow+1,minlow+1);
    return 0;
}
