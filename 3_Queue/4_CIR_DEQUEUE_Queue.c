#include <stdio.h>
int main()
{
    int Q[100], Front = -1, Rear = -1, N, Data;

    printf("Enter size of Queue: ");
    scanf("%d", &N);

    printf("Please Enter How Many Elements You Want To Enter[Rear<=N]: ");
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
        printf("Queue is Underflow !");
    }
    else
    {
        Data = Q[Front];
        if (Front == N - 1)
        {
            Front = 0;
        }
        else
        {
            Front++;
        }
    }
    
    printf("\nQueue After DEQUEUE Operation:\n");
    for (int i = Front; i <= Rear; i++)
    {
        if (i == N - 1 && Rear!=N-1)
        {
            i = 0;
        }
        printf("%d ", Q[i]);
    }
    return 0;
}