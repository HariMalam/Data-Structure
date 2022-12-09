#include <stdio.h>

void Doubly_Ended_Queue();

void DQ_Insert_Front();
void DQ_Delet_Rear();

int Q[10] = {10, 11, 12, 13}, Front = 1, Rear = 3, N = 10, Data;
int cases;

void main()
{
    Doubly_Ended_Queue();

    printf("\nThanks For Executing My Program...");
    printf("Exit...");
}

void Doubly_Ended_Queue()
{
    printf("\n------------- Doubly Ended Queue --------------\n");
    printf("(1) Insert Front in Double Ended Queue\n(2) Delet Rear in Double Ended Queue\n");
    printf("\n(0) Exit");
    printf("\n-----------------------------------------------\n");
    printf("\nEnter Your Choice: ");
    scanf("%d", &cases);
    switch (cases)
    {
    // Insert Front in Doubly Ended Queue
    case 1:
        DQ_Insert_Front();
        break;

    // Delet Rear in Doubly Ended Queue
    case 2:
        DQ_Delet_Rear();
        break;

    case 0:
        break;

    default:
        printf("\nPlease Select Valid Option !");
        Doubly_Ended_Queue();
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

// Doubly Eneded Insert Fornt Function
void DQ_Insert_Front()
{
    printf("\nBefore DQ Insert Front Operation:");
    Print_Queue();

    if (Front <= 0)
    {
        printf("\nQueue is Overflow From Front !\n");
    }
    else
    {
        printf("\n\nEnter Element You Want To ENQUEUE: ");
        scanf("%d", &Data);
        Front--;
        Q[Front] = Data;
        printf("\nAfter DQ Insert Front Operation:");
        Print_Queue();
    }
    Doubly_Ended_Queue();
}

void DQ_Delet_Rear()
{
    printf("\nBefore DQ Delete Rear Operation:");
    Print_Queue();

    if (Rear < Front)
    {
        printf("\nQueue is Underflow !\n");
    }
    else
    {
        Data = Q[Rear];

        if (Front == Rear)
        {
            Front = Rear = -1;
        }
        else
        {
            Rear--;
        }
        printf("\nAfter DQ Delete Rear Operation:");
        Print_Queue();
    }
    Doubly_Ended_Queue();
}