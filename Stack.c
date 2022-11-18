#include <stdio.h>
int main()
{
    int a, i, j, k, z;
    // S: Stack, Top: Current Pointer, N: Size Of Stack, Data: New Element to be Added
    int S[1000], Top = -1, N, Data;

    // Get input for size of stack
    printf("Enter Size Of Stack[Max:1000]: ");
    scanf("%d", &N);
    z = 1;
    while (z == 1)
    {
        z = 0;
        a = 0;
        while (a == 0)
        {
            printf("\nSelect Option For Operation:\n1.PUSH\n2.POP\n3.PEEP\n4.PEEK\n5.Close\n");
            scanf("%d", &a);

            if (a > 5 || a < 1)
            {
                printf("Please Select Valid Option !\n");
                a = 0;
            }
        }
        switch (a)
        {
        case 1:
            i = 0;
            while (i == 0)
            {
                // Check for Overflow Condition
                if (Top >= N - 1)
                {
                    printf("Stack Overflow");
                    z = 0;
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
                    }

                    k = 0;
                    while (k == 0)
                    {
                        printf("\nYour Want To PUSH Again ? \n1.Yes \n2.Close\n3.Back\n");
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
                        else if (j == 3)
                        {
                            k = 1;
                            z = 1;
                        }

                        else
                        {
                            printf("\nPlease Select Valid Option !");
                            j = 0;
                        }
                    }
                }
            }

            break;
        case 2:
            i = 0;
            while (i == 0)
            {
                if (Top <= -1)
                {
                    printf("Stack is Underflow");
                    z = 1;
                    i = 1;
                }

                else
                {
                    printf("\nDeleted Element is %d", S[Top]);
                    Top--;
                    printf("\nStack After POP Operation: \n");
                    for (i = Top; i >= 0; i--)
                    {
                        printf("%d\n", S[i]);
                    }
                }
                k = 0;

                while (k == 0)
                {
                    printf("\nYour Want To POP Again ? \n1.Yes \n2.Close\n3.Back\n");
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
                    else if (j == 3)
                    {
                        k = 1;
                        z = 1;
                    }

                    else
                    {
                        printf("\nPlease Select Valid Option !");
                        j = 0;
                    }
                }
            }
            break;
        case 3:

            break;
        case 4:
            z = 1;
            if (Top <= -1)
            {
                printf("Stack is Underflow\n");
            }
            else
            {
                printf("Top Most Element in Stack is %d\n", S[Top]);
            }
            break;
        default:
            break;
        }
    }
    printf("\n\nFinal Stack After Operations:\n");
    for (i = Top; i >= 0; i--)
    {
        printf("%d\n", S[i]);
    }
    printf("\nLove You !");
    printf("\nThank You For Executing My Program...");
}