
#include <stdio.h>
int main()
{
    // A    : Name of Array
    // N    : Size of Array

    int A[10] = {2, 9, 1, 8, 4};
    int N = 5;

    for (int j = 0; j < N; j++)
    {
        for (int i = j; i < N; i++)
        {
            if (A[i] < A[j])
            {
                int temp = A[i];
                A[i] = A[j];
                A[j] = temp;
            }
        }
    }

    printf("\nArray Elements After Shorting Array: \n");
    for (int i = 0; i < N; i++)
    {
        printf("%d ", A[i]);
    }

    return 0;
}