#include <stdio.h>

int main()
{
    int y;

  
    printf("Enter 1 : For insertion\n\n Enter 2 : For deletion\n\n Enter 3 : For searching\n\n Enter 4 : For Change Element\n\n Enter 5 : for exit");
    scanf("%d",&y);

   

    switch (y)
    {
    case 1:
    {
        int a[10], i, n;

        printf("How many element you want to enter:  ");
        scanf("%d", &n);

        for (i = 0; i < n; i++)
        {
            printf("Enter the element you want to insert:  ");
            scanf("%d", &a[i]);
        }

        printf("\n\nThe array after insertion is :  ");

        for (i = 0; i < n; i++)
        {
            printf("%d ", a[i]);
        }
    }
    break;

    case 2:
    {
        int n, a[10], i, pos, item;

        printf("Enter the size of array: ");
        scanf("%d", &n);

        for (i = 0; i < n; i++)
        {
            printf("enter the value in array: ");
            scanf("%d", &a[i]);
        }

        printf("the array before deletion is: ");

        for (i = 0; i < n; i++)
        {
            printf("%d ", a[i]);
        }

        printf("\nenter the value of position: ");
        scanf("%d", &pos);

        item = a[pos];

        for (i = pos; i < n; i++)
        {
            a[i] = a[i + 1];
        }
        n--;

        printf("\n\nthe array after deletion is: ");

        for (i = 0; i < n; i++)
        {
            printf("%d ", a[i]);
        }

        printf("\nThe element deleted is %d", item);
    }
    break;

    case 3:
    {
        int a[100];
        int item, flag = 0, i, n;

        printf("Enter the size of array max[100]: ");
        scanf("%d", &n);

        for (i = 0; i < n; i++)
        {
            printf("enter the value in array at position a[%d]: ", i);
            scanf("%d", &a[i]);
        }

        printf("\nThe array is ");
        for (i = 0; i < n; i++)
        {
            printf("%d ", a[i]);
        }

        printf("\nEnter the element you want to find: ");
        scanf("%d", item);

        for (i = 0; i < n; i++)
        {
            if (a[i] == item)
            {
                flag = 1;
                break;
            }
            else
            {
                i++;
            }
        }

        if (flag == 1)
        {
            printf("\nElement is found ");
        }
        else
        {
            printf("\nElement is not found");
        }
    }
    break;

    case 4:
    {
        int a[10], i, n, j, item;

        printf("How many element you want to enter:  ");
        scanf("%d", &n);

        for (i = 0; i < n; i++)
        {
            printf("enter the value in array at position a[%d]: ", i);
            scanf("%d", &a[i]);
        }

        printf("\n\nThe array after insertion is :  ");

        for (i = 0; i < n; i++)
        {
            printf("%d ", a[i]);
        }

        printf("\nEnter the position at which you want to change : ");
        scanf("%d", &j);

        printf("\nEnter the value you want to replace at position at %d: ", j);
        scanf("%d", &item);

        for (i = 0; i < n; i++)
        {
            if (i == j)
            {
                a[i] = item;
                break;
            }
            else
            {
                i++;
            }
        }

        printf("\nThe array after change is ");

        for (i = 0; i < n; i++)
        {
            printf("%d ", a[i]);
        }
    }
    break;

    default:
        printf("Invalid Choice!! Enter choice between 1-5");
        break;
    }
    return 0;
}
