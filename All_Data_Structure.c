#include <stdio.h>
void Array();
void Stack();
void Queue();
void Link_List();

int A[1000], Data, POS, LB = 0, UB = 0;
int S[1000], Tos = -1, N;
int Q[1000], Front = -1, Rear = -1;
int i;
int a;
int main()
{
    printf("\nSelect Option For Operation:\n");
    printf("1.Array\n2.Stack\n3.Queue\n4.Link_List\n0.Close\n");
    scanf("%d", &a);

    switch (a)
    {
    // Array Operations
    case 1:
        Array();
        break;

    // Stack Operations
    case 2:
        printf("\nEnter Size Of Stack[Max:1000]: ");
        scanf("%d", &N);
        Stack();
        break;

    // QUEUE Operations
    case 3:
        Queue();
        break;

    // Link List Operations
    case 4:
        Link_List();
        break;

    case 0:
        break;

    default:
        printf("\nPlease Select Valid Option !");
        main();
        break;
    }

    return 0;
}

// *********************************************************************************************************************** //

// (1) Array Funcitons

void Traversal();
void Insersion();
void Deletion();
void Linear_Search();
void Binary_Search();
void Sort_Array();

void Array()
{
    printf("\nSelect Option For Operations in Array: \n");
    printf("1.Traversal\n2.Insersion\n3.Deletion\n4.Linear Search\n5.Binary Search\n6.Sort_Array\n7.Back\n0.Close\n");
    scanf("%d", &a);

    switch (a)
    {
    // Traversal
    case 1:
        Traversal();
        break;

    // Insersion
    case 2:
        Insersion();
        break;

    // Deletion
    case 3:
        Deletion();
        break;

    // Linear Search
    case 4:
        Linear_Search();
        break;

    // Binary Search
    case 5:
        Binary_Search();
        break;

    // Sort Array
    case 6:
        Sort_Array();
        break;

    case 7:
        main();
        break;

    case 0:
        break;

    default:
        printf("\nPlease Select Valid Option !");
        Array();
        break;
    }
}

// Traversal Funciton
void Recall_Traversal();
void Traversal()
{
    // ====================================== Start ====================================== //
    if (UB == 0)
    {
        printf("\nArray is Empty !");
    }
    else
    {
        printf("\nTraversing Array:\n");
        for (i = LB; i < UB; i++)
        {
            printf("%d ", A[i]);
        }
    }
    // ======================================= End ======================================= //
    Recall_Traversal();
}
// Recall Traversal Function
void Recall_Traversal()
{
    printf("\n\nYou Want To Traversal Again ? \n1.Yes \n2.Back\n3.Main\n0.Close\n");
    scanf("%d", &a);
    switch (a)
    {
    case 1:
        Traversal();
        break;
    case 2:
        Array();
        break;
    case 3:
        main();
        break;
    case 0:
        break;
    default:
        printf("\nPlease Select Valid Option !");
        Recall_Traversal();
        break;
    }
}

// Insersion Funciton
void Recall_Insersion();
void Insersion()
{
    // ====================================== Start ====================================== //
    printf("\nEnter Position Where You Want ot Insert (Condition: Position <= %d): ", UB);
    scanf("%d", &POS);
    printf("Enter Item You Want To Insert: ");
    scanf("%d", &Data);

    for (i = UB - 1; i >= POS; i--)
    {
        A[i + 1] = A[i];
    }

    A[POS] = Data;
    UB = UB + 1;

    printf("\nArray After Insersion:\n");
    for (i = LB; i < UB; i++)
    {
        printf("%d ", A[i]);
    }
    // ======================================= End ======================================= //
    Recall_Insersion();
}
// Recall Insersion Function
void Recall_Insersion()
{
    printf("\n\nYou Want To Insersion Again ? \n1.Yes \n2.Back\n3.Main\n0.Close\n");
    scanf("%d", &a);
    switch (a)
    {
    case 1:
        Insersion();
        break;
    case 2:
        Array();
        break;
    case 3:
        main();
        break;
    case 0:
        break;
    default:
        printf("\nPlease Select Valid Option !");
        Recall_Insersion();
        break;
    }
}

