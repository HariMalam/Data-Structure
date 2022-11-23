#include <stdio.h>
int main()
{
    int A[100], N, Item, POS;
    int i;
    // printf("Enter How Many Element You Want in Array[Max:100]: ");
    // scanf("%d", &N);

    // for (i = 0; i < N; i++)
    // {
    //     printf("Enter Elemnt At POS[%d]: ", i);
    //     scanf("%d", &A[i]);
    // }

    printf("\nEnter Item You Want To Insert: ");
    scanf("%d", &Item);
    printf("\nEnter Position Where You Want ot Insert: ");
    scanf("%d", &POS);

    for (i = 0; i >= POS; i--)
    {
        A[i + 1] = A[i];
    }

    A[POS] = Item;
    N = N + 1;
    
    printf("\nArray After Insersion:\n");
    for (i = 0; i < N; i++)
    {
        printf("%d ", A[i]);
    }

    return 0;
}