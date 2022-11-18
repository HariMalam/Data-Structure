#include <stdio.h>
int main()
{
    int S[100],Top;
    printf("Enter How Many Element You Want To Enter[Max:100]: ");
    scanf("%d",&Top);
    Top--;

    int i;
    for(i=0; i<=Top;i++)
    {
        printf("Enter Element at Top[%d]: ",i);
        scanf("%d",&S[i]);
    }

    printf("\nStack Before POP Operation: \n");
    for (i = Top; i >= 0; i--)
    {
        printf("%d\n", S[i]);
    }

    if (Top <= -1)
    {
        printf("Stack is Underflow");
    }

    else
    {
        printf("\nDeleted Element is %d", S[Top]);
        Top--;
        printf("\nStack After POP Operation: \n");
        for (i = Top; i >= 0; i--)
        {
            printf("%d\n", S[i]);
        }
    }
    return 0;
}