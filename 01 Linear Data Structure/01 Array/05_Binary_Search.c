#include <stdio.h>
int main()
{
    // A    : Name of Array
    // N    : Size of Array
    // item : item that You Want to Search

    int A[10] = {5, 6, 7, 8, 9};
    int N = 5, item;
    int beg = 0, end = N - 1, mid = 0;
    int a, i;

    printf("\nEnter Item You Want To Search: ");
    scanf("%d", &item);

    // Sorting Array
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

    while (beg <= end)
    {
        mid = (beg + end) / 2;

        if (A[mid] < item)
        {
            beg = mid + 1;
        }
        else if (A[mid] > item)
        {
            end = mid - 1;
        }
        else if (A[mid] == item)
        {
            a = 1;
            break;
        }
    }

    if (a == 1)
        printf("%d is Found in Array", item);
    else
        printf("%d is Not Found in Array !", item);

    return 0;
}