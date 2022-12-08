#include <stdio.h>
int main()
{
    // S    : Name of Stack
    // TOS  : Current Top Pointer
    // N    : Size Of Stack

    int S[10] = {10, 11, 12, 13}, TOS = 3, N = 10;

    // Check for Underflow condition
    if (TOS <= -1)
        printf("Stack is Underflow");

    // Display Top most element from the stack
    else
        printf("\nTop Most Element in Stack is %d", S[TOS]);

    return 0;
}