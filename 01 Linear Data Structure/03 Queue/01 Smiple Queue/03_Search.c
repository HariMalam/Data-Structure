#include <stdio.h>
int main()
{
    // Q     : Name of Queue
    // Front : Current Front Pointer
    // Rear  : Current Rear Pointer
    // N     : Size Of Queue
    // Data  : Element that you want to search

    int Q[10] = {10, 11, 12, 13}, Front = 0, Rear = 3, N = 10, Data;
    int i, flag;

    // Check for Underflow Condition
    if (Front == -1)
        printf("\nQueue is Underflow !");
    else
    {
        // Get input for New Element that you want to search
        printf("Enter Element that you want to search: ");
        scanf("%d", &Data);

        // Read all elements of Queue
        for (i = Front; i <= Rear; i++)
        {
            // Compare Every Elements with Data
            if (Q[i] == Data)
            {
                flag = 1;
                break;
            }
        }
    }

    // Condition for displaying element found or not found
    if (flag == 1)
        printf("\n%d is Found in Queue At Rear Pointer: %d", Data, i);
    else
        printf("\n%d is Not Found in Queue !", Data);

    return 0;
}