#include <stdio.h>

void Simple_Queue();

void Enqueue();
void Dequeue();
void Search_Queue();

int Q[100], Front = -1, Rear = -1, N, Data;
int cases;

void main()
{
    printf("\nEnter Size Of Queue: ");
    scanf("%d", &N);

    Simple_Queue();

    printf("\nThanks For Executing My Program...");
}

void Simple_Queue()
{
    printf("\n----------------- Simple Queue ----------------\n");
    printf("(1) Enqueue\n(2) Dequeue\n(3) Search in Queue\n");
    printf("\n(0) Exit");
    printf("\n-----------------------------------------------\n");
    printf("\nEnter Your Choice: ");
    scanf("%d", &cases);

    switch (cases)
    {
    // ENQUEUE Operation
    case 1:
        Enqueue();
        break;

    // DEQUEUE Operations
    case 2:
        Dequeue();
        break;

    // Search Element in Queue
    case 3:
        Search_Queue();
        break;

    case 0:
        break;

    default:
        printf("\nPlease Select Valid Option !");
        Simple_Queue();
        break;
    }
}

// Print Queue Elements
void Print_Queue()
{
    printf("\nQueue: ");
    if (Front == -1)
    {
        printf("Empty !");
    }
    else
    {
        for (int i = Front; i >= -1; i++)
        {

            printf("%d ", Q[i]);

            if (i == Rear)
            {
                break;
            }
            else if (i == N - 1)
            {
                i = -1;
            }
        }
    }
    printf("\n");
}

// Enqueue Function
void Enqueue()
{
    if (Rear >= N - 1)
    {
        printf("\nYou Can't Enqueue Element Because Queue is Overflow !\n");
    }
    else
    {
        printf("\nBefore Enqueue Operation:");
        Print_Queue();

        if (Front == -1)
        {
            Front = 0;
        }

        printf("\nEnter Element You Want To ENQUEUE: ");
        scanf("%d", &Data);

        Rear++;
        Q[Rear] = Data;

        printf("\nAfter Enqueue Operation:");
        Print_Queue();
    }
    Simple_Queue();
}

// Dequeue Function
void Dequeue()
{
    if (Front == -1)
    {
        printf("\nYou Can't Dequeue Element Because Queue is Underflow !\n");
    }
    else
    {
        printf("\nBefore Dequeue Operation:");
        Print_Queue();

        Data = Q[Front];
        if (Front == Rear)
        {
            Front = -1;
            Rear = -1;
        }
        else
        {
            Front++;
        }

        printf("\nAfter Dequeue Operation:");
        Print_Queue();
    }
    Simple_Queue();
}

// Search in Queue Function
void Search_Queue()
{
    int i, flag;

    if (Front == -1)
        printf("\nYou Can't Search Element Because Queue is Underflow !\n");
    else
    {
        Print_Queue();
        printf("\nEnter Element You Want To Find From Above Queue: ");
        scanf("%d", &Data);

        for (i = Front; i <= Rear; i++)
        {
            if (Q[i] == Data)
            {
                flag = 1;
                break;
            }
        }

        if (flag == 1)
        {
            printf("\n%d is Found in Queue At Rear Pointer [%d]\n", Data, i);
        }
        else
        {
            printf("\n%d is Not Found in Queue !\n", Data);
        }
    }
    Simple_Queue();
}