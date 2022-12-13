#include<stdio.h>
#include<ctype.h>

int main(int argc,char* argv[])
{
    char mode='p';
    char ch;
    int flag=1;
    if(argc>2)
    {
        printf("Usage: %s [-p|-u|-l]\n",argv[0]);
        flag=0;
    }
    else if(argc==2)
    {
        if(argv[1][0]!='-')
        {
        printf("Usage: %s [-p|-u|-l]\n",argv[0]);
        flag=0;
        }
        else
        {
            switch(argv[1][1])
            {
                case 'p':
                case 'u':
                case 'l':
                {
                    mode=argv[1][1];
                    break;
                }
                default:
                {
                    printf("The argument isn't p, u or l the program start to run with -p mode.\n");
                }
            }
        }
    }
    if(flag)
    {
        printf("Please enter some characters($ to quit):\n");
        while((ch=getchar())!='$')
        {
            switch(mode)
            {
                case 'p':
                {
                    putchar(ch);
                    break;
                }
                case 'u':
                {
                    putchar(toupper(ch));
                    break;
                }
                case 'l':
                {
                    putchar(tolower(ch));
                    break;
                }
            }
        }
    }
    printf("Done.\n");
    return 0;
}