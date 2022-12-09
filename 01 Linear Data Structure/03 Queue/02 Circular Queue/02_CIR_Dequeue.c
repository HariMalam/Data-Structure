#include <stdio.h>
int main()
{
    // Q     : Name of Queue
    // Front : Current Front Pointer
    // Rear  : Current Rear Pointer
    // N     : Size Of Queue
    // Data  : New Element to be Deleted

    int Q[10] = {10, 11, 12, 13}, Front = 0, Rear = 3, N = 10, Data;

    // (When Front = -1) Check for unederflow condition
    if (Front == -1)
        printf("\nQueue is Underflow !");

    // (Otherwise)
    else
    {
        // Save Element that will be deleted
        Data = Q[Front];

        // (when Front = Rear) Set Front and rear Equal to -1
        if (Front == Rear)
            Front = Rear = -1;

        // (when Front = Size-1) Updating Front Pointer
        else if (Front == N - 1)
            Front = 0;

        // (Otherwise) Increment Front Pointer
        else
            Front++;

        // Display Queue after circular dequeue operation
        printf("\nQueue After CIR_ENQUEUE Operation:\n");
        if (Front == -1)
            printf("Empty");
        else
        {
            for (int i = Front; i > -1; i++)
            {
                printf("%d ", Q[i]);

                if (i == Rear)
                    break;
                else if (i == N - 1)
                    i = -1;
            }
        }
    }

    return 0;
}