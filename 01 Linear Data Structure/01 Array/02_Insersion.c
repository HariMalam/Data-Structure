#include <stdio.h>
int main()
{
    // A    : Name of Array
    // N    : Size of Array
    // item : item that you want to insert
    // POS  : Position where you want to insert

    int A[10] = {5, 6, 7, 8, 9};
    int N = 5, item, POS;

    printf("Enter Item That You Want To Insert: ");
    scanf("%d", &item);
    printf("Enter Position Where You Want ot Insert: ");
    scanf("%d", &POS);

    for (int i = 0; i >= POS; i--)
    {
        A[i + 1] = A[i];
    }

    A[POS] = item;
    N = N + 1;

    printf("\nArray After Insersion:\n");
    for (int i = 0; i < N; i++)
    {
        printf("%d ", A[i]);
    }

    return 0;
}