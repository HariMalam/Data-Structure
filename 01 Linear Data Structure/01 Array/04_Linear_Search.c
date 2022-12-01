#include <stdio.h>
int main()
{
    // A    : Name of Array
    // N    : Size of Array
    // item : item that You Want to Search

    int A[10] = {5, 6, 7, 8, 9};
    int N = 5, item;
    int a, i;

    printf("Enter Item You Want To Search: ");
    scanf("%d", &item);

    for (i = 0; i < N; i++)
    {
        if (A[i] == item)
        {
            a = 1;
            break;
        }
    }

    if (a == 1)
    {
        printf("%d is Found At POS[%d]", item, i);
    }
    else
    {
        printf("%d is Not Found !", item);
    }
    return 0;
}