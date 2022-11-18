#include <stdio.h>
int main()
{
    int a, b, i, j, k, z, u, p;
    int Q[1000], Front = -1, Rear = -1, N, Data;
    printf("Enter Size Of Queue[Max:1000]: ");
    scanf("%d", &N);
    z = 1;
    while (z == 1)
    {
        z = 0;
        a = 0;
        while (a == 0)
        {
            printf("\nSelect Option For Operation in Queue:\n1.Simple Queue\n2.Circular Queue\n3.Doubly Ended Queue\n4.Close\n");
            scanf("%d", &a);
            if (a > 4 || a < 1)
            {
                printf("Please Select Valid Option !\n");
                a = 0;
            }
        }
        switch (a)
        {
        case 1:
            b = 0;
            while (b == 0)
            {
                printf("\nSelect Option For Operation In Simple Queue:\n1.ENQUEUE\n2.DEQUEUE\n3.Back\n4.Close\n");
                scanf("%d", &b);

                if (b > 4 || b < 1)
                {
                    printf("\nPlease Select Valid Option !\n");
                    b = 0;
                }

                if (b == 3)
                {
                    z = 1;
                }

                switch (b)
                {
                case 1:
                    i = 0;
                    while (i == 0)
                    {
                        i = 1;
                        if (Front == -1)
                        {
                            Front = 0;
                        }

                        if (Rear >= N - 1)
                        {
                            printf("Queue is Overflow !");
                        }
                        else
                        {
                            printf("\nEnter Element You Want To ENQUEUE: ");
                            scanf("%d", &Data);

                            Rear++;
                            Q[Rear] = Data;
                        }
                        printf("\nQueue After ENQUEUE Operation:\n");
                        for (int i = Front; i <= Rear; i++)
                        {
                            printf("%d ", Q[i]);
                        }
                        k = 0;
                        while (k == 0)
                        {
                            printf("\n\nYour Want To ENQUEUE Again ? \n1.Yes \n2.Close\n3.Back\n");
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
                                b = 0;
                            }
                            else
                            {
                                printf("\nPlease Select Valid Option !");
                            }
                        }
                    }

                    break;
                case 2:
                    i = 0;
                    while (i == 0)
                    {
                        i = 1;
                        if (Front == -1)
                        {
                            printf("\nQueue is Underflow !");
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
                        }
                        printf("\nQueue After DEQUEUE Operation:\n");
                        
                        for (int i = Front; i <= Rear; i++)
                        {
                            if(Rear!=-1)
                            printf("%d ", Q[i]);
                        }
                        k = 0;
                        while (k == 0)
                        {
                            printf("\n\nYour Want To DEQUEUE Again ? \n1.Yes \n2.Close\n3.Back\n");
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
                                b=0;
                            }
                            else
                            {
                                printf("\nPlease Select Valid Option !");
                            }
                        }
                    }
                    break;

                default:
                    break;
                }
            }
            break;

        case 2:
        
            break;
        case 3:

            break;
        default:
            break;
        }
    }
    printf("\nLove You !");
    printf("\nThank You For Executing My Program...");

    return 0;
}