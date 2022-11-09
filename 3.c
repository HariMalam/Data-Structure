#include <stdio.h>
int main()
{
    int que[10], size, rear;
    printf("Define Size: ");
    scanf("%d", &size);
    printf("Define Initial rear: ");
    scanf("%d", &rear);
    int pointer;
    for (pointer = 0; pointer < rear; pointer++)
    {
        printf("\nEnter a Value in Que in position [%d]: ", pointer);
        scanf("%d", &que[pointer]);
    }
    printf("Que Before Inserting Data:\n");
    for (pointer = 0; pointer < rear; pointer++)
    {
        printf("%d ", que[pointer]);
    }

    int data;
    int y;
    printf("\n\nEnter 1 : For Insertion\nEnter 2 : For Deletion\n");
    scanf("%d",&y);
    switch (y)
    {
    case 1:
        printf("\n\nEnter a Data You Want To Enter: ");
        scanf("%d", &data);
        if (rear <= size - 1)
        {

            rear++;
            que[pointer] = data;

            printf("Que After Inerting Data: \n");
            for (pointer = 0; pointer < rear; pointer++)
            {
                printf("%d ", que[pointer]);
            }
        }
        else
            printf("Que is Owerflow");
        break;
    case 2:
        printf("\n\nEnter a Data You Want To Delet: ");
        if (rear != 0)
        {

            data = que[0];
            printf("\nDeleted Data is %d", data);
            printf("\nQue After Deleting Data: \n");
            for (pointer = 1; pointer < rear; pointer++)
            {
                printf("%d ", que[pointer]);
            }
        }
        else
            printf("Que is Empty");
        break;

    default:
        break;
    }

    return 0;
}