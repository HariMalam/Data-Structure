#include <stdio.h>

char cases;
int a, i;
int A[100], Data, POS, N, LB = 0, UB = 0;

void Array();

// Main Funtion
void main()
{
    printf("\nEnter Size Of Array: ");
    scanf("%d", &N);

    Array();

    printf("\nThanks For Executing My Program...");
    printf(" \nExit...");
}

void Traversal();
void Insersion();
void Deletion();
void Linear_Search();
void Binary_Search();
void Sort_Array();
void Print_Array();

// Array Function
void Array()
{
    printf("\n--------------------- Array --------------------");
    printf("\n(1) Traversal\n(2) Insersion\n(3) Deletion\n(4) Linear Search\n(5) Binary Search\n(6) Sort Array\n");
    printf("\n(*) Exit");
    printf("\n-----------------------------------------------\n");

    printf("\nEnter Your Choice: ");
    scanf("%s", &cases);

    switch (cases)
    {

    // Traversal
    case '1':
        Traversal();
        break;

    // Insersion
    case '2':
        Insersion();
        break;

    // Deletion
    case '3':
        Deletion();
        break;

    // Linear Search
    case '4':
        Linear_Search();
        break;

    // Binary Search
    case '5':
        Binary_Search();
        break;

    // Sort Array
    case '6':
        Sort_Array();
        break;

    case '*':
        break;

    default:
        printf("\nPlease Select Valid Option !");
        Array();
        break;
    }
}

// Print Array Elements
void Print_Array()
{
    if (UB == 0)
    {
        printf("Array: Empty !\n");
    }
    else
    {
        printf("Array: ");
        for (i = LB; i < UB; i++)
        {
            printf("%d ", A[i]);
        }
        printf("\n");
    }
}

// Traversal Funciton
void Traversal()
{
    printf("\nTraversing Array:\n");
    Print_Array();
    Array();
}

// Insersion Funciton
void Insersion()
{
    if (UB == N)
    {
        printf("\nYou Can't Insert Element Because Array is Full !\n");
    }
    else
    {
        printf("\nArray Elements Before Insersion:\n");
        Print_Array();

        i = 0;
        while (i == 0)
        {
            printf("\nEnter Position Where You Want ot Insert (Condition: Position <= %d): ", UB);
            scanf("%d", &POS);
            if (POS > UB)
            {
                printf("\nPlease Select Valid Option !");
            }
            else
            {
                i = 1;
            }
        }

        if (POS <= UB)
        {
            printf("Enter Item You Want To Insert: ");
            scanf("%d", &Data);

            for (i = UB - 1; i >= POS; i--)
            {
                A[i + 1] = A[i];
            }

            A[POS] = Data;
            UB = UB + 1;

            printf("\nArray Elements After Insersion:\n");
            Print_Array();
        }
    }
    Array();
}

// Deletion Funciton
void Deletion()
{
    if (UB == 0)
    {
        printf("\nYou Can't Delet Element Because Array is Empty !\n");
    }
    else
    {
        printf("\nArray Elements Before Deletion:\n");
        Print_Array();

        i = 0;
        while (i == 0)
        {
            printf("\nEnter Position Where You Want ot Delete (Condition: Position <= %d): ", UB - 1);
            scanf("%d", &POS);
            if (POS > UB)
            {
                printf("\nPlease Select Valid Option !");
            }
            else
            {
                i = 1;
            }
        }

        for (i = POS; i < UB; i++)
        {
            A[i] = A[i + 1];
        }

        Data = A[POS];
        UB = UB - 1;

        printf("\nArray Elements After Deletion:\n");
        Print_Array();
    }
    Array();
}

// Linear Search Function
void Linear_Search()
{
    a = 1;
    if (UB == 0)
    {
        printf("\nYou Can't Search Element Because Array is Empty !");
    }
    else
    {
        printf("\nArray Elements Before Search:\n");
        Print_Array();

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
            printf("\n%d is Found in Array At Position: [%d]", Data, i);
        }
        else
        {
            printf("\n%d is Not Found in Array !!", Data);
        }
    }
    Array();
}

// Binary Search Funciton
void Binary_Search()
{
    if (UB == 0)
    {
        printf("\nYou Can't Search Element Because Array is Empty !");
    }
    else
    {
        printf("\nArray Elements Before Search:\n");
        Print_Array();

        for (int j = 0; j < UB; j++)
        {
            for (i = j + 1; i < UB; i++)
            {
                if (A[j] >= A[i])
                {
                    int temp = A[i];
                    A[i] = A[j];
                    A[j] = temp;
                }
            }
        }

        printf("\nEnter Item You Want To Search: ");
        scanf("%d", &Data);

        int beg = 0;
        int end = N - 1;
        int mid = 0;
        a = 0;
        while (beg <= end)
        {
            mid = (beg + end) / 2;

            if (A[mid] < Data)
            {
                beg = mid + 1;
            }
            else if (A[mid] > Data)
            {
                end = mid - 1;
            }

            else if (A[mid] == Data)
            {
                a = 1;
                break;
            }
        }
        if (a == 1)
        {
            printf("\nArray Elements After Shorting Array: \n");
            Print_Array();

            printf("\n--> %d is Found in Sorted Array At Position: [%d]", Data, mid);
        }
        else
        {
            printf("\n--> %d is Not Found in Array !!", Data);
        }
    }
    Array();
}

// Sort Array Function
void Sort_Array()
{
    if (UB == 0)
    {
        printf("\nYou Can't Sort Array Because Array is Empty !");
    }
    else
    {
        printf("\nArray Elements Before Shorting Array: \n");
        Print_Array();

        for (int j = 0; j < UB; j++)
        {
            for (i = j + 1; i < UB; i++)
            {
                if (A[j] >= A[i])
                {
                    int temp = A[i];
                    A[i] = A[j];
                    A[j] = temp;
                }
            }
        }

        printf("\nArray Elements After Shorting Array: \n");
        Print_Array();
    }
    Array();
}