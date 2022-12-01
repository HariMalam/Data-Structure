#include <stdio.h>

int main()
{

    int Q[100], Front = -1, Rear = -1, N, Data;
    printf("Enter size of Queue: ");
    scanf("%d", &N);

    int a, i, z = 1;
    while (z == 1)
    {
        z = 0;
        printf("\nSelect Option For Operation In Circular Queue:\n");
        printf("1.CIR_ENQUEUE\n2.CIR_DEQUEUE\n3.Close\n");
        scanf("%d", &a);
        if (a > 3 || a < 1)
        {
            printf("\nPlease Select Valid Option !\n");
            z = 1;
        }

        switch (a)
        {

        // CIR_ENQUEUE Operation
        case 1:
            while (a == 1)
            {
                printf("\nQueue Before CIR_ENQUEUE Operation:");
                printf("\nFront=%d", Front);
                printf("\nRear=%d\n", Rear);
                printf("Queue: ");
                i = Front;
                for (i = Front; i >= -1; i++)
                {
                    if (Front == -1)
                    {
                        printf("Empty");
                    }
                    else
                    {
                        printf("%d ", Q[i]);

                        if (i == Rear)
                        {
                            break;
                        }
                        else if (i == N - 1)
                        {
                            i = -1;
                        }
                    }
                }

                // Start: CIR_ENQUEUE Main Logic

                if ((Front == 0 && Rear == N - 1) || Rear == Front - 1) // (Rear + 1) % N == Front
                {
                    printf("\n\nQueue is Overflow !");
                }
                else
                {
                    printf("\n\nEnter Element You Want To CIR_ENQUEUE: ");
                    scanf("%d", &Data);

                    if (Front == -1)
                    {
                        Front = 0;
                    }

                    if (Rear == N - 1)
                    {
                        Rear = 0;
                    }
                    else
                    {
                        Rear++;
                    }

                    Q[Rear] = Data;

                    // END: CIR_ENQUEUE Main Logic

                    printf("\nQueue After CIR_ENQUEUE Operation:");
                    printf("\nFront=%d", Front);
                    printf("\nRear=%d\n", Rear);
                    printf("Queue: ");
                    if (Front == -1)
                    {
                        printf("Empty");
                    }

                    for (i = Front; i > -1; i++)
                    {

                        printf("%d ", Q[i]);

                        if (i == Rear)
                        {
                            break;
                        }
                        else if (i == N - 1)
                        {
                            i = -1;
                        }
                    }
                }

                a = 0;
                while (a == 0)
                {
                    printf("\n\nYour Want To CIR_ENQUEUE Again ? \n1.Yes \n2.Back\n3.Close\n");
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

        // CIR_DEQUEUE Operation
        case 2:
            while (a == 2)
            {
                printf("\nQueue Before CIR_DEQUEUE Operation:");
                printf("\nFront=%d", Front);
                printf("\nRear=%d\n", Rear);
                printf("Queue: ");
                if (Front == -1)
                {
                    printf("Empty");
                }

                for (i = Front; i > -1; i++)
                {

                    printf("%d ", Q[i]);

                    if (i == Rear)
                    {
                        break;
                    }
                    else if (i == N - 1)
                    {
                        i = -1;
                    }
                }

                // Start: CIR_DEQUEUE Main Logic

                if (Front == -1)
                {
                    printf("\n\nQueue is Underflow !");
                }
                else
                {
                    Data = Q[Front];

                    if (Front == Rear)
                    {
                        Front = -1;
                        Rear = -1;
                    }
                    else if (Front == N - 1)
                    {
                        Front = 0;
                    }
                    else
                    {
                        Front++;
                    }

                    // END: CIR_DEQUEUE Main Logic

                    printf("\nQueue Before CIR_DEQUEUE Operation:");
                    printf("\nFront=%d", Front);
                    printf("\nRear=%d\n", Rear);
                    printf("Queue: ");
                    if (Front == -1)
                    {
                        printf("Empty");
                    }

                    for (i = Front; i > -1; i++)
                    {

                        printf("%d ", Q[i]);

                        if (i == Rear)
                        {
                            break;
                        }
                        else if (i == N - 1)
                        {
                            i = -1;
                        }
                    }
                }

                a = 0;
                while (a == 0)
                {
                    printf("\n\nYour Want To CIR_DEQUEUE Again ? \n1.Yes \n2.Back\n3.Close\n");
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

        default:
            break;
        }
    }

    return 0;
}