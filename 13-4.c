#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int i, temp;
    FILE* source;

    if (argc == 1)
    {
        fprintf(stderr, "Usage: %s filename[s]\n", argv[0]);
        return -1;
    }
    for (i = 1; i < argc; i++)
    {
        if ((source = fopen(argv[i], "r")) == NULL)
        {
            fprintf(stderr, "Can't open file %s\n", argv[i]);
            continue;
        }
        printf("File %s:\n", argv[i]);
        while ((temp = getc(source)) != EOF)
        {
            putchar(temp);
        }
        putchar('\n');
    }

    return 0;
}
