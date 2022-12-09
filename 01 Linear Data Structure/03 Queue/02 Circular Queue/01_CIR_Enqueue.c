#include <stdio.h>
int main()
{
    // Q     : Name of Queue
    // Front : Current Front Pointer
    // Rear  : Current Rear Pointer
    // N     : Size Of Queue
    // Data  : New Element to be Added

    int Q[10] = {10, 11, 12, 13}, Front = 0, Rear = 3, N = 10, Data;

    // Check for OVerflow condition
    if ((Front == 0 && Rear == N - 1) || Rear == Front - 1) // (Rear + 1) % N == Front
        printf("\n\nQueue is Overflow !");

    else
    {
        // Get input for New Element that you want of enqueue
        printf("\n\nEnter Element You Want To CIR_ENQUEUE: ");
        scanf("%d", &Data);

        // (when Front = -1) Updating Front Pointer
        if (Front == -1)
            Front = 0;

        // (when Rear = Size-1) Updating Rear Pointer 
        if (Rear == N - 1)
            Rear = 0;

        // (Otherwise) Increment Rear Pointer
        else
            Rear++;

        // Putting New Element in the Queue
        Q[Rear] = Data;

        // Display Queue after circular enqueue operation
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