// Deletion Funciton
void Recall_Deletion();
void Deletion()
{
    // ====================================== Start ====================================== //
    printf("\nEnter Position Where You Want ot Delet (Condition: POS <= %d): ", UB);
    scanf("%d", &POS);

    if (UB == 0)
    {
        printf("\nArray is Empty !");
    }
    else
    {
        for (i = POS; i < UB; i++)
        {
            A[i] = A[i + 1];
        }

        Data = A[POS];
        UB = UB - 1;

        printf("\nArray After Deletion:\n");
        for (i = 0; i < UB; i++)
        {
            printf("%d ", A[i]);
        }
    }
    // ======================================= End ======================================= //
    Recall_Deletion();
}
// Recall Deletion Function
void Recall_Deletion()
{
    printf("\n\nYou Want To Deletion Again ? \n1.Yes \n2.Back\n3.Main\n0.Close\n");
    scanf("%d", &a);
    switch (a)
    {
    case 1:
        Deletion();
        break;
    case 2:
        Array();
        break;
    case 3:
        main();
        break;
    case 0:
        break;
    default:
        printf("\nPlease Select Valid Option !");
        Recall_Deletion();
        break;
    }
}

// Linear Search Function
void Recall_Linear_Search();
void Linear_Search()
{
    // ====================================== Start ====================================== //
    if (UB == 0)
    {
        printf("\nArray is Empty !");
    }
    else
    {

        printf("\nEnter Item You Want To Search: ");
        scanf("%d", &Data);
        for (i = 0; i < UB; i++)
        {
            if (A[i] == Data)
            {
                a = 0;
                break;
            }
        }
        if (a == 0)
        {
            printf("Match Found At POS[%d]", i);
        }
        else
        {
            printf("Match Not Found !!");
        }
    }
    // ======================================= End ======================================= //
    Recall_Linear_Search();
}
// Recall Linear Search Funciton
void Recall_Linear_Search()
{
    printf("\n\nYou Want To Linear Search Again ? \n1.Yes \n2.Back\n3.Main\n0.Close\n");
    scanf("%d", &a);
    switch (a)
    {
    case 1:
        Linear_Search();
        break;
    case 2:
        Array();
        break;
    case 3:
        main();
        break;
    case 0:
        break;
    default:
        printf("\nPlease Select Valid Option !");
        Recall_Linear_Search();
        break;
    }
}

// Binary Search Funciton
void Recall_Binary_Search();
void Binary_Search()
{
    // ====================================== Start ====================================== //
    // ======================================= End ======================================= //
    Recall_Binary_Search();
}
// Recall Binary Search Funciton
void Recall_Binary_Search()
{
    printf("\nYour Want To Binary Search Again ? \n1.Yes \n2.Back\n3.Main\n0.Close\n");
    scanf("%d", &a);
    switch (a)
    {
    case 1:
        Binary_Search();
        break;
    case 2:
        Array();
        break;
    case 3:
        main();
        break;
    case 0:
        break;
    default:
        printf("\nPlease Select Valid Option !");
        Recall_Binary_Search();
        break;
    }
}

// Sort Funciton
void Recall_Sort_Array();
void Sort_Array()
{
    // ====================================== Start ====================================== //
    // ======================================= End ======================================= //
    Recall_Sort_Array();
}
// Recall Sort Funciton
void Recall_Sort_Array()
{
    printf("\nYour Want To Sort Array Again ? \n1.Yes \n2.Back\n3.Main\n0.Close\n");
    scanf("%d", &a);
    switch (a)
    {
    case 1:
        Sort_Array();
        break;
    case 2:
        Array();
        break;
    case 3:
        main();
        break;
    case 0:
        break;
    default:
        printf("\nPlease Select Valid Option !");
        Recall_Sort_Array();
        break;
    }
}

// *********************************************************************************************************************** //

// (2) Stack Funcitons

void Push();
void Pop();
void Peep();
void Peek();

