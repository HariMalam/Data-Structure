#include <stdio.h>
int main()
{

    // For Creating Queue
    int que[10], size, rear = -1, front = -1, data;
    printf("Define Size: ");
    scanf("%d", &size);
    int n;
    printf("How Many Elements You Want To Enter: ");
    scanf("%d", &n);
    int i;
    for (i = 0; i < n; i++)
    {
        rear++;
        printf("\nEnter a Value in Que in position [%d]: ", i);
        scanf("%d", &que[i]);
        front = 0;
    }

    // For Printing Queue
    printf("Que Before Any Operation in Queue:\n");
    for (i = 0; i <= rear; i++)
    {
        printf("%d ", que[i]);
    }

    // For Switch Case
    int y;
    printf("\n\nEnter 1 : For Insertion\nEnter 2 : For Deletion\n");
    scanf("%d", &y);

    switch (y)
    {

    // Case 1 For Insertion In Queue
    case 1:

        if (rear <= size - 1)
        {
            printf("\n\nEnter a Data You Want To Enter: ");
            scanf("%d", &data);

            rear++;
            que[rear] = data;
            front = 0;

            // For Printing Updated Queue
            printf("Que After Inerting Data: \n");
            for (i = front; i <= rear; i++)
            {
                printf("%d ", que[i]);
            }
        }
        else
            printf("Que is Owerflow");
        break;
    case 2:
        
        if (front == -1)
        {
            printf("Que is Underflow");
        }
        else
        {
            data = que[front];
            if (front == rear)
            {
                front = -1;
                rear = -1;
            }
            else
            {
                front++;
            }

            // For Printing Updated Queue
            printf("Que After Inerting Data: \n");
            for (i = front; i <= rear; i++)
            {
                printf("%d ", que[i]);
            }
        }
        break;

    default:
        break;
    }

    return 0;
}