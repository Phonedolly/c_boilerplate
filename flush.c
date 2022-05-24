#include <stdio.h>
#include <stdlib.h>

void flush()
{
    char c;
    while ((c = getchar()) != '\n' && c != EOF)
        ;
}

int main(int argc, char *argv[])
{
    int a;

    if (scanf("%d", &a) != 1)
    {
        perror(NULL);
        exit(EXIT_FAILURE);
    }
    flush();

    exit(EXIT_SUCCESS);
}
