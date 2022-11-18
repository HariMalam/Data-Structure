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

    // Loop for Back Button That Repeat All Program Again
    while (z == 1)
    {
        z = 0;
        a = 0;

        // Loop for reapeat Program until you chose right option
        while (a == 0)
        {
            // Printing Option and get input from user
            printf("\nSelect Option For Operation:\n1.PUSH\n2.POP\n3.PEEP\n4.PEEK\n5.Close\n");
            scanf("%d", &a);

            // Condition For Invalid Option -Help for Loop to get options again
            if (a > 5 || a < 1)
            {
                printf("Please Select Valid Option !\n");
                a = 0;
            }
        }

        // Switch Case For Options
        switch (a)
        {

        // Case 1: For Push Operations in Stack
        case 1:
            i = 0;

            // Loop For Perform Push Operation Again
            while (i == 0)
            {
                // Check for Overflow Condition
                if (Tos > N - 1)
                {
                    printf("\nStack Overflow");
                    z = 1; // Helping For Repeat All Program
                    break;
                }

                else
                {
                    // Get input for New Element
                    printf("\nEnter New Element: ");
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

                    // Loop for Buttons That Repeat All Program Again
                    while (k == 0)
                    {
                        // Printing Option and get input from user
                        printf("\nYour Want To PUSH Again ? \n1.Yes \n2.Close\n3.Back\n");
                        scanf("%d", &j);

                        // Condition For Option -Help for Loop to get options again
                        if (j == 1)
                        {
                            i = 0; // Helping For Repeat PUSH Operation
                            k = 1; // Helping For Stop Repeating Options
                        }
                        else if (j == 2)
                        {
                            i = j; // Helping For Stop Repeating Push Operation
                            k = 1; // Helping For Stop Repeating Options
                        }
                        else if (j == 3)
                        {
                            k = 1; // Helping For Stop Repeating Options
                            z = 1; // Helping For Repeat All Program
                        }
                        else
                        {
                            // k will be (k=0) zero and repeat options
                            printf("\nPlease Select Valid Option !");
                        }
                    }
                }
            }
            break;

        // Case 2: For POP Operations in Stack
        case 2:
            i = 0;

            // Loop For Perform POP Operation Again
            while (i == 0)
            {
                // Check for Underflow Condition
                if (Tos <= -1)
                {
                    printf("\nStack is Underflow");
                    z = 1; // Helping For Repeat All Program
                    i = 1; // Helping For Repeat POP Operation
                }

                else
                {
                    // Display Deleted Element
                    printf("\nDeleted Element is %d", S[Tos]);

                    // Decrement Tos
                    Tos--;

                    printf("\nStack After POP Operation: \n");
                    for (i = Tos; i >= 0; i--)
                    {
                        printf("%d\n", S[i]);
                    }
                }
                k = 0;

                // Loop for Buttons That Repeat All Program Again
                while (k == 0)
                {
                    // Printing Option and get input from user
                    printf("\nYour Want To POP Again ? \n1.Yes \n2.Close\n3.Back\n");
                    scanf("%d", &j);

                    // Condition For Option -Help for Loop to get options again
                    if (j == 1)
                    {
                        i = 0; // Helping For Repeat POP Operation
                        k = 1; // Helping For Stop Repeating Options
                    }
                    else if (j == 2)
                    {
                        i = j; // Helping For Stop Repeat POP Operation
                        k = 1; // Helping For Stop Repeating Options
                    }
                    else if (j == 3)
                    {
                        k = 1; // Helping For Stop Repeating Options
                        z = 1; // Helping For Repeat All Program
                    }

                    else
                    {
                        // k will be (k=0) zero and repeat options
                        printf("\nPlease Select Valid Option !");
                    }
                }
            }
            break;

        // Case 3: For PEEP Operations in Stack
        case 3:
            u = 0;

            // Loop For Perform PEEP Operation Again
            while (u == 0)
            {
                // Get Input for Element From User
                printf("\nEnter Element You Want To Find: ");
                scanf("%d", &Data);

                // Serching Element in Stack
                for (int i = 0; i <= Tos; i++)
                {
                    if (S[i] == Data)
                    {
                        p = i; // store position in variable p
                        break;
                    }
                    else
                    {
                        p = -1;
                    }
                }

                // Conditions for printing Match or Not Match According To Value Of P
                if (p == -1)
                {
                    printf("\n%d Element Doesn't Match in stack!\n\n", Data);
                }
                else
                {
                    printf("\nElement Match in stack!\n");
                    printf("%d Found At Position(Pointer): %d\n\n", Data, p);
                }

                k = 0;

                // Loop for Buttons That Repeat All Program Again
                while (k == 0)
                {
                    k = 1;
                    // Printing Option and get input from user
                    printf("You Want To Search Again?\n1.Yes\n2.Close\n3.Back\n");
                    scanf("%d", &u);

                    // Condition For Option -Help for Loop to get options again
                    if (u == 1)
                    {
                        u = 0; // Helping For Repeat PEEP Operation
                    }
                    else if (u == 2)
                    {
                        u = 1; // Helping For Repeat PEEP Operation
                    }
                    else if (u == 3)
                    {
                        z = 1; // Helping For Repeat All Program
                    }

                    else
                    {
                        // k will be (k=0) zero and repeat options
                        printf("\nPlease Select Valid Option !\n");
                        k = 0;
                    }
                }
            }

            break;

        // Case 3: For PEEK Operations in Stack
        case 4:

            // Check for Underflow Condition
            if (Tos <= -1)
            {
                printf("Stack is Underflow\n");
            }

            else
            {
                printf("\nTop Most Element in Stack is %d\n", S[Tos]);
            }
            z = 1; // Helping For Repeat All Program
            break;

        default:
            break;
        }
    }

    // Printing Final Stack
    printf("\n\nFinal Stack After Operations:\n");
    for (i = Tos; i >= 0; i--)
    {
        printf("%d\n", S[i]);
    }
    printf("\nLove You !");
    printf("\nThank You For Executing My Program...");

    return 0;
}