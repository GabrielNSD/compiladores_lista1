#include <stdio.h>

int main()
{
    int n = 100000;
    int t;
    char *p, A[n][n];
    p = &A[0][0];
    t = n * n;
    for (int i = 0; i < t; i++)
        *p++ = 0;

    printf("success\n");
    return 0;
}