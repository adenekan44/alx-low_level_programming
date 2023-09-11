#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand(time(0));
    int n = rand() - RAND_MAX / 2;

    printf("%d is %s\n", n, n > 0 ? "positive" : n < 0 ? "negative" : "zero");

    return (0);
}

