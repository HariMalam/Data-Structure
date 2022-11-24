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

// ******************************************************************************************************************************************************** //

// <--------------------------------------------------------------------| Start: Main |-------------------------------------------------------------------> //
int main()
{
    printf("\nSelect Option For Operation:\n");
    printf("1.Array\n2.Stack\n3.Queue\n4.Link_List\n0.Close\n");
    scanf("%d", &a);

    switch (a)
    {
    // Array Operations
    case 1:
        printf("\nEnter Size Of Array: ");
        scanf("%d", &N);
        Array();
        break;

    // Stack Operations
    case 2:
        printf("\nEnter Size Of Stack: ");
        scanf("%d", &N);
        Stack();
        break;

    // QUEUE Operations
    case 3:
        printf("\nEnter Size Of Queue: ");
        scanf("%d", &N);
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

// <--------------------------------------------------------------------| End: Main |------------------------------------------------------------------> //

// ***************************************************************************************************************************************************** //

// <------------------------------------------------------------------| Start: Array |-----------------------------------------------------------------> //

// (1) Array Funcitons

void Traversal();
void Insersion();
void Deletion();
void Linear_Search();
void Binary_Search();
void Sort_Array();
void Print_Array();

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

// <-------------------------------------------------------------------| End: Array |-------------------------------------------------------------------> //

// <------------------------------------------------------------------| Start: Stack |------------------------------------------------------------------> //

// (2) Stack Funcitons

void Push();
void Pop();
void Peep();
void Peek();
void Print_Stack();

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

// <-------------------------------------------------------------------| End: Stack |-------------------------------------------------------------------> //

// <------------------------------------------------------------------| Start: Queue |------------------------------------------------------------------> //

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
        Front = -1;
        Rear = -1;
        Simple_Queue();
        break;

    // Circular Queue Operations
    case 2:
        Front = -1;
        Rear = -1;
        Circular_Queue();
        break;

    // Doubly Ended Queue Operations
    case 3:
        Doubly_Ended_Queue();
        break;

    case 4:
        main();
        break;

    case 0:
        break;

    default:
        printf("\nPlease Select Valid Option !");
        Queue();
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

    case 4:
        Queue();
        break;

    case 5:
        main();
        break;

    case 0:
        break;

    default:
        printf("\nPlease Select Valid Option !");
        Simple_Queue();
        break;
    }
}

// Circular Queue Functions

void CIR_Enqueue();
void CIR_Dequeue();
void Print_CIR_Queue();

void Circular_Queue()
{
    printf("\nSelect Option For Operation In Circular Queue:\n");
    printf("1.Circular Enqueue\n2.Circular Dequeue\n3.Back\n4.Main\n0.Close\n");
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

    case 3:
        Queue();
        break;

    case 4:
        main();
        break;

    case 0:
        break;

    default:
        printf("\nPlease Select Valid Option !");
        Circular_Queue();
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
    // Insert Front in Doubly Ended Queue
    case 1:
        DQ_Insert_Front();
        break;

    // Delet Rear in Doubly Ended Queue
    case 2:
        DQ_Delet_Rear();
        break;

    case 3:
        Queue();
        break;

    case 4:
        main();
        break;

    case 0:
        break;

    default:
        printf("\nPlease Select Valid Option !");
        Doubly_Ended_Queue();
        break;
    }
}

// <-------------------------------------------------------------------| End: Queue |-------------------------------------------------------------------> //

// <----------------------------------------------------------------| Start: Link List |----------------------------------------------------------------> //

// (4) Link List Functions

void Link_List()
{
}

// <-----------------------------------------------------------------| Endt: Link List |----------------------------------------------------------------> //

// ****************************************************************************************************************************************************** //

// <-------------------------------------------------------------| Start: Array Functions |-------------------------------------------------------------> //

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
        Print_Array();
    }
    // ======================================= End ======================================= //
    Recall_Traversal();
}

// Insersion Funciton
void Recall_Insersion();
void Insersion()
{
    // ====================================== Start ====================================== //
    if (UB == N)
    {
        printf("\nYou Can't Insert Element Because Array is Full !");
    }
    else
    {
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
        Print_Array();
    }
    // ======================================= End ======================================= //
    Recall_Insersion();
}

// Deletion Funciton
void Recall_Deletion();
void Deletion()
{
    // ====================================== Start ====================================== //
    if (UB == 0)
    {
        printf("\nYou Can't Delet Element Because Array is Empty !");
    }
    else
    {
        printf("\nEnter Position Where You Want ot Delet (Condition: POS <= %d): ", UB);
        scanf("%d", &POS);

        for (i = POS; i < UB; i++)
        {
            A[i] = A[i + 1];
        }

        Data = A[POS];
        UB = UB - 1;

        printf("\nArray After Deletion:\n");
        Print_Array();
    }
    // ======================================= End ======================================= //
    Recall_Deletion();
}

