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
        printf("\nSelect Option For Operation In Simple Queue:\n");
        printf("1.ENQUEUE\n2.DEQUEUE\n3.Search_Queue\n4.Close\n");
        scanf("%d", &a);
        if (a > 4 || a < 1)
        {
            printf("\nPlease Select Valid Option !\n");
            z = 1;
        }

        switch (a)
        {

        // ENQUEUE Operation
        case 1:
            while (a == 1)
            {

                printf("\nQueue Before ENQUEUE Operation:");
                printf("\nFront=%d", Front);
                printf("\nRear=%d\n", Rear);
                printf("Queue: ");
                for (int i = Front; i <= Rear; i++)
                {
                    if (Rear == -1)
                        printf("Empty");
                    else
                        printf("%d ", Q[i]);
                }

                // Start: Main ENQUEUE Logic

                if (Front == -1)
                {
                    Front = 0;
                }

                if (Rear >= N - 1)
                {
                    printf("\n\nQueue is Overflow !");
                }
                else
                {
                    printf("\n\nEnter Element You Want To ENQUEUE: ");
                    scanf("%d", &Data);

                    Rear++;
                    Q[Rear] = Data;

                    // End: Main ENQUEUE Logic

                    printf("\nQueue After ENQUEUE Operation:");
                    printf("\nFront=%d", Front);
                    printf("\nRear=%d\n", Rear);
                    printf("Queue: ");
                    for (int i = Front; i <= Rear; i++)
                    {
                        if (Rear == -1)
                            printf("Empty");
                        else
                            printf("%d ", Q[i]);
                    }
                }

                a = 0;
                while (a == 0)
                {
                    printf("\n\nYour Want To ENQUEUE Again ? \n1.Yes \n2.Back\n3.Close\n");
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

        // DEQUEUE Operation
        case 2:
            while (a == 2)
            {
                printf("\nQueue Before DEQUEUE Operation:");
                printf("\nFront=%d", Front);
                printf("\nRear=%d\n", Rear);
                printf("Queue: ");
                for (int i = Front; i <= Rear; i++)
                {
                    if (Rear == -1)
                        printf("Empty");
                    else
                        printf("%d ", Q[i]);
                }

                // Start: DEQUEUE Main Logic

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
                    else
                    {
                        Front++;
                    }

                    // End: DEQUEUE Main Logic

                    printf("\nQueue After DEQUEUE Operation:");
                    printf("\nFront=%d", Front);
                    printf("\nRear=%d\n", Rear);
                    printf("Queue: ");
                    for (int i = Front; i <= Rear; i++)
                    {
                        if (Rear == -1)
                            printf("Empty");
                        else
                            printf("%d ", Q[i]);
                    }
                }

                a = 0;
                while (a == 0)
                {
                    printf("\n\nYour Want To DEQUEUE Again ? \n1.Yes \n2.Back\n3.Close\n");
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

        // Search_Queue Operation
        case 3:
            while (a == 3)
            {
                printf("\nFront=%d", Front);
                printf("\nRear=%d\n", Rear);
                printf("Queue: ");
                for (int i = Front; i <= Rear; i++)
                {
                    if (Rear == -1)
                        printf("Empty");
                    else
                        printf("%d ", Q[i]);
                }
                
                // Start: Search_Queue Main Logic

                printf("\nEnter Element You Want To Find: ");
                scanf("%d", &Data);

                if (Front == -1)
                {
                    printf("Queue is Empty !");
                }
                else
                {
                    for (i = Front; i <= Rear; i++)
                    {

                        if (Q[i] == Data)
                        {
                            a = 1;
                            break;
                        }
                    }
                    if (a == 1)
                    {
                        printf("Element Found in Queue At Rear Pointer: %d", i);
                    }
                    else
                    {
                        printf("Element Not Found in Queue !");
                    }
                }
                

            // End: Search_Queue Main Logic

            a = 0;
            while (a == 0)
            {
                printf("\n\nYour Want To Search Again ? \n1.Yes \n2.Back\n3.Close\n");
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

    default:
        break;
    }
}

return 0;
}