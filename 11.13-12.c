#include<stdio.h>
#include<ctype.h>
#include<stdbool.h>

int main(int argc,char* argv[])
{
    int words=0;
    int upper=0;
    int lower=0;
    int punct=0;
    int digit=0;
    int ch;
    int inword=0;
    while((ch=getchar())!='$')
    {
        if(isupper(ch))
        {
            upper++;
        }
        else if(islower(ch))
        {
            lower++;
        }
        else if(ispunct(ch))
        {
            punct++;
        }
        else if(isdigit(ch))
        {
            digit++;
        }
        if(!isspace(ch)&&!inword)
        {
            words++;
            inword=1;
        }
        if(isspace(ch)&&inword)
        {
            inword=0;
        }
    }
    printf("words: %d\n",words);
    printf("upper: %d\n",upper);
    printf("lower: %d\n",lower);
    printf("punct: %d\n",punct);
    printf("digit: %d\n",digit);
    return 0;
}