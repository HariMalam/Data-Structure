#include <stdio.h>
int main()
{
    int A[100], N, Item, POS;
    int i, p;
    printf("Enter How Many Element You Want in Array[Max:100]: ");
    scanf("%d", &N);

    for (i = 0; i < N; i++)
    {
        printf("Enter Elemnt At POS[%d]: ", i);
        scanf("%d", &A[i]);
    }

    printf("\nEnter Item You Want To Search: ");
    scanf("%d", &Item);

    for (i = 0; i < N; i++)
    {
        if (A[i] == Item)
        {
            p = 1;
            break;
        }
        else
            p = 0;
    }

    if (p == 1)
    {
        printf("Match Found At POS[%d]", i);
    }
    else
    {
        printf("Match Not Found !!");
    }
    return 0;
}