// Linear Search Function
void Recall_Linear_Search();
void Linear_Search()
{
    // ====================================== Start ====================================== //
    if (UB == 0)
    {
        printf("\nYou Can't Search Element Because Array is Empty !");
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

// Binary Search Funciton
void Recall_Binary_Search();
void Binary_Search()
{
    // ====================================== Start ====================================== //
    if (UB == 0)
    {
        printf("\nYou Can't Search Element Because Array is Empty !");
    }
    else
    {
    }
    // ======================================= End ======================================= //
    Recall_Binary_Search();
}

// Sort Funciton
void Recall_Sort_Array();
void Sort_Array()
{
    // ====================================== Start ====================================== //
    if (UB == 0)
    {
        printf("\nYou Can't Sort Array Because Array is Empty !");
    }
    else
    {
    }
    // ======================================= End ======================================= //
    Recall_Sort_Array();
}

// <--------------------------------------------------------------| End: Array Functions |--------------------------------------------------------------> //

// <-------------------------------------------------------------| Start: Stack Functions |-------------------------------------------------------------> //

// Push Function
void Recall_Push();
void Push()
{
    // ====================================== Start ====================================== //
    if (Tos >= N - 1)
    {
        printf("\nYou Can't Push Element Because Stack Overflow !");
    }

    else
    {
        printf("\nEnter New Element: ");
        scanf("%d", &Data);

        Tos++;

        S[Tos] = Data;

        printf("\nStack After PUSH Operation:\n");
        Print_Stack();
    }
    // ======================================= End ======================================= //
    Recall_Push();
}

// Pop Function
void Recall_Pop();
void Pop()
{
    // ====================================== Start ====================================== //
    if (Tos <= -1)
    {
        printf("\nYou Can't Pop Element Because Stack is Underflow");
    }
    else
    {
        printf("\nDeleted Element is %d", S[Tos]);
        Tos--;
        printf("\nStack After POP Operation: \n");
        Print_Stack();
    }
    // ======================================= End ======================================= //
    Recall_Pop();
}

// Peep Function
void Recall_Peep();
void Peep()
{
    // ====================================== Start ====================================== //
    if (Tos <= -1)
    {
        printf("\nYou Can't Peep Element Because Stack is Underflow");
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

// Peek Function
void Recall_Peek();
void Peek()
{
    // ====================================== Start ====================================== //
    if (Tos <= -1)
    {
        printf("\nYou Can't Peek Element Because Stack is Underflow\n");
    }
    else
    {
        printf("\nTop Most Element in Stack is %d\n", S[Tos]);
    }
    // ======================================= End ======================================= //
    Recall_Peek();
}

// <--------------------------------------------------------------| End: Stack Functions |--------------------------------------------------------------> //

// <-------------------------------------------------------------| Start: Queue Functions |-------------------------------------------------------------> //
// <----------------------------------------------------------| Start: Simple Queue Functions |---------------------------------------------------------> //

// Enqueue Function
void Recall_Enqueue();
void Enqueue()
{
    // ====================================== Start ====================================== //

    if (Rear >= N - 1)
    {
        printf("\nYou Can't Enqueue Element Because Queue is Overflow !");
    }
    else
    {
        printf("\nBefore Enqueue Operation:");
        Print_Simple_Queue();

        if (Front == -1)
        {
            Front = 0;
        }

        printf("\n\nEnter Element You Want To ENQUEUE: ");
        scanf("%d", &Data);

        Rear++;
        Q[Rear] = Data;

        printf("\nAfter Enqueue Operation:");
        Print_Simple_Queue();
    }
    // ======================================= End ======================================= //
    Recall_Enqueue();
}

// Dequeue Function
void Recall_Dequeue();
void Dequeue()
{
    // ====================================== Start ====================================== //
    if (Front == -1)
    {
        printf("\nYou Can't Dequeue Element Because Queue is Underflow !");
    }
    else
    {
        printf("\nBefore Dequeue Operation:");
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

        printf("\n\nAfter Dequeue Operation:");
        Print_Simple_Queue();
    }
    // ======================================= End ======================================= //
    Recall_Dequeue();
}

// Search in Queue Function
void Recall_Search_Queue();
void Search_Queue()
{
    Print_Simple_Queue();
    // ====================================== Start ====================================== //
    if (Front == -1)
    {
        printf("\n\nYou Can't Search Element Because Queue is Underflow !");
    }
    else
    {
        printf("\n\nEnter Element You Want To Find: ");
        scanf("%d", &Data);

        for (i = Front; i <= Rear; i++)
        {
            if (Q[i] == Data)
            {
                a = 0;
                break;
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
    }
    // ======================================= End ======================================= //
    Recall_Search_Queue();
}
// <----------------------------------------------------------| End: Simple Queue Functions |----------------------------------------------------------> //
// <--------------------------------------------------------| Start: Circular Queue Functions |--------------------------------------------------------> //

// Circular Enqueue Funtion
void Recall_CIR_Enqueue();
void CIR_Enqueue()
{
    // ====================================== Start ====================================== //
    printf("\nBefore Circular Enqueue Operation:");
    Print_CIR_Queue();
    if ((Front == 0 && Rear == N - 1) || Rear == Front - 1) // (Rear + 1) % N == Front
    {
        printf("\n\nYou Can't Enqueue Because Queue is Overflow !");
    }
    else
    {
        printf("\n\nEnter Element You Want To Enqueue: ");
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
        Print_CIR_Queue();
    }
    // ======================================= End ======================================= //
    Recall_CIR_Enqueue();
}

// Circular Dequeue Funtion
void Recall_CIR_Dequeue();
void CIR_Dequeue()
{
    // ====================================== Start ====================================== //
    printf("\nBefore Circular Dequeue Operation:");
    Print_CIR_Queue();

    if (Front == -1)
    {
        printf("\n\nYou Cant't Dequeue Because Queue is Underflow !");
    }
    else
    {
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

        printf("\nBefore Circular Dequeue Operation:");
        Print_CIR_Queue();
    }
    // ======================================= End ======================================= //
    Recall_CIR_Dequeue();
}
// <---------------------------------------------------------| End: Circular Queue Functions |---------------------------------------------------------> //
// <------------------------------------------------------| Start: Doubly Ended Queue Functions |------------------------------------------------------> //
void Recall_DQ_Insert_Front();
void DQ_Insert_Front()
{
    // ====================================== Start ====================================== //

    // ======================================= End ======================================= //
    Recall_DQ_Insert_Front();
}
void Recall_DQ_Delet_Rear();
void DQ_Delet_Rear()
{
    // ====================================== Start ====================================== //
    
    // ======================================= End ======================================= //
    Recall_DQ_Delet_Rear();
}
// <-------------------------------------------------------| End: Doubly Ended Queue Functions |-------------------------------------------------------> //
// <-------------------------------------------------------------| End: Queue Functions |--------------------------------------------------------------> //

// ***************************************************************************************************************************************************** //

// <-------------------------------------------------------------| Start: Print Functions |------------------------------------------------------------> //

// Print Array Elements
void Print_Array()
{
    for (i = LB; i < UB; i++)
    {
        printf("%d ", A[i]);
    }
}

// Print Stack Elements
void Print_Stack()
{
    for (i = Tos; i >= 0; i--)
    {
        printf("%d\n", S[i]);
    }
}

// Print Simple Queue Elements
void Print_Simple_Queue()
{
    printf("\nFront = %d", Front);
    printf("\nRear = %d\n", Rear);
    printf("Queue: ");
    for (int i = Front; i <= Rear; i++)
    {
        if (Rear == -1)
            printf("Empty");
        else
            printf("%d ", Q[i]);
    }
}

// Print Circular Queue Elements
void Print_CIR_Queue()
{
    printf("\nFront=%d", Front);
    printf("\nRear=%d\n", Rear);
    printf("Queue: ");
    i = Front;
    for (i = Front; i >= -1; i++)
    {
        if (Front == -1)
        {
            printf("Empty");
            break;
        }
        else
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
}

// <--------------------------------------------------------------| End: Print Functions |--------------------------------------------------------------> //

// ****************************************************************************************************************************************************** //

// <------------------------------------------------------------| Start: Recall Functions |-------------------------------------------------------------> //

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

// Recall Dequeue Function
void Recall_Dequeue()
{
    printf("\n\nYour Want To Dequeue Again ? \n1.Yes\n2.Back\n3.Main\n0.Close\n");
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

// Recall Search in Queue Function
void Recall_Search_Queue()
{
    printf("\n\nYour Want To Search Again ? \n1.Yes\n2.Back\n3.Main\n0.Close\n");
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

// Recall Circular Enqueue Funtion
void Recall_CIR_Enqueue()
{
    printf("\n\nYour Want To Circular Enqueue Queue Again ? \n1.Yes\n2.Back\n3.Main\n0.Close\n");
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

// Recall Circular Dequeue Funtion
void Recall_CIR_Dequeue()
{
    printf("\n\nYour Want To Circular Dequeue Queue Again ? \n1.Yes\n2.Back\n3.Main\n0.Close\n");
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

// Recall Doubly Ended Insert Front Queue Function
void Recall_DQ_Insert_Front()
{
    printf("\n\nYour Want To Insert In Front Again ? \n1.Yes\n2.Back\n3.Main\n0.Close\n");
    scanf("%d", &a);
    switch (a)
    {
    case 1:
        DQ_Insert_Front();
        break;
    case 2:
        Doubly_Ended_Queue();
        break;
    case 3:
        main();
        break;
    case 0:
        break;
    default:
        printf("\nPlease Select Valid Option !");
        Recall_DQ_Insert_Front();
        break;
    }
}

// Recall Doubly Ended Delet From Rear Queue Function
void Recall_DQ_Delet_Rear()
{
    printf("\n\nYour Want To Delet From Rear Again ? \n1.Yes\n2.Back\n3.Main\n0.Close\n");
    scanf("%d", &a);
    switch (a)
    {
    case 1:
        DQ_Delet_Rear();
        break;
    case 2:
        Doubly_Ended_Queue();
        break;
    case 3:
        main();
        break;
    case 0:
        break;
    default:
        printf("\nPlease Select Valid Option !");
        Recall_DQ_Delet_Rear();
        break;
    }
}

// <-------------------------------------------------------------| End: Recall Functions |-------------------------------------------------------------> //

// ***************************************************************************************************************************************************** //