void Stack()
{
    printf("\nSelect Option For Operation In Stack:\n");
    printf("1.PUSH\n2.POP\n3.PEEP\n4.PEEK\n5.Back\n0.Close\n");
    scanf("%d", &a);

    switch (a)
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

    case 5:
        main();
        break;

    case 0:
        break;

    default:
        printf("\nPlease Select Valid Option !");
        Stack();
        break;
    }
}

// Push Function
void Recall_Push();
void Push()
{
    // ====================================== Start ====================================== //
    if (Tos >= N - 1)
    {
        printf("\nStack Overflow !");
    }

    else
    {
        printf("\nEnter New Element: ");
        scanf("%d", &Data);

        Tos++;

        S[Tos] = Data;

        printf("\nStack After PUSH Operation:\n");
        for (i = Tos; i >= 0; i--)
        {
            printf("%d\n", S[i]);
        }
    }
    // ======================================= End ======================================= //
    Recall_Push();
}
// Recall Push Function
void Recall_Push()
{
    printf("\nYour Want To Push Again ? \n1.Yes\n2.Back\n3.Main\n0.Close\n");
    scanf("%d", &a);
    switch (a)
    {
    case 1:
        Push();
        break;
    case 2:
        Stack();
        break;
    case 3:
        main();
        break;
    case 0:
        break;
    default:
        printf("\nPlease Select Valid Option !");
        Recall_Push();
        break;
    }
}

// Pop Function
void Recall_Pop();
void Pop()
{
    // ====================================== Start ====================================== //
    if (Tos <= -1)
    {
        printf("\nStack is Underflow");
    }
    else
    {
        printf("\nDeleted Element is %d", S[Tos]);
        Tos--;
        printf("\nStack After POP Operation: \n");
        for (i = Tos; i >= 0; i--)
        {
            printf("%d\n", S[i]);
        }
    }
    // ======================================= End ======================================= //
    Recall_Pop();
}
// Recall Pop Function
void Recall_Pop()
{
    printf("\n\nYour Want To Pop Again ? \n1.Yes\n2.Back\n3.Main\n0.Close\n");
    scanf("%d", &a);
    switch (a)
    {
    case 1:
        Pop();
        break;
    case 2:
        Stack();
        break;
    case 3:
        main();
        break;
    case 0:
        break;
    default:
        printf("\nPlease Select Valid Option !");
        Recall_Pop();
        break;
    }
}

// Peep Function
void Recall_Peep();
void Peep()
{
    // ====================================== Start ====================================== //
    if (Tos <= -1)
    {
        printf("\nStack is Underflow");
    }
    else
    {
        printf("\nEnter Element You Want To Find: ");
        scanf("%d", &Data);
        for (int i = 0; i <= Tos; i++)
        {
            if (S[i] == Data)
            {
                a = 0;
                break;
            }
        }
        if (a == 0)
        {
            printf("\nElement %d Match in stack\n", Data);
            printf("Found At Position(Pointer): %d", a);
        }
        else
        {
            printf("\nElement %d Doesn't Match in stack !", Data);
        }
    }

    // ======================================= End ======================================= //
    Recall_Peep();
}
// Recall Peep Function
void Recall_Peep()
{
    printf("\n\nYour Want To Peep Again ? \n1.Yes\n2.Back\n3.Main\n0.Close\n");
    scanf("%d", &a);
    switch (a)
    {
    case 1:
        Peep();
        break;
    case 2:
        Stack();
        break;
    case 3:
        main();
        break;
    case 0:
        break;
    default:
        printf("\nPlease Select Valid Option !");
        Recall_Peep();
        break;
    }
}

// Peek Function
void Recall_Peek();
void Peek()
{
    // ====================================== Start ====================================== //
    if (Tos <= -1)
    {
        printf("\nStack is Underflow\n");
    }
    else
    {
        printf("\nTop Most Element in Stack is %d\n", S[Tos]);
    }
    // ======================================= End ======================================= //
    Recall_Peek();
}
// Recall Peek Function
void Recall_Peek()
{
    printf("\nYour Want To Peek Again ? \n1.Yes\n2.Back\n3.Main\n0.Close\n");
    scanf("%d", &a);
    switch (a)
    {
    case 1:
        Peek();
        break;
    case 2:
        Stack();
        break;
    case 3:
        main();
        break;
    case 0:
        break;
    default:
        printf("\nPlease Select Valid Option !");
        Recall_Peek();
        break;
    }
}

