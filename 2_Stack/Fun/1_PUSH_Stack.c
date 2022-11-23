#include <stdio.h>
int main()
{
    int S[1000], Top = -1, N, Data;

    // Get input for size of stack
    printf("Enter Size Of Stack[Max:1000]: ");
    scanf("%d", &N);

    // Check for Overflow Condition
    if (Top >= N - 1)
    {
        printf("Stack Overflow");
    }

    else
    {
        // Get input for New Element
        printf("Enter New Element: ");
        scanf("%d", &Data);

        // Updating Top Pointer
        Top++;

        // Putting New Element in the stack
        S[Top] = Data;

        printf("\nStack After PUSH Operation:\n");
        for (int i = Top; i >= 0; i--)
        {
            printf("%d\n", S[i]);
        }
    }
    return 0;
}