#include <stdio.h>
int main()
{
    int Q[100], Front = -1, Rear = -1, N, Data;

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
        if (Rear >= N - 1)
        {
            printf("\nQueue is Overflow !");
        }
        else
        {
            printf("\n\nEnter Element You Want To ENQUEUE: ");
            scanf("%d", &Data);
            Rear++;
            Q[Rear] = Data;
            if (Front = -1)
                Front = 0;

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
    }
    else
        printf("Please Enter Valid Size Of Queue !");
    return 0;
}