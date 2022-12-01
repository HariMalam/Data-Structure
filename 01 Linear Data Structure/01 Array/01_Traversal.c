#include <stdio.h>
int main()
{
    // A  : Name of Array
    // LB : Index of First Element of Array
    // UB : Index of Last Element of Array

    int A[5] = {5, 6, 7, 8, 9};
    int LB = 0, UB = 4;

    printf("Traversing Array:\n");
    for (int i = LB; i <= UB; i++)
    {
        printf("%d ", A[i]);
    }

    return 0;
}