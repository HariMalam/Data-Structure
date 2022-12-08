#include <stdio.h>

int main()
{
    // Q     : Name of Queue
    // Front : Current Front Pointer
    // Rear  : Current Rear Pointer
    // N     : Size Of Queue
    // Data  : New Element to be Deleted

    int Q[10] = {10, 11, 12, 13}, Front = 0, Rear = 3, N = 10, Data;

    // Check for Underflow Condition
    if (Front == -1)
        printf("\nQueue is Underflow !");
    else
    {
        // Store Element that will be deleted
        Data = Q[Front];

        // if Front = Rear -> Set Front and rear Equal to -1
        if (Front == Rear)
            Front = Rear = -1;
        // Otherwise Increment Front Pointer
        else
            Front++;

        // Display Queue after dequeue operation
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