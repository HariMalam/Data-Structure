
#include <stdio.h>
int main()
{
    int A[100], N, LB = 0, UB = 0;
    int i;
    printf("Enter How Many Element You Want in Array[Max:100]: ");
    scanf("%d", &N);

    for (i = 0; i < N; i++)
    {
        printf("Enter Elemnt At POS[%d]: ", i);
        scanf("%d", &A[i]);
        UB++;
    }

    printf("\nArray Elements Before Shorting Array: \n");
    for (i = 0; i < N; i++)
    {
        printf("%d ", A[i]);
    }

    for (int j = 0; j < N; j++)
    {
        for (i = j; i < N; i++)
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
    for (i = 0; i < N; i++)
    {
        printf("%d ", A[i]);
    }

    return 0;
}