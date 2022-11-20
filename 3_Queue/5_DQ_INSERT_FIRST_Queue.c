#include <stdio.h>
int main()
{
    int Q[100], Front = -1, Rear = -1, N, Data;

    printf("Enter size of Queue: ");
    scanf("%d", &N);

    printf("Please Enter How Many Elements You Want To Enter: ");
    scanf("%d",&Rear);
    Rear--;

    for (int i = 0; i <= Rear; i++)
    {
        Front=0;
        printf("Enter Element: ");
        scanf("%d",&Q[i]);
    }
    

    printf("Enter Element You Want To ENQUEUE: ");
    scanf("%d", &Data);

    if(Front==-1)
    {
        Front=0;
    }

    if (Rear >= N - 1)
    {
        printf("Queue is Overflow !");
    }
    else
    {
        Rear++;
        Q[Rear] = Data;
    }
    printf("\nQueue After ENQUEUE Operation:\n");
    for(int i=Front;i<=Rear;i++)
    {
        printf("%d ",Q[i]);
    }

    return 0;
}