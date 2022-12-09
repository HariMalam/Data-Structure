#include <stdio.h>

// Q     : Name of Queue
// Front : Current Front Pointer
// Rear  : Current Rear Pointer
// N     : Size Of Queue
// Data  : Element that you want to search
int main()
{
    int Q[10] = {10, 11, 12, 13}, Front = 0, Rear = 3, N = 10, Data;
    int flag;

    // (When Front = -1) Check for Underflow Condition
    if (Front == -1)
        printf("\nYou Can't Search Element Because Queue is Underflow !\n");

    //(Otherwise)
    else
    {
        // Get input for New Element that you want to search
        printf("\nEnter Element You Want To Find From Queue: ");
        scanf("%d", &Data);

        // Read all elements of Queue
        for (int i = Front; i >= -1; i++)
        {
            // (when Current Element = Data) stop loop and flag=1 
            if (Q[i] == Data)
            {
                flag = 1;
                break;
            }

            // (when Front = Rear) stop loop
            else if (i == Rear)
                break;

            // (when Fornt = Size-1) set Front = 0 (That time we will be set -1 because when loop ended Front will be Increment that means Front = -1 + 1 = 0)
            else if (i == N - 1)
                i = -1;
        }

    // Condition for displaying element found or not found
        if (flag == 1)
            printf("\n%d is Found in Queue \n", Data);
        else
            printf("\n%d is Not Found in Queue !\n", Data);
    }
    return 0;
}