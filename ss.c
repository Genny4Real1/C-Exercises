#include <stdio.h>
#include <stdlib.h>

int sum(int x, int y)
{
    return x+y;
}

int main (int argc, char *argv[])
{
    if (argc != 3)
    {
        printf("ERRORE\n");
        return 1;
    }

    int x = strtol(argv[1], &argv[1], 10);
    int y = strtol(argv[2], &argv[2], 10);
    printf("the sum is %d.\n", sum(x,y));
    return 0;
}