// *********************************************************************************************************************** //

// (3) Queue Funtions

void Simple_Queue();
void Circular_Queue();
void Doubly_Ended_Queue();
void Queue()
{
    printf("\nSelect Option For Operation In Queue:\n");
    printf("1.Simple Queue\n2.Circular Queue\n3.Doubly Ended Queue\n4.Back\n0.Close\n");
    scanf("%d", &a);

    switch (a)
    {
    // Simple Queue Operations
    case 1:
        Simple_Queue();
        break;

    // Circular Queue Operations
    case 2:
        Circular_Queue();
        break;

    // Doubly Ended Queue Operations
    case 3:
        Doubly_Ended_Queue();
    default:
        break;
    }
}

// Simple Queue Funcitons

void Enqueue();
void Dequeue();
void Search_Queue();
void Print_Simple_Queue();
void Simple_Queue()
{
    printf("\nSelect Option For Operation In Simple Queue:\n");
    printf("1.ENQUEUE\n2.DEQUEUE\n3.Search Element in Queue\n4.Back\n5.Main\n0.Close\n");
    scanf("%d", &a);

    switch (a)
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

    default:
        break;
    }
}

// Enqueue Function
void Recall_Enqueue();
void Enqueue()
{
    // ====================================== Start ====================================== //
    if (Front == -1)
    {
        Front = 0;
    }

    if (Rear >= N - 1)
    {
        printf("\n\nQueue is Overflow !");
    }
    else
    {
        printf("\nQueue Before Enqueue Operation:");
        Print_Simple_Queue();

        printf("\n\nEnter Element You Want To ENQUEUE: ");
        scanf("%d", &Data);

        Rear++;
        Q[Rear] = Data;

        printf("\nQueue After Enqueue Operation:");
        Print_Simple_Queue();
    }
    // ======================================= End ======================================= //
    Recall_Enqueue();
}
// Recall Enqueue Function
void Recall_Enqueue()
{
    printf("\n\nYour Want To Enqueue Again ? \n1.Yes\n2.Back\n3.Main\n0.Close\n");
    scanf("%d", &a);
    switch (a)
    {
    case 1:
        Enqueue();
        break;
    case 2:
        Simple_Queue();
        break;
    case 3:
        main();
        break;
    case 0:
        break;
    default:
        printf("\nPlease Select Valid Option !");
        Recall_Enqueue();
        break;
    }
}

// Dequeue Function
void Recall_Dequeue();
void Dequeue()
{
    // ====================================== Start ====================================== //
    if (Front == -1)
    {
        printf("\n\nQueue is Underflow !");
    }
    else
    {
        printf("\nQueue Before Dequeue Operation:");
        Print_Simple_Queue();

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

        printf("\nQueue After Dequeue Operation:");
        Print_Simple_Queue();
    }
    // ======================================= End ======================================= //
    Recall_Dequeue();
}
// Recall Dequeue Function
void Recall_Dequeue()
{
    printf("\nYour Want To Dequeue Again ? \n1.Yes\n2.Back\n3.Main\n0.Close\n");
    scanf("%d", &a);
    switch (a)
    {
    case 1:
        Dequeue();
        break;
    case 2:
        Simple_Queue();
        break;
    case 3:
        main();
        break;
    case 0:
        break;
    default:
        printf("\nPlease Select Valid Option !");
        Recall_Dequeue();
        break;
    }
}

