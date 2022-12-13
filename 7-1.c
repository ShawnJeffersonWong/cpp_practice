#include <stdio.h>
#define STOP '#'

int main(void)
{
    int ch, space, enter, others;
    space = enter = others = 0;

    printf("Please enter some characters ('#' to quit):\n");
    while ((ch = getchar()) != STOP)
    {
        if (ch == ' ')
        {
            space++;
        }
        else if (ch == '\n')
        {
            enter++;
        }
        else
        {
            others++;
        }
    }
    printf("Here are the messages\n");
    printf("Space: %d\n", space);
    printf("Linefeed: %d\n", enter);
    printf("Others: %d\n", others);

    return 0;
}
