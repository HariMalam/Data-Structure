#include <stdio.h>
int main()
{
    int A[100], N, Item;
    int i, p = 0;
    printf("Enter How Many Element You Want in Array[Max:100]: ");
    scanf("%d", &N);

    for (i = 0; i < N; i++)
    {
        printf("Enter Elemnt At POS[%d]: ", i);
        scanf("%d", &A[i]);
    }

    printf("\nEnter Item You Want To Search: ");
    scanf("%d", &Item);

    int beg = 0;
    int end = N - 1;
    int mid = 0;
    while (beg <= end)
    {
        mid = (beg + end) / 2;

        if (A[mid] < Item)
        {
            beg = mid + 1;
        }
        else if (A[mid] > Item)
        {
            end = mid - 1;
        }

        else if (A[mid] == Item)
        {
            p = 1;
            break;
        }
    }

    if (p == 1)
    {
        printf("Match Found At POS[%d]", mid);
    }
    else
    {
        printf("Match Not Found !!");
    }
    return 0;
}