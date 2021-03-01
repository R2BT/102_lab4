#include<stdio.h>
int main()
{
    int stone[4]= {1,0,0,0};
    int n,round=0,i,j,a,b;
    scanf("%d",&n);
    char glass[n][50];
    for(i=0; i<n; i++)
    {
        scanf("%s",glass[i]);
        for(j=0; glass[i][j]!='\0'; j++)
        {
            char x=glass[i][j];
            switch(x)
            {
            case'A':
                a=stone[1];
                stone[1]=stone[2];
                stone[2]=a;
                break;
            case'B':
                b=stone[0];
                stone[0]=stone[3];
                stone[3]=b;
                break;
            case'C':
                a=stone[0];
                b=stone[1];
                stone[0]=stone[2];
                stone[1]=stone[3];
                stone[2]=a;
                stone[3]=b;
                break;
            case'D':
                a=stone[0];
                b=stone[2];
                stone[0]=stone[1];
                stone[2]=stone[3];
                stone[1]=a;
                stone[3]=b;
                break;
            case'E':
                a=stone[0];
                b=stone[1];
                stone[0]=stone[3];
                stone[1]=stone[2];
                stone[2]=b;
                stone[3]=a;
                break;
            }
        }
        for(int i=0; i<4; i++)
        {
            if(stone[i]==1)
            {
                printf("%d\n",i+1);
                stone[i]=0;
                break;
            }
        }
        stone[0]=1;
    }
    return 0;
}
