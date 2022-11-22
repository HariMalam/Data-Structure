#include <stdio.h>
int main()
{
    int Q[100], Front = -1, Rear = -1, N, Data, i;

    printf("Enter size of Queue: ");
    scanf("%d", &N);

    printf("Please Enter Number Of Elements You Want To Enter: ");
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

        printf("\nQueue Before CIR_ENQUEUE Operation:");
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
            i = Front;
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
    }
    else
        printf("Please Enter Valid Size Of Queue !");

    return 0;
}