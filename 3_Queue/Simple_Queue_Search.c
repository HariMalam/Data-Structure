#include <stdio.h>
int main()
{
    int Q[100], Front = -1, Rear = -1, N, Data, i;
    int p;
    printf("Enter size of Queue: ");
    scanf("%d", &N);

    printf("Please Enter Number Of Elements You Want To Enter: ");
    scanf("%d", &Rear);
    Rear--;

    if (Rear < N)
    {
        for (int i = 0; i <= Rear; i++)
        {
            Front = 0;
            printf("Enter Element: ");
            scanf("%d", &Q[i]);
        }

        printf("Enter Element You Want To Find: ");
        scanf("%d", &Data);

        // Simple Search

        if (Front == -1)
        {
            printf("Queue is Empty");
        }
        else
        {
            for (i = Front; i <= Rear; i++)
            {

                if (Q[i] == Data)
                {
                    p = 1;
                    break;
                }
            }
        }

        if (p == 1)
        {
            printf("Element Found in Queue At Rear Pointer: %d", i);
        }
        else
        {
            printf("Element Not Found in Queue !");
        }
    }
    else
        printf("Please Enter Valid Size Of Queue !");

    return 0;
}