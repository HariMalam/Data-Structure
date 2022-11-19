#include <stdio.h>
int main()
{
    int A[100], N, LB=0, UB=0;
    int i;
    printf("Enter How Many Element You Want in Array[Max:100]: ");
    scanf("%d", &N);

    for (i = 0; i < N; i++)
    {
        printf("Enter Elemnt At POS[%d]: ", i);
        scanf("%d", &A[i]);
        UB++;
    }

    printf("\nTraversing Array:\n");
    for(i=LB;i<=UB;i++)
    {
        printf("%d ",i);
    }
    return 0;
}