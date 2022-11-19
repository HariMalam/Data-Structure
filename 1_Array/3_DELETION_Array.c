#include <stdio.h>
int main()
{
    int A[100], N, Item, POS;
    int i;
    printf("Enter How Many Element You Want in Array[Max:100]: ");
    scanf("%d", &N);

    for (i = 0; i < N; i++)
    {
        printf("Enter Elemnt At POS[%d]: ", i);
        scanf("%d", &A[i]);
    }

    printf("\nEnter Position Where You Want ot Delet: ");
    scanf("%d", &POS);

    for (i = POS; i < N; i++)
    {
        A[i] = A[i+1];
    }

    Item=A[POS];
    N = N - 1;
    
    printf("\nArray After Deletion:\n");
    for (i = 0; i < N; i++)
    {
        printf("%d ", A[i]);
    }

    return 0;
}