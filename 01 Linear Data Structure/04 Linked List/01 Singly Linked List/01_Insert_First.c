#include <stdio.h>
#include <stdlib.h>

void SinglycreateList();

struct Singlylist
{
    int info;
    struct Singlylist *next;
};

struct Singlylist *Singlystart, *Singlynode;

void SinglydisplayList();

int main()
{
    Singlystart = (struct Singlylist *)malloc(sizeof(struct Singlylist));
    printf("%d\n",Singlystart->next);
    Singlystart->next = NULL;
    printf("%d\n",Singlystart->next);


	int data;

	Singlynode = Singlystart;
    printf("%d\n",Singlystart->next);
    printf("%d\n",Singlynode);
    printf("%d\n",Singlystart);

		Singlynode->next = (struct Singlylist *)malloc(sizeof(struct Singlylist));
		Singlynode = Singlynode->next;

		printf("Enter Value for new Node = ");
		scanf("%d", &data);

		Singlynode->info = data;
		Singlynode->next = NULL;

		SinglydisplayList();

        return 0;
}

void SinglycreateList()
{
}

void SinglydisplayList()
{
	struct Singlylist *node;

	if (Singlystart->next == NULL)
	{
		printf("\nDisplay Not Possible, List Is Empty\n");
		return;
	}
	else
	{
		node = Singlystart->next;
        printf("%d",Singlystart);

		printf("\n>>> ----------  Linked Singlylist  ---------- <<< \n\n");
		while (node != NULL)
		{
			printf("\t %d ", node->info);
			node = node->next;
		}
		printf("\n ----------------------------------------- \n");
		printf("\n");

	}
	fflush(stdin);
}