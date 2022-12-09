#include <stdio.h>

void Queue();

void Simple_Queue();
void Circular_Queue();
void Doubly_Ended_Queue();

int Q[10], Front = -1, Rear = -1, N, Data;
int cases;

void main()
{
    printf("\nEnter Size Of Queue: ");
    scanf("%d", &N);

    Queue();

    printf("\nThanks For Executing My Program...");
    printf("Exit...");
}

void Queue()
{
    printf("\n-------------------- Queue --------------------\n");
    printf("(1) Simple Queue\n(2) Circular Queue\n(3) Doubly Ended Queue\n");
    printf("\n(0) Exit");
    printf("\n-----------------------------------------------\n");
    printf("\nEnter Your Choice: ");
    scanf("%d", &cases);

    switch (cases)
    {
    // Simple Queue
    case 1:
        Simple_Queue();
        break;

    // Circular Queue
    case 2:
        Circular_Queue();
        break;

    // Doubly Ended Queue
    case 3:
        Doubly_Ended_Queue();
        break;

    case '0':
        break;

    default:
        printf("\nPlease Select Valid Option !");
        Queue();
        break;
    }
}

// Print Queue Elements
void Print_Queue()
{
    if (Front == -1)
    {
        printf("\nQueue: ");
        printf("Empty !");
    }
    else
    {
        printf("\nFront = %d , Rear = %d\n", Front, Rear);
        printf("Queue: ");
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

void Enqueue();
void Dequeue();
void Search_Queue();

void Simple_Queue()
{
    printf("\n----------------- Simple Queue ----------------\n");
    printf("(1) Enqueue\n(2) Dequeue\n(3) Search in Queue\n");
    printf("\n(0) Back To Main Menu");
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
        Queue();
        break;

    default:
        printf("\nPlease Select Valid Option !");
        Simple_Queue();
        break;
    }
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

void CIR_Enqueue();
void CIR_Dequeue();
void Search_CIR_Queue();

void Circular_Queue()
{
    printf("\n---------------- Circular Queue ---------------\n");
    printf("(1) Circular Enqueue\n(2) Circular Dequeue\n(3) Search in Circular Queue\n");
    printf("\n(0) Back To Main Menu");
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
        Queue();
        break;

    default:
        printf("\nPlease Select Valid Option !");
        Circular_Queue();
        break;
    }
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

            if (Q[i] == Data)
            {
                flag = 1;
                break;
            }
            else if (i == Rear)
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

void DQ_Insert_Front();
void DQ_Delet_Rear();

void Doubly_Ended_Queue()
{
    printf("\n------------- Doubly Ended Queue --------------\n");
    printf("(1) Insert Front in Double Ended Queue\n(2) Delet Rear in Double Ended Queue\n");
    printf("\n(0) Back To Main Munu");
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
        Queue();
        break;

    default:
        printf("\nPlease Select Valid Option !");
        Doubly_Ended_Queue();
        break;
    }
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

    if (Rear == -1)
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