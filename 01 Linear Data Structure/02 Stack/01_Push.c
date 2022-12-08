#include <stdio.h>
int main()
{
    // S    : Name of Stack
    // TOS  : Current Top Pointer
    // N    : Size Of Stack
    // Data : New Element to be Added

    int S[10], TOS = -1, N = 10, Data;

    // Check for Overflow Condition
    if (TOS >= N - 1)
        printf("Stack Overflow");

    else
    {
        // Get input for New Element that you want to push
        printf("Enter New Element: ");
        scanf("%d", &Data);

        // Increment TOS Pointer
        TOS = TOS + 1;

        // Putting New Element in the stack
        S[TOS] = Data;
    }

    // Display Stack after push operation
    printf("\nStack After PUSH Operation:\n");
    for (int i = TOS; i >= 0; i--)
    {
        printf("%d\n", S[i]);
    }

    return 0;
}