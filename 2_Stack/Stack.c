#include <stdio.h>

int main()
{
    int S[1000], Tos = -1, N, Data;
    printf("Enter Size Of Stack[Max:1000]: ");
    scanf("%d", &N);

    int a, i, z = 1;
    while (z == 1)
    {
        z = 0;
        printf("\nSelect Option For Operation In Stack:\n");
        printf("1.PUSH\n2.POP\n3.PEEP\n4.PEEK\n5.Close\n");
        scanf("%d", &a);
        if (a > 5 || a < 1)
        {
            printf("\nPlease Select Valid Option !\n");
            z = 0;
        }
        switch (a)
        {

        // PUSH Operation
        case 1:
            while (a == 1)
            {

                // START
                if (Tos >= N - 1)
                {
                    printf("\nStack Overflow !");
                }
                else
                {
                    printf("\nEnter New Element: ");
                    scanf("%d", &Data);
                    Tos++;
                    S[Tos] = Data;
                    printf("\nStack After PUSH Operation:\n");
                    for (i = Tos; i >= 0; i--)
                    {
                        printf("%d\n", S[i]);
                    }
                }
                // END

                a = 0;
                while (a == 0)
                {
                    printf("\nYour Want To PUSH Again ? \n1.Yes \n2.Back\n3.Close\n");
                    scanf("%d", &a);
                    if (a == 1)
                    {
                        a = 1;
                    }
                    else if (a == 2)
                    {
                        a = 404;
                        z = 1;
                    }
                    else if (a == 3)
                    {
                        a = 404;
                    }
                    else
                    {
                        printf("\nPlease Select Valid Option !");
                        a = 0;
                    }
                }
            }
            break;

        // POP Operation
        case 2:
            while (a == 2)
            {

                // START
                if (Tos <= -1)
                {
                    printf("\nStack is Underflow");
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
                // END

                a = 0;
                while (a == 0)
                {
                    printf("\nYour Want To POP Again ? \n1.Yes \n2.Back\n3.Close\n");
                    scanf("%d", &a);
                    if (a == 1)
                    {

                        a = 2;
                    }
                    else if (a == 2)
                    {
                        a = 404;
                        z = 1;
                    }
                    else if (a == 3)
                    {
                        a = 404;
                    }
                    else
                    {
                        printf("\nPlease Select Valid Option !");
                        a = 0;
                    }
                }
            }
            break;

        // PEEP Operation
        case 3:
            while (a == 3)
            {

                // START
                a = 0;
                printf("\nEnter Element You Want To Find: ");
                scanf("%d", &Data);
                for (int i = 0; i <= Tos; i++)
                {
                    if (S[i] == Data)
                    {
                        a = i;
                        break;
                    }
                    else
                    {
                        a = -1;
                    }
                }
                if (a == -1)
                {
                    printf("\nElement %d Doesn't Match in stack!\n\n", Data);
                }
                else
                {
                    printf("\nElement %d Match in stack!\n", Data);
                    printf("Found At Position(Pointer): %d\n\n", a);
                }
                // END

                a = 0;
                while (a == 0)
                {
                    printf("Your Want To PEEP Again ? \n1.Yes \n2.Back\n3.Close\n");
                    scanf("%d", &a);
                    if (a == 1)
                    {
                        a = 3;
                    }
                    else if (a == 2)
                    {
                        a = 404;
                        z = 1;
                    }
                    else if (a == 3)
                    {
                        a = 404;
                    }
                    else
                    {
                        printf("\nPlease Select Valid Option !");
                        a = 0;
                    }
                }
            }
            break;

        // PEEK Operation
        case 4:
            // START
            if (Tos <= -1)
            {
                printf("Stack is Underflow\n");
            }
            else
            {
                printf("\nTop Most Element in Stack is %d\n", S[Tos]);
            }
            // END

            z = 1;
            break;

        default:
            z = 0;
            break;
        }
    }

    return 0;
}