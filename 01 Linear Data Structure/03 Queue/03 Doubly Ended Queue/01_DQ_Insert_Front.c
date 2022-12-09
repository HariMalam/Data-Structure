#include <stdio.h>
int main()
{
    // Q     : Name of Queue
    // Front : Current Front Pointer
    // Rear  : Current Rear Pointer
    // N     : Size Of Queue
    // Data  : New Element to be Added

    int Q[10] = {10, 11, 12, 13}, Front = 1, Rear = 3, N = 10, Data;

    if (Front <= 0)
        printf("\nYou Can't insert Front Because Queue is full form Fornt !");
    else
    {
        // Get input for New Element that you want to insert Front
        printf("\nEnter Element You Want To Insert Front: ");
        scanf("%d", &Data);

        // Decrement Front Pointer
        Front--;

        // Putting New Element in the Queue
        Q[Front] = Data;

        // Display Queue after Insert Front operation
        printf("Queue After Insert Front Operation:\n");
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