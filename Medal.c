#include<stdio.h>
int main()
{
    int n,i;
    int num[n][3];
    int max_low=0,min_low=0,sum=0,max=0,min=2000;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&num[i][j]);
        }
    }
    for(i=0;i<n-2;i++)
    {
        for(int j=i;j<i+3;j++)
        {
            sum+=(4*num[j][0])+(2*num[j][1])+(1*num[j][2]);
        }
        if(min>sum)
        {
            min=sum;
            min_low=i;
        }
        if(max<sum)
        {
            max=sum;
            max_low=i;
        }
        sum=0;
    }
    printf("%d %d",max_low+1,min_low+1);
}
