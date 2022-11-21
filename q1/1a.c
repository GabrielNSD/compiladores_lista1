#include <stdio.h>

int main()
{
    int n = 100000;
    char A[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            A[i][j] = 0;
        }
    }
    printf("success\n");

    return (0);
}