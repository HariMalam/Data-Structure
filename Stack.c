#include <stdio.h>
int main()
{
    int a, i, j, k, z, u, p;
    // S: Stack, Tos: Current Pointer, N: Size Of Stack, Data: New Element to be Added
    int S[1000], Tos = -1, N, Data;

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
                if (Tos >= N - 1)
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

                    // Updating Tos Pointer
                    Tos++;

                    // Putting New Element in the stack
                    S[Tos] = Data;
                    printf("\nStack After PUSH Operation:\n");
                    for (i = Tos; i >= 0; i--)
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
                if (Tos <= -1)
                {
                    printf("Stack is Underflow");
                    z = 1;
                    i = 1;
                }

                else
                {
                    printf("\nDeleted Element is %d", S[Tos]);
                    Tos--;
                    printf("\nStack After POP Operation: \n");
                    for (i = Tos; i >= 0; i--)
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
            u = 0;
            while (u == 0)
            {
                p = 1;
                printf("\nEnter Element You Want To Find: ");
                scanf("%d", &Data);
                for (int i = 0; i <= Tos; i++)
                {
                    if (S[i] == Data)
                    {
                        p = i;
                        break;
                    }
                    else
                    {
                        p = 1;
                    }
                }
                if (p == 1)
                {
                    printf("\n%d Element Doesn't Match in stack!\n\n", Data);
                }
                else
                {
                    printf("\nElement Match in stack!\n");
                    printf("%d Found At Position(Pointer): %d\n\n", Data, p);
                }

                k = 0;
                while (k == 0)
                {
                    k = 1;

                    printf("You Want To Search Again?\n1.Yes\n2.Close\n3.Back\n");
                    scanf("%d", &u);

                    if (u == 1)
                    {
                        u = 0;
                    }
                    else if (u == 2)
                    {
                        u = 1;
                    }
                    else if (u == 3)
                    {
                        z = 1;
                    }

                    else
                    {
                        printf("\nPlease Select Valid Option !\n");
                        k = 0;
                    }
                }
            }

            break;
        case 4:
            z = 1;
            if (Tos <= -1)
            {
                printf("Stack is Underflow\n");
            }
            else
            {
                printf("Top Most Element in Stack is %d\n", S[Tos]);
            }
            break;
        default:
            break;
        }
    }
    printf("\n\nFinal Stack After Operations:\n");
    for (i = Tos; i >= 0; i--)
    {
        printf("%d\n", S[i]);
    }
    printf("\nLove You !");
    printf("\nThank You For Executing My Program...");
}