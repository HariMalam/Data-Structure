#include <stdio.h>

int main()
{
    int Q[100], Front = -1, Rear = -1, N, Data;

    printf("Enter size of Queue: ");
    scanf("%d", &N);

    printf("Please Enter How Many Elements You Want To Enter: ");
    scanf("%d", &Rear);
    Rear--;

    for (int i = 0; i <= Rear; i++)
    {
        Front = 0;
        printf("Enter Element: ");
        scanf("%d", &Q[i]);
    }

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
        if (Rear != -1)
            printf("%d ", Q[i]);
    }

    return 0;
}