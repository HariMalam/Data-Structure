#include <stdio.h>
int main()
{
    // A    : Name of Array
    // N    : Size of Array
    // item : item that Will be deleted
    // POS  : Position where you want to Delete

    int A[5] = {5, 6, 7, 8, 9};
    int N = 5, item, POS;

    printf("Enter Position Where You Want ot Delete: ");
    scanf("%d", &POS);

    item = A[POS];

    for (int i = POS; i < N; i++)
    {
        A[i] = A[i + 1];
    }

    N = N - 1;

    printf("\nArray After Deletion:\n");
    for (int i = 0; i < N; i++)
    {
        printf("%d ", A[i]);
    }

    return 0;
}