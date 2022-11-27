#include <stdio.h>

int main()
{
    int Front = 0, Rear = 2, Q[3] = {1, 2, 3};
    printf("\nFront = %d | ", Front);
    printf("Rear = %d\n", Rear);
    int i=Front;
    if (Front == -1)
    {

        printf("---------------\n");
        printf("Queue: Empty !");
        printf("\n---------------\n");
    }
    else
    {
        for (i = Front; i >= -1; i--)
        {
            printf("----");
        }
        printf("---------\n");
        printf("Queue: |");

        int i = Front;
        int N = 5;
        for (i = Front; i >= -1; i--)
        {

            printf(" %d |", Q[i]);

            if (i == Rear)
            {
                break;
            }
            else if (i == N - 1)
            {
                i = -1;
            }
        }
        printf("\n---------");
        for (i = Front; i >= -1; i--)
        {
            printf("----");
        }
    }

    return 0;
}