#include <stdio.h>
int main()
{
    // S    : Name of Stack
    // TOS  : Current Pointer
    // N    : Size Of Stack
    // Data : Element that you want to find

    int S[10] = {10, 11, 12, 13}, TOS = 3, N = 10, Data;
    int flag;

    // check for Underflow condition
    if (TOS <= -1)
    {
        printf("Stack is Underflow");
    }

    else
    {
        // Get input for Element that you want to find
        printf("Enter Element You Want To Find: ");
        scanf("%d", &Data);

        // Read Data
        for (int i = 0; i <= TOS; i++)
        {
            if (S[i] == Data)
            {
                flag = 1;
                break;
            }
        }

        // Condition for displaying element found or not found
        if (flag == 1)
        {
            printf("\n%d is Found At Position(Pointer): %d", Data, flag);
        }
        else
        {
            printf("\n%d is not Found in stack!\n", Data);
        }
    }

    return 0;
}