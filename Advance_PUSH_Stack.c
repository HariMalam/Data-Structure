#include <stdio.h>
int main()
{
    // S: Stack, Top: Current Pointer, N: Size Of Stack, Data: New Element to be Added
    int S[1000], Top = -1, N, Data;

    // Get input for size of stack
    printf("Enter Size Of Stack[Max:100]: ");
    scanf("%d", &N);

    int i = 0;
    while (i == 0)
    {
        // Check for Overflow Condition
        if (Top >= N - 1)
        {
            printf("Stack Overflow");
            break;
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
            for (i = Top; i >= 0; i--)
            {
                printf("%d\n", S[i]);
                // printf("%d\n",i);
            }

            int j;
            int k = 0;

            printf("\nYour Want To PUSH Again ? \n1.Yes 2.No\n");
            while (k == 0)
            {
                scanf("%d", &j);
                if (j == 1)
                {
                    i = 0;
                    k = 1;
                }
                else if (j == 2)
                {
                    i = j;
                    k = 1;
                }
                else
                {
                    printf("Please Enter 1 or 2 for Yes Or No \n1.Yes 2.No\n ");
                }
            }
        }
    }

    return 0;
}