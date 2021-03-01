#include<stdio.h>
int main()
{
    int x,y=1;
    char text_edit[200];
    char text[200];
    scanf("%s",text);
    text_edit[0]=text[0];
    for(x=0;x<sizeof text;x++)
    {
        if(text[x]!=text[x+1])
        {
            text_edit[y] = text[x+1];
            y++;
        }
        if(text[x]=='\0')
            break;
    }
    puts(text_edit);
    return 0;
}
