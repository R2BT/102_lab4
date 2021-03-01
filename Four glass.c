#include<stdio.h>
#include<string.h>
int main()
{
    char glass[50];
    char x;
    int stone[4]={1,0,0,0};
    int n,round=0,i,a,b;
    scanf("%d",&n);
    while(round<n)
    {
        fflush(stdin);
        scanf("%s",&glass);
            for(i=0;glass[i]!='\0';i++)
            {
                x=glass[i];
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
                default: break;
                }
            }
            for(i=0;i<4;i++)
            {
                if(stone[i]==1)
                {
                    printf("%d\n",i+1);
                }
            }
        round++;
    }





    return 0;
}
