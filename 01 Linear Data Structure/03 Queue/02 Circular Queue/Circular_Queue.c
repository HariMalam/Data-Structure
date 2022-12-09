#include <stdio.h>

void Circular_Queue();

void CIR_Enqueue();
void CIR_Dequeue();
void Search_CIR_Queue();

int Q[100], Front = -1, Rear = -1, N, Data;
int cases;

void main()
{
    printf("\nEnter Size Of Queue: ");
    scanf("%d", &N);

    Circular_Queue();

    printf("\nThanks For Executing My Program...");
}
void Circular_Queue()
{
    printf("\n---------------- Circular Queue ---------------\n");
    printf("(1) Circular Enqueue\n(2) Circular Dequeue\n(3) Search in Circular Queue\n");
    printf("\n(0) Exit");
    printf("\n-----------------------------------------------\n");
    printf("\nEnter Your Choice: ");
    scanf("%d", &cases);
    switch (cases)
    {
    // Circular ENQUEUE
    case 1:
        CIR_Enqueue();
        break;

    // Circular DEQUEUE
    case 2:
        CIR_Dequeue();
        break;

    // Search in Circular Queue
    case 3:
        Search_CIR_Queue();
        break;

    case 0:
        break;

    default:
        printf("\nPlease Select Valid Option !");
        Circular_Queue();
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

// Circular Enqueue Funtion
void CIR_Enqueue()
{
    if ((Front == 0 && Rear == N - 1) || Rear == Front - 1) // (Rear + 1) % N == Front
    {
        printf("\nYou Can't Enqueue Because Queue is Overflow !\n");
    }
    else
    {
        printf("\nBefore Circular Enqueue Operation:");
        Print_Queue();
        printf("\nEnter Element You Want To Enqueue: ");
        scanf("%d", &Data);

        if (Front == -1)
        {
            Front = 0;
        }

        if (Rear == N - 1)
        {
            Rear = 0;
        }
        else
        {
            Rear++;
        }

        Q[Rear] = Data;

        printf("\nAfter Circular Enqueue Operation:");
        Print_Queue();
    }
    Circular_Queue();
}

// Circular Dequeue Funtion
void CIR_Dequeue()
{
    if (Front == -1)
    {
        printf("\nYou Cant't Dequeue Because Queue is Underflow !\n");
    }
    else
    {
        printf("\nBefore Circular Dequeue Operation:");
        Print_Queue();
        Data = Q[Front];

        if (Front == Rear)
        {
            Front = -1;
            Rear = -1;
        }
        else if (Front == N - 1)
        {
            Front = 0;
        }
        else
        {
            Front++;
        }

        printf("\nAfter Circular Dequeue Operation:");
        Print_Queue();
    }
    Circular_Queue();
}

// Search in Circular Queue Funtion
void Search_CIR_Queue()
{
    int i, flag;

    if (Front == -1)
        printf("\nYou Can't Search Element Because Queue is Underflow !\n");
    else
    {
        Print_Queue();
        printf("\nEnter Element You Want To Find From Above Queue: ");
        scanf("%d", &Data);

        for (int i = Front; i >= -1; i++)
        {

            if(Q[i]==Data)
            {
                flag=1;
                break;
            }
            else if(i == Rear)
            {
                break;
            }
            else if (i == N - 1)
            {
                i = -1;
            }
        }

        if (flag == 1)
        {
            printf("\n%d is Found in Queue \n", Data);
        }
        else
        {
            printf("\n%d is Not Found in Queue !\n", Data);
        }
    }
    Circular_Queue();
}