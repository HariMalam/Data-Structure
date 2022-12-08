#include <stdio.h>
int main()
{
    // Q     : Name of Queue
    // Front : Current Front Pointer
    // Rear  : Current Rear Pointer
    // N     : Size Of Queue
    // Data  : New Element to be Added

    int Q[10] = {10, 11, 12, 13}, Front = 0, Rear = 3, N = 10, Data;

    // Check for Overflow Condition
    if (Rear >= N - 1)
        printf("\nQueue is Overflow !");

    else
    {
        // Get input for New Element that you want of enqueue
        printf("\nEnter Element You Want To ENQUEUE: ");
        scanf("%d", &Data);

        // Updating Front Pointer (if Queue is Empty)
        if (Front = -1)
            Front = 0;

        // Updating Rear Pointer
        Rear++;

        // Putting New Element in the Queue
        Q[Rear] = Data;

        // Display Queue after enqueue operation
        printf("\nQueue After ENQUEUE Operation:\n");
        for (int i = Front; i <= Rear; i++)
        {
            if (Rear == -1)
                printf("Empty");
            else
                printf("%d ", Q[i]);
        }
    }

    return 0;
}