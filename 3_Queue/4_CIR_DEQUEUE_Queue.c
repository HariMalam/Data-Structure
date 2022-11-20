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

            printf("\nQueue After DEQUEUE Operation:\n");
            for (int i = Front; i <= Rear; i++)
            {
                if (i == N - 1 && Rear != N - 1)
                {
                    i = 0;
                }
                printf("%d ", Q[i]);
            }
        }
    }
    else
        printf("Please Enter Valid Size Of Queue !");

    return 0;
}