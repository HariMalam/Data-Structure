#include <stdio.h>
int main()
{
    // Q     : Name of Queue
    // Front : Current Front Pointer
    // Rear  : Current Rear Pointer
    // N     : Size Of Queue
    // Data  : Element to be Deleted

    int Q[10] = {10, 11, 12, 13}, Front = 0, Rear = 3, N = 10, Data;

    // Check Condition for Queue is full from front
    if (Rear < Front)
        printf("\nYou Can't Delete Rear Because Queue is Empty !");
    else
    {
        // Save Element that will be deleted
        Data = Q[Front];

        // Front = Rear Means Last Element 
        if(Front==Rear)
            Front=Rear=-1;

        // Decrement Rear Pointer
        else
        Rear--;

        // Display Queue after Delete From Front operation
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