// Search in Queue Function
void Recall_Search_Queue();
void Search_Queue()
{
    Print_Simple_Queue();
    // ====================================== Start ====================================== //
    printf("Enter Element You Want To Find: ");
    scanf("%d", &Data);

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
                a = 0;
                break;
            }
        }
    }

    if (a == 0)
    {
        printf("Element Found in Queue At Rear Pointer: %d", i);
    }
    else
    {
        printf("Element Not Found in Queue !");
    }
    // ======================================= End ======================================= //
    Recall_Dequeue();
}
// Recall Search in Queue Function
void Recall_Search_Queue()
{
    printf("\nYour Want To Search Again ? \n1.Yes\n2.Back\n3.Main\n0.Close\n");
    scanf("%d", &a);
    switch (a)
    {
    case 1:
        Dequeue();
        break;
    case 2:
        Simple_Queue();
        break;
    case 3:
        main();
        break;
    case 0:
        break;
    default:
        printf("\nPlease Select Valid Option !");
        Recall_Dequeue();
        break;
    }
}

void Print_Simple_Queue()
{
    printf("\nFront=%d", Front);
    printf("\nRear=%d\n", Rear);
    printf("Queue: ");
    for (int i = Front; i <= Rear; i++)
    {
        if (Rear == -1)
            printf("Empty");
        else
            printf("%d ", Q[i]);
    }
}

// Circular Queue Functions

void CIR_Enqueue();
void CIR_Dequeue();
void Circular_Queue()
{
    printf("\nSelect Option For Operation In Circular Queue:\n");
    printf("1.Circular ENQUEUE\n2.Circular DEQUEUE\n3.Back\n4.Main\n0.Close");
    scanf("%d", &a);

    switch (a)
    {
    // Circular ENQUEUE
    case 1:
        CIR_Enqueue();
        break;

    // Circular DEQUEUE
    case 2:
        CIR_Dequeue();
        break;

    default:
        break;
    }
}

// Circular Enqueue Funtion
void Recall_CIR_Enqueue();
void CIR_Enqueue()
{
    // ====================================== Start ====================================== //

    // ======================================= End ======================================= //
    Recall_CIR_Enqueue();
}
// Recall Circular Enqueue Funtion
void Recall_CIR_Enqueue()
{
    printf("\nYour Want To Circular Enqueue Queue Again ? \n1.Yes\n2.Back\n3.Main\n0.Close\n");
    scanf("%d", &a);
    switch (a)
    {
    case 1:
        CIR_Enqueue();
        break;
    case 2:
        Circular_Queue();
        break;
    case 3:
        main();
        break;
    case 0:
        break;
    default:
        printf("\nPlease Select Valid Option !");
        Recall_CIR_Enqueue();
        break;
    }
}

// Circular Dequeue Funtion
void Recall_CIR_Dequeue();
void CIR_Dequeue()
{
    // ====================================== Start ====================================== //

    // ======================================= End ======================================= //
    Recall_CIR_Dequeue();
}
// Recall Circular Dequeue Funtion
void Recall_CIR_Dequeue()
{
    printf("\nYour Want To Circular Dequeue Queue Again ? \n1.Yes\n2.Back\n3.Main\n0.Close\n");
    scanf("%d", &a);
    switch (a)
    {
    case 1:
        CIR_Dequeue();
        break;
    case 2:
        Circular_Queue();
        break;
    case 3:
        main();
        break;
    case 0:
        break;
    default:
        printf("\nPlease Select Valid Option !");
        Recall_CIR_Dequeue();
        break;
    }
}

// Doubly Ended Queue Functions
void DQ_Insert_Front();
void DQ_Delet_Rear();
void Doubly_Ended_Queue()
{
    printf("\nSelect Option For Operation In Doubly Ended Queue:\n");
    printf("1.Insert Front in Double Ended Queue\n2.Delet Rear in Double Ended Queue\n3.Back\n4.Main\n0.Close");
    scanf("%d", &a);

    switch (a)
    {
    // Insert Front in Double Ended Queue
    case 1:
        DQ_Insert_Front();
        break;

    // Delet Rear in Double Ended Queue
    case 2:
        DQ_Delet_Rear();
        break;

    default:
        break;
    }
}

void DQ_Insert_Front()
{
}
void DQ_Delet_Rear()
{
}

// *********************************************************************************************************************** //

// (4) Link List Functions

void Link_List()
{
}

// *********************************************************************************************************************** //