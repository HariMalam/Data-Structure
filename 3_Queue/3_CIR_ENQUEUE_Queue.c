#include <stdio.h>
int main()
{
    int Q[100], Front = -1, Rear = -1, N, Data, i;

    printf("Enter size of Queue: ");
    scanf("%d", &N);

    printf("Please Enter How Many Elements You Want To Enter: ");
    scanf("%d", &Rear);
    Rear--;

    if (Rear < N)
    {
        for (int i = 0; i <= Rear; i++)
        {
            Front = 0;
            printf("Enter Element: ");
            scanf("%d", &Q[i]);
        }

        printf("\nQueue After CIR_ENQUEUE Operation:");
        printf("\nFront=%d", Front);
        printf("\nRear=%d\n", Rear);
        printf("Queue: ");
        i = Front;
        while (i >= -1)
        {
            if (i == -1)
            {
                printf("Empty");
                break;
            }
            else if (i == Rear)
            {
                printf("%d ", Q[i]);
                break;
            }
            else if (i == N - 1)
            {

                printf("%d ", Q[i]);
                i = 0;
            }
            else
            {
                printf("%d ", Q[i]);
                i++;
            }
        }

        if ((Front == 0 && Rear == N - 1) || Rear == Front - 1) //(Rear+1)%N==Front
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
                Q[Rear] = Data;
            }
            else
            {
                Rear++;
                Q[Rear] = Data;
            }

            printf("\nQueue After CIR_ENQUEUE Operation:");
            printf("\nFront=%d", Front);
            printf("\nRear=%d\n", Rear);
            printf("Queue: ");
            i = Front;
            while (i >= -1)
            {
                if (i == -1)
                {
                    printf("Empty");
                    break;
                }
                else if (i == Rear)
                {
                    printf("%d ", Q[i]);
                    break;
                }
                else if (i == N - 1)
                {

                    printf("%d ", Q[i]);
                    i = 0;
                }
                else
                {
                    printf("%d ", Q[i]);
                    i++;
                }
            }
        }
    }
    else
        printf("Please Enter Valid Size Of Queue !");

    return 0;
}