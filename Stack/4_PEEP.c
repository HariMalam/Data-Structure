#include <stdio.h>
int main()
{
    int S[100], Top, Data;
    printf("Enter How Many Element You Want To Enter[Max:100]: ");
    scanf("%d", &Top);
    Top--;

    int i;
    for (i = 0; i <= Top; i++)
    {
        printf("Enter Element at Top[%d]: ", i);
        scanf("%d", &S[i]);
    }

    int u = 0, p;
    while (u == 0)
    {
        printf("Enter Element You Want To Find: ");
        scanf("%d", &Data);
        for (int i = 0; i <= Top; i++)
        {
            if (S[i] == Data)
            {
                p = i;
            }
            else
            {
                p = 1;
            }
        }
        if (p == 1)
        {
            printf("%d Element Doesn't Match in stack!\n", Data);
        }
        else
        {
            printf("Element Match in stack!\n");
            printf("%d Found At Position(Pointer): %d", Data, p);
        }

        printf("You Want To Search Again?\n1.Yes2.Close");
        scanf("%d", &u);

        if (u == 1)
        {
            u = 0;
        }
        else if (u == 2)
        {
            u = 1;
        }
    }
    return 0;
}