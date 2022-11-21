#include <stdio.h>
#include <strings.h>

int main()
{
    int n = 100000;
    char A[n][n];

    bzero((void *)&A[0][0], (size_t)n * n * sizeof(char));

    printf("success\n");
    return 0;
}