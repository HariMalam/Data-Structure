#include <stdio.h>

void Stack();

void Push();
void Pop();
void Peep();
void Peek();

int cases;
int S[100], Tos = -1, N, Data;

void main()
{
    printf("\nEnter Size Of Stack: ");
    scanf("%d", &N);

    Stack();

    printf("\nThanks For Executing My Program...");
    printf(" \nExit...");
}

void Stack()
{
    printf("\n-------------------- Stack --------------------\n");
    printf("(1) Push\n(2) Pop\n(3) Peep\n(4) Peek\n");
    printf("\n(0) Exit");
    printf("\n-----------------------------------------------\n");
    printf("\nEnter Your Choice: ");
    scanf("%d", &cases);

    switch (cases)
    {
    // PUSH Operation
    case 1:
        Push();
        break;

    // POP Operation
    case 2:
        Pop();
        break;

    // PEEP Operation
    case 3:
        Peep();
        break;

    // PEEK Operation
    case 4:
        Peek();
        break;

    case 0:
        break;

    default:
        printf("\nPlease Select Valid Option !");
        Stack();
        break;
    }
}

// Print Stack
void Print_Stack()
{
    if (Tos == -1)
    {
        printf("Empty !\n");
    }
    else
    {
        for (int i = Tos; i >= 0; i--)
        {
            printf("%d\n", S[i]);
        }
    }
}

// Push Function
void Push()
{
    if (Tos >= N - 1)
    {
        printf("\nYou Can't Push Element Because Stack Overflow !");
    }
    else
    {
        printf("\nStack Before Push Operation:\n");
        Print_Stack();

        printf("\nEnter New Element: ");
        scanf("%d", &Data);

        Tos++;

        S[Tos] = Data;

        printf("\nStack After Push Operation:\n");
        Print_Stack();
    }
    Stack();
}

// Pop Function
void Pop()
{
    if (Tos <= -1)
    {
        printf("\nYou Can't Pop Element Because Stack is Underflow  !");
    }
    else
    {
        printf("\nDeleted Element is %d \n", S[Tos]);

        Tos--;

        printf("\nStack After Pop Operation:\n");
        Print_Stack();
    }
    Stack();
}

// Peep Function
void Peep()
{
    if (Tos <= -1)
    {
        printf("\nYou Can't Peep Element Because Stack is Underflow !");
    }
    else
    {
        printf("\nStack Before Peep Operation: \n");
        Print_Stack();

        printf("\nEnter Element You Want To Find Form Above Stack: ");
        scanf("%d", &Data);

        int i, a = 0;
        for (i = 0; i <= Tos; i++)
        {
            if (S[i] == Data)
            {
                a = 1;
                break;
            }
        }
        if (a == 1)
            printf("\n%d is Found in Stack At Position: [%d]\n", Data, i);
        else
            printf("\n%d is Not Found in Stack !\n", Data);
    }
    Stack();
}

// Peek Function
void Peek()
{
    if (Tos <= -1)
    {
        printf("\nYou Can't Peek Element Because Stack is Underflow ! \n");
    }
    else
    {
        printf("\nTop Most Element in Stack is %d\n", S[Tos]);
    }
    Stack();
}