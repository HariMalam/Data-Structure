#include <stdio.h>
int main()
{
    int A[100], N, Item;
    int i;
    printf("Enter How Many Element You Want in Array[Max:100]: ");
    scanf("%d", &N);

    for (i = 0; i < N; i++)
    {
        printf("Enter Elemnt At POS[%d]: ", i);
        scanf("%d", &A[i]);
    }

    for (int j = 0; j < N; j++)
    {
        for (i = j; i < N; i++)
        {
            if (A[i] <= A[j])
            {
                int temp = A[i];
                A[i] = A[j];
                A[j] = temp;
            }
        }
    }

    printf("Array Elements After Sorting Array: \n");
    for (i = 0; i < N; i++)
    {
        printf("%d ", A[i]);
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
            i = -1;
            break;
        }
    }
    if (i == -1)
    {
        printf("Match Found At POS[%d] (In Sorted Array)", mid);
    }
    else
    {
        printf("Match Not Found !!");
    }
    return 0;
}