#include <stdio.h>
int main()
{
    // S    : Name of Stack
    // TOS  : Current Pointer
    // N    : Size Of Stack
    // Data : Element that will be deleted

    int S[10] = {10, 11, 12, 13}, TOS = 3, N = 10, Data;

    // check for Underflow condition
    if (TOS <= -1)
    {
        printf("Stack is Underflow");
    }

    else
    {
        // Delete Element
        Data = S[TOS];

        // Decrement TOS Pointer
        TOS = TOS - 1;
    }

    printf("\nDeleted Element is %d", Data);
    printf("\nStack After POP Operation: \n");
    for (int i = TOS; i >= 0; i--)
    {
        printf("%d\n", S[i]);
    }

    return 0;
}