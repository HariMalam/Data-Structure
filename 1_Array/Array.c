#include <stdio.h>
int main()
{
    int n;
    int z = 1;
    while (z == 1)
    {
        int i = 0;
        while (i == 0)
        {
            printf("\n\nPlease Select Option For Operations in Array: \n");
            printf("1.Traversal\n2.Insersion\n3.Deletion\n4.Linear Search\n5.Binary Search\n6.Sort_Array\n7.Close\n");
            scanf("%d", &n);

            i = 1;
            if (n < 1 || n > 7)
            {
                printf("Please Select Valid Option !");
                i = 0;
            }
        }
        int A[100], N, LB, UB, POS, Item, p;
        switch (n)
        {
        case 1:
            LB = 0;
            UB = 0;
            printf("Enter How Many Element You Want in Array[Max:100]: ");
            scanf("%d", &N);

            for (i = 0; i < N; i++)
            {
                printf("Enter Elemnt At POS[%d]: ", i);
                scanf("%d", &A[i]);
                UB++;
            }

            printf("\nTraversing Array:\n");
            for (i = LB; i < UB; i++)
            {
                printf("%d ", A[i]);
            }

            break;
        case 2:

            printf("Enter How Many Element You Want in Array[Max:100]: ");
            scanf("%d", &N);

            for (i = 0; i < N; i++)
            {
                printf("Enter Elemnt At POS[%d]: ", i);
                scanf("%d", &A[i]);
            }

            printf("\nEnter Item You Want To Insert: ");
            scanf("%d", &Item);
            printf("\nEnter Position Where You Want ot Insert: ");
            scanf("%d", &POS);

            for (i = N - 1; i >= POS; i--)
            {
                A[i + 1] = A[i];
            }

            A[POS] = Item;
            N = N + 1;

            printf("\nArray After Insersion:\n");
            for (i = 0; i < N; i++)
            {
                printf("%d ", A[i]);
            }

            break;
        case 3:

            printf("Enter How Many Element You Want in Array[Max:100]: ");
            scanf("%d", &N);

            for (i = 0; i < N; i++)
            {
                printf("Enter Elemnt At POS[%d]: ", i);
                scanf("%d", &A[i]);
            }

            printf("\nEnter Position Where You Want ot Delet: ");
            scanf("%d", &POS);

            for (i = POS; i < N; i++)
            {
                A[i] = A[i + 1];
            }

            Item = A[POS];
            N = N - 1;

            printf("\nArray After Deletion:\n");
            for (i = 0; i < N; i++)
            {
                printf("%d ", A[i]);
            }

            break;
        case 4:
            printf("Enter How Many Element You Want in Array[Max:100]: ");
            scanf("%d", &N);

            for (i = 0; i < N; i++)
            {
                printf("Enter Elemnt At POS[%d]: ", i);
                scanf("%d", &A[i]);
            }

            printf("\nEnter Item You Want To Search: ");
            scanf("%d", &Item);

            for (i = 0; i < N; i++)
            {
                if (A[i] == Item)
                {
                    p = 1;
                    break;
                }
                else
                    p = 0;
            }

            if (p == 1)
            {
                printf("Match Found At POS[%d]", i);
            }
            else
            {
                printf("Match Not Found !!");
            }

            break;
        case 5:
            printf("Enter How Many Element You Want in Array[Max:100]: ");
            scanf("%d", &N);

            for (i = 0; i < N; i++)
            {
                printf("Enter Elemnt At POS[%d]: ", i);
                scanf("%d", &A[i]);
            }

            for (int j = 0; j < N; j++)
            {
                for (i = j; i < N; i++)
                {
                    if (A[i] > A[i + 1])
                    {
                        int temp = A[i];
                        A[i] = A[i + 1];
                        A[i + 1] = temp;
                    }
                }
            }

            printf("Array Elements After Shorting Array: \n");
            for (i = 0; i < N; i++)
            {
                printf("%d ", A[i]);
            }

            printf("\nEnter Item You Want To Search: ");
            scanf("%d", &Item);

            int beg = 0;
            int end = N - 1;
            int mid = 0;
            while (beg <= end)
            {
                mid = (beg + end) / 2;

                if (A[mid] < Item)
                {
                    beg = mid + 1;
                }
                else if (A[mid] > Item)
                {
                    end = mid - 1;
                }

                else if (A[mid] == Item)
                {
                    p = 1;
                    break;
                }
            }

            if (p == 1)
            {
                printf("Match Found At POS[%d] (In Sorted Array)", mid);
            }
            else
            {
                printf("Match Not Found !!");
            }

            break;
        case 6:
            printf("Enter How Many Element You Want in Array[Max:100]: ");
            scanf("%d", &N);

            for (i = 0; i < N; i++)
            {
                printf("Enter Elemnt At POS[%d]: ", i);
                scanf("%d", &A[i]);
                UB++;
            }

            printf("\nArray Elements Before Shorting Array: \n");
            for (i = 0; i < N; i++)
            {
                printf("%d ", A[i]);
            }

            for (int j = 0; j < N; j++)
            {
                for (i = j; i < N; i++)
                {
                    if (A[i] < A[j])
                    {
                        int temp = A[i];
                        A[i] = A[j];
                        A[j] = temp;
                    }
                }
            }
            printf("\nArray Elements After Shorting Array: \n");
            for (i = 0; i < N; i++)
            {
                printf("%d ", A[i]);
            }
            break;

        default:
            z = 0;
            break;
        }
    }
    printf("\nLove You !");
    printf("\nThank You For Executing My Program...");

    return 0;
}