#include <stdio.h>
int main()
{
    int que[10], size, rear;
    printf("Define Size: ");
    scanf("%d", &size);
    printf("Define Initial rear: ");
    scanf("%d", &rear);
    int pointer;

    if (size <= rear+15
    4)
    {
        for (pointer = 0; pointer < rear; pointer++)
        {
            printf("\nEnter a Value in Que in position [%d]: ", pointer);
            scanf("%d", &que[pointer]);
        }
        for (pointer = 0; pointer < rear; pointer++)
        {
            printf("%d ", que[pointer]);
        }
        int data;
        printf("\n\nEnter a Data You Want To Enter: ");
        scanf("%d", &data);
        if (rear <= size)
        {

            rear++;
            que[pointer] = data;

            for (pointer = 0; pointer < rear; pointer++)
            {
                printf("%d ", que[pointer]);
            }
        }
        else
            printf("Que is Owerflow");
    }
    else
        printf("You Can't Creat That Que Because the rear is greterthan size");

    return 0;
}