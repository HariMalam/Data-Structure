/* Linked List All Programs
 * 1.singly linked list
 * 2.circular singly linked list
 * 3.doubly linked list
 * 4.circular doubly linked list
 */

/*
	devlop by dhruvil patel
	sem 3 - B
	Data Structure

	Linked List Master Program
	Lines = 3400
	covers 17 functions for each type
*/

#include <stdio.h>
#include <conio.h>
#include <malloc.h>
#include <stdlib.h>

// function for main menu
void singlyList();
void circularSinglyList();
void doublyList();
void circularDoublyList();
void removeList(char);

// declaration for singly linked list functions
void SinglycountNode();
void SinglycreateList();
void SinglycreateNode();
void SinglydisplayList();
void SinglyinsBegin();
void SinglyinsEnd();
void SinglyinsBeforePos();
void SinglyinsBeforeElem();
void SinglyinsAfterPos();
void SinglyinsAfterElem();
void SinglysortList();
void SinglydelBegin();
void SinglydelEnd();
void SinglydelBeforePos();
void SinglydelBeforeElem();
void SinglydelAfterPos();
void SinglydelAfterElem();
void Singlysearch();

// declaration for circular singly lined list
void CLcreateList();
void CLcreateNode();
void CLdisplayList();
void CLcountNode();
void CLinsBegin();
void CLinsEnd();
void CLinsBeforePos();
void CLinsBeforeElem();
void CLinsAfterPos();
void CLinsAfterElem();
void CLsortList();
void CLdelBegin();
void CLdelEnd();
void CLdelBeforePos();
void CLdelBeforeElem();
void CLdelAfterPos();
void CLdelAfterElem();
void CLsearch();

// declaration for doubly linked list
void DcreateList();
void DdisplayList();
void DinsBegin();
void DinsEnd();
void DinsAfterElem();
void DinsBeforeElem();
void DdelBegin();
void DdelEnd();
void DdelAfterElem();
void DdelBeforeElem();
void DcountNode();
void DsortList();
void Dsearch();
void DinsBeforePos();
void DinsAfterPos();
void DdelBeforePos();
void DdelAfterPos();

// function declaration for circular doubly linked list
void CDcreateList();
void CDdisplayList();
void CDinsBegin();
void CDinsEnd();
void CDinsAfterElem();
void CDinsBeforeElem();
void CDdelBegin();
void CDdelEnd();
void CDdelAfterElem();
void CDdelBeforeElem();
void CDcountNode();
void CDsortList();
void CDsearch();
void CDinsBeforePos();
void CDinsAfterPos();
void CDdelBeforePos();
void CDdelAfterPos();

// structures for all linked list
// structure for linked list
struct Singlylist
{
	int info;
	struct Singlylist *next;
};

struct Singlylist *Singlystart, *Singlynode;
int Singlycount = 0;

// circular singly linked lis
struct Clist
{
	int info;
	struct Clist *next;
};
struct Clist *CLstart;
int CLcount = 0;

// doubly linked list structure
struct Dlist
{
	struct Dlist *prev;
	int info;
	struct Dlist *next;
};
struct Dlist *Dstart;
int Dcount;

// circular doubly linked list
struct CDlist
{
	struct CDlist *prev;
	int info;
	struct CDlist *next;
};
struct CDlist *CDstart;
int CDcount;

int main()
{
	char ch;

	Singlystart = (struct Singlylist *)malloc(sizeof(struct Singlylist));
	Singlystart->next = NULL;
	CLstart = (struct Clist *)malloc(sizeof(struct Clist));
	CLstart->next = NULL;
	Dstart = (struct Dlist *)malloc(sizeof(struct Dlist));
	Dstart->next = NULL;
	CDstart = (struct CDlist *)malloc(sizeof(struct CDlist));
	CDstart->next = NULL;

	while (ch != 'e')
	{
		printf("\n ----------- Linked List -----------");
		printf("\n a. Singly Linked List");
		printf("\n b. Circular Singly Linked List");
		printf("\n c. Doubly Linked List");
		printf("\n d. Circular Doubly Linked List");
		printf("\n e. Exit");
		printf("\n ----------- Linked List -----------\n");

		printf("\n Enter Your Choice (a/b/c/d/e) = ");
		scanf("%c", &ch);

		switch (ch)
		{
		case 'a':
			singlyList();
			break;
		case 'b':
			circularSinglyList();
			break;
		case 'c':
			doublyList();
			break;
		case 'd':
			circularDoublyList();
			break;
		default:
			printf(" Exit...");
			exit(0);
			break;
		}
	}

	fflush(stdin);

	getch();
	return (0);
}

void singlyList()
{
	int choice;

	while (choice < 19)
	{
		printf("\n----------- Singly Linked List -----------");
		printf("\n 1. Create New Linked List");
		printf("\n 2. Display Linked List");
		printf("\n 3. Insert Node At Beginning");
		printf("\n 4. Insert Node At End");
		printf("\n 5. Insert Node After Element");
		printf("\n 6. Insert Node After Position");
		printf("\n 7. Insert Node Before Element");
		printf("\n 8. Insert Node Before Position");
		printf("\n 9. Delete Node From Beginning");
		printf("\n 10. Delete Node From End");
		printf("\n 11. Delete Node Before Position");
		printf("\n 12. Delete Node Before Element");
		printf("\n 13. Delete Node After Position");
		printf("\n 14. Delete Node After Element");
		printf("\n 15. Search ");
		printf("\n 16. Count Total Nodes");
		printf("\n 17. Sort The List");
		printf("\n 18. Exit ");
		printf("\n 19. Back to Main Menu");
		printf("\n----------- Singly Linked List -----------\n\n");

		fflush(stdin);

		printf("Enter Your Choice = ");

		scanf("%d", &choice);

		switch (choice)
		{
		case 1:
			SinglycreateList();
			break;
		case 2:
			SinglydisplayList();
			break;
		case 3:
			SinglyinsBegin();
			break;
		case 4:
			SinglyinsEnd();
			break;
		case 5:
			SinglyinsAfterElem();
			break;
		case 6:
			SinglyinsAfterPos();
			break;
		case 7:
			SinglyinsBeforeElem();
			break;
		case 8:
			SinglyinsBeforePos();
			break;
		case 9:
			SinglydelBegin();
			break;
		case 10:
			SinglydelEnd();
			break;
		case 11:
			SinglydelBeforePos();
			break;
		case 12:
			SinglydelBeforeElem();
			break;
		case 13:
			SinglydelAfterPos();
			break;
		case 14:
			SinglydelAfterElem();
			break;
		case 15:
			Singlysearch();
			break;
		case 16:
			SinglycountNode();
			printf("Nodes = %d\n", Singlycount);
			break;
		case 17:
			SinglysortList();
			break;
		case 18:
			removeList('s');
			printf(">>> Exit\n");
			exit(0);
			break;
		case 19:
			removeList('s');
			break;
		default:
			printf(">>> Invalid Choice!!\n");
		}
	}

	fflush(stdin);
}

void circularSinglyList()
{
	int ch;

	while (ch < 19)
	{
		printf("\n----------- Circular Singly Linked List -----------\n");
		printf("\n 1. Create New Linked List");
		printf("\n 2. Display List");
		printf("\n 3. count Node");
		printf("\n 4. Insert At First");
		printf("\n 5. Insert At End");
		printf("\n 6. Insert Before Position");
		printf("\n 7. Insert Before Element");
		printf("\n 8. Insert After Position");
		printf("\n 9. Insert After Element");
		printf("\n 10. Sort List");
		printf("\n 11. Delete At First");
		printf("\n 12. Delete At End");
		printf("\n 13. Delete Node Before Position");
		printf("\n 14. Delete Node Before Element");
		printf("\n 15. Delete After Position");
		printf("\n 16. Delete After Element");
		printf("\n 17. Search");
		printf("\n 18. Exit ");
		printf("\n 19. Back to Main Menu");
		printf("\n----------- Circular Singly Linked List -----------\n\n");

		printf(" Enter Your Choice = ");
		fflush(stdin);
		scanf("%d", &ch);

		switch (ch)
		{
		case 1:
			CLcreateList();
			break;
		case 2:
			CLdisplayList();
			break;
		case 3:
			CLcountNode();
			printf("Nodes = %d\n", CLcount);
			break;
		case 4:
			CLinsBegin();
			break;
		case 5:
			CLinsEnd();
			break;
		case 6:
			CLinsBeforePos();
			break;
		case 7:
			CLinsBeforeElem();
			break;
		case 8:
			CLinsAfterPos();
			break;
		case 9:
			CLinsAfterElem();
			break;
		case 10:
			CLsortList();
			break;
		case 11:
			CLdelBegin();
			break;
		case 12:
			CLdelEnd();
			break;
		case 13:
			CLdelBeforePos();
			break;
		case 14:
			CLdelBeforeElem();
			break;
		case 15:
			CLdelAfterPos();
			break;
		case 16:
			CLdelAfterElem();
			break;
		case 17:
			CLsearch();
			break;
		case 18:
			removeList('c');
			printf(">>> Exit\n");
			exit(0);
			break;
		case 19:
			removeList('c');
			break;
		default:
			printf(">>> Invalid Choice!!\n");
		}
	}

	fflush(stdin);
}

void doublyList()
{
	int ch;

	while (ch < 19)
	{
		printf("\n----------- Doubly Linked List -----------\n");
		printf(" 1. Create List");
		printf("\n 2. Display List");
		printf("\n 3. Insert Node At Beginning");
		printf("\n 4. Insert Node At End");
		printf("\n 5. Insert Node After Element");
		printf("\n 6. Insert Node After Position");
		printf("\n 7. Insert Node Before Element");
		printf("\n 8. Insert Node Before Position");
		printf("\n 9. Delete Node At Beginning");
		printf("\n 10. Delete Node At End");
		printf("\n 11. Delete Node After Element");
		printf("\n 12. Delete Node After Position");
		printf("\n 13. Delete Node Before Element");
		printf("\n 14. Delete Node Before Position");
		printf("\n 15. count Node");
		printf("\n 16. Sort List");
		printf("\n 17. Search");
		printf("\n 18. Exit ");
		printf("\n 19. Back to Main Menu");
		printf("\n----------- Doubly Linked List -----------\n\n");

		fflush(stdin);
		printf(" Enter Your Choice = ");
		scanf("%d", &ch);

		switch (ch)
		{
		case 1:
			DcreateList();
			break;
		case 2:
			DdisplayList();
			break;
		case 3:
			DinsBegin();
			break;
		case 4:
			DinsEnd();
			break;
		case 5:
			DinsAfterElem();
			break;
		case 6:
			DinsAfterPos();
			break;
		case 7:
			DinsBeforeElem();
			break;
		case 8:
			DinsBeforePos();
			break;
		case 9:
			DdelBegin();
			break;
		case 10:
			DdelEnd();
			break;
		case 11:
			DdelAfterElem();
			break;
		case 12:
			DdelAfterPos();
			break;
		case 13:
			DdelBeforeElem();
			break;
		case 14:
			DdelBeforePos();
			break;
		case 15:
			DcountNode();
			printf("Nodes = %d\n", Dcount);
			break;
		case 16:
			DsortList();
			break;
		case 17:
			Dsearch();
			break;
		case 18:
			removeList('d');
			printf(">>> Exit\n");
			exit(0);
			break;
		case 19:
			removeList('d');
			break;
		default:
			printf(">>> Invalid Choice!!\n");
		}
		fflush(stdin);
	}
}

void circularDoublyList()
{
	int ch;

	while (ch < 19)
	{
		printf("\n----------- Circular Doubly Linked List -----------\n");
		printf(" 1. Create List");
		printf("\n 2. Display List");
		printf("\n 3. Insert Node At Beginning");
		printf("\n 4. Insert Node At End");
		printf("\n 5. Insert Node After Element");
		printf("\n 6. Insert Node After Position");
		printf("\n 7. Insert Node Before Element");
		printf("\n 8. Insert Node Before Position");
		printf("\n 9. Delete Node At Beginning");
		printf("\n 10. Delete Node At End");
		printf("\n 11. Delete Node After Element");
		printf("\n 12. Delete Node After Position");
		printf("\n 13. Delete Node Before Element");
		printf("\n 14. Delete Node Before Position");
		printf("\n 15. Count Node");
		printf("\n 16. Sort List");
		printf("\n 17. Search");
		printf("\n 18. Exit ");
		printf("\n 19. Back to Main Menu");
		printf("\n----------- Circular Doubly Linked List -----------\n\n");
		fflush(stdin);
		printf(" Enter Your Choice = ");
		scanf("%d", &ch);

		switch (ch)
		{
		case 1:
			CDcreateList();
			break;
		case 2:
			CDdisplayList();
			break;
		case 3:
			CDinsBegin();
			break;
		case 4:
			CDinsEnd();
			break;
		case 5:
			CDinsAfterElem();
			break;
		case 6:
			CDinsAfterPos();
			break;
		case 7:
			CDinsBeforeElem();
			break;
		case 8:
			CDinsBeforePos();
			break;
		case 9:
			CDdelBegin();
			break;
		case 10:
			CDdelEnd();
			break;
		case 11:
			CDdelAfterElem();
			break;
		case 12:
			CDdelAfterPos();
			break;
		case 13:
			CDdelBeforeElem();
			break;
		case 14:
			CDdelBeforePos();
			break;
		case 15:
			CDcountNode();
			printf("Nodes = %d\n", CDcount);
			break;
		case 16:
			CDsortList();
			break;
		case 17:
			CDsearch();
			break;
		case 18:
			removeList('e');
			printf(">>> Exit\n");
			exit(0);
			break;
		case 19:
			removeList('e');
			break;
		default:
			printf(">>> Invalid Choice!!\n");
		}
		fflush(stdin);
	}
}

/* function definition
  A.Singly Linked List
*/

void SinglycreateList()
{
	int data;
	char ch = 'y';

	Singlynode = Singlystart;

	printf("\nLinked list Successfully Created :-) \n\n");

	while (ch == 'y' || ch == 'Y')
	{
		Singlynode->next = (struct Singlylist *)malloc(sizeof(struct Singlylist));
		Singlynode = Singlynode->next;

		printf("Enter Value for new Node = ");
		scanf("%d", &data);

		Singlynode->info = data;
		Singlynode->next = NULL;

		SinglydisplayList();

		fflush(stdin);
		printf("You want to continue? Press (y/n) = ");
		scanf("%c", &ch);
	}
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

void SinglyinsBegin()
{
	struct Singlylist *newNode;
	int data;

	if (Singlystart->next == NULL)
	{
		newNode = (struct Singlylist *)malloc(sizeof(struct Singlylist));
		printf("Enter Data For New Node = ");
		scanf("%d", &data);

		newNode->info = data;
		newNode->next = NULL;

		Singlystart->next = newNode;

		// display Singlylist
		SinglydisplayList();
	}
	else
	{
		newNode = (struct Singlylist *)malloc(sizeof(struct Singlylist));
		printf("Enter Data For New Node = ");
		scanf("%d", &data);

		newNode->info = data;
		newNode->next = Singlystart->next;
		Singlystart->next = newNode;
		// display Singlylist

		SinglydisplayList();
	}
}

void SinglyinsEnd()
{
	struct Singlylist *newNode, *node;
	int data;

	node = Singlystart;

	while (node->next != NULL)
	{
		node = node->next;
	}

	newNode = (struct Singlylist *)malloc(sizeof(struct Singlylist));
	printf("Enter Data For New Node = ");
	scanf("%d", &data);

	newNode->info = data;
	node->next = newNode;
	newNode->next = NULL;

	// display Singlylist
	SinglydisplayList();
}

void SinglyinsAfterElem()
{
	int elem, data, found = 0;
	struct Singlylist *node, *new1;

	if (Singlystart->next == NULL)
	{
		printf("Insert After Element Not Done, List Is Empty..\n");
		return;
	}

	node = Singlystart;

	printf("Enter Element to insert value after it = ");
	scanf("%d", &elem);

	while (node->next != NULL)
	{
		if (node->info == elem)
		{
			new1 = (struct Singlylist *)malloc(sizeof(struct Singlylist));
			printf("Enter Data To Insert = ");
			scanf("%d", &data);

			new1->info = data;
			new1->next = node->next;
			node->next = new1;

			SinglydisplayList();
			found = 1;
			break;
		}
		else
		{
			node = node->next;
		}
	}
	if (!found)
	{
		printf("Insert After Element Not Done, Element Not Found..\n");
	}

	fflush(stdin);
}

void SinglyinsAfterPos()
{
	struct Singlylist *node, *new1;
	int i = 0, pos, data;

	node = Singlystart;

	printf("Enter Position to insert value after it = ");
	scanf("%d", &pos);

	SinglycountNode();

	if (pos > Singlycount)
	{
		printf("Insert After Position Not Done..\n");
		return;
	}

	while (i <= Singlycount)
	{
		if (i == pos)
		{
			new1 = (struct Singlylist *)malloc(sizeof(struct Singlylist));
			printf("Enter Data To Insert = ");
			scanf("%d", &data);

			new1->info = data;
			new1->next = node->next;
			node->next = new1;

			SinglydisplayList();

			break;
		}
		else
		{
			node = node->next;
			i = i + 1;
		}
	}

	fflush(stdin);
}

void SinglyinsBeforePos()
{
	struct Singlylist *node, *new1;
	int i = 0, pos, data;

	if (Singlystart->next == NULL)
	{
		printf("Insert Before Position Not Done..\n");
		return;
	}

	node = Singlystart;

	printf("Enter Position to insert value Before it = ");
	scanf("%d", &pos);

	SinglycountNode();

	if (pos > Singlycount)
	{
		printf("Insert Before Position Is Not Done..\n");
		return;
	}

	while (i <= Singlycount)
	{
		if (i == (pos - 1))
		{
			new1 = (struct Singlylist *)malloc(sizeof(struct Singlylist));
			printf("Enter Data To Insert = ");
			scanf("%d", &data);

			new1->info = data;
			new1->next = node->next;
			node->next = new1;

			SinglydisplayList();

			break;
		}
		else
		{
			node = node->next;
			i = i + 1;
		}
	}
	fflush(stdin);
}

void SinglyinsBeforeElem()
{
	int elem, data;
	struct Singlylist *node, *new1, *nextNode;

	if (Singlystart->next == NULL)
	{
		printf("Insert Before Element Not Done..\n");
		return;
	}

	node = Singlystart;

	printf("Enter Element to insert value Before it = ");
	scanf("%d", &elem);

	while (node->next != NULL)
	{
		nextNode = node->next;
		if (nextNode->info == elem)
		{
			new1 = (struct Singlylist *)malloc(sizeof(struct Singlylist));
			printf("Enter Data To Insert = ");
			scanf("%d", &data);

			new1->info = data;
			new1->next = node->next;
			node->next = new1;

			SinglydisplayList();

			break;
		}
		else
		{
			node = node->next;
			nextNode = nextNode->next;
		}
	}

	fflush(stdin);
}

void SinglycountNode()
{
	struct Singlylist *node;
	Singlycount = 0;

	if (Singlystart->next == NULL)
	{
		Singlycount = 0;
	}
	else
	{

		node = Singlystart->next;
		while (node != NULL)
		{
			Singlycount++;
			node = node->next;
		}

		fflush(stdin);
	}
}

void SinglysortList()
{
	struct Singlylist *node, *nextNode;
	int temp;

	if (Singlystart->next == NULL)
	{
		printf("Sorting Not Done, List Is Empty..\n");
		return;
	}

	SinglycountNode();

	if (Singlycount > 1)
	{
		node = Singlystart->next;
		while (node != NULL)
		{
			nextNode = node->next;
			while (nextNode != NULL)
			{
				if (node->info > nextNode->info)
				{
					temp = node->info;
					node->info = nextNode->info;
					nextNode->info = temp;
				}
				nextNode = nextNode->next;
			}
			node = node->next;
		}
	}
	SinglydisplayList();

	fflush(stdin);
}

void SinglydelBegin()
{
	struct Singlylist *node;

	if (Singlystart->next == NULL)
	{
		printf("Deletion At First not possible, List Is Empty..\n");
		return;
	}

	node = Singlystart->next;

	// remove links & element
	Singlystart->next = node->next;
	free(node);

	// display the Singlylist
	SinglydisplayList();

	fflush(stdin);
}

void SinglydelEnd()
{
	struct Singlylist *prev, *node;

	if (Singlystart->next == NULL)
	{
		printf("Deletion At End Not Done, Linked List Is Empty..\n");
		return;
	}

	prev = Singlystart;
	node = Singlystart->next;

	// goto the last node
	while (node != NULL)
	{
		if (node->next == NULL)
		{
			prev->next = NULL;
			free(node);

			break;
		}

		node = node->next;
		prev = prev->next;
	}

	// display Singlylist
	SinglydisplayList();

	fflush(stdin);
}

void SinglydelBeforePos()
{
	struct Singlylist *node, *prev;
	int i = 0, pos, data;

	if (Singlystart->next == NULL)
	{
		printf("Delete Before Position Not Done, List Is Empty..\n");
		return;
	}

	node = Singlystart->next;
	prev = Singlystart;

	printf("Enter Position to Delete value Before it = ");
	scanf("%d", &pos);

	SinglycountNode();

	if (pos > Singlycount)
	{
		printf("Wrong Position..\n");
		return;
	}

	while (i <= Singlycount)
	{
		if (i == (pos - 1))
		{
			// remove link & node
			prev->next = node->next;
			free(node);

			// display the Singlylist
			SinglydisplayList();

			break;
		}
		else
		{
			node = node->next;
			prev = prev->next;
			i++;
		}
	}

	fflush(stdin);
}

void SinglydelBeforeElem()
{
	int elem;
	struct Singlylist *node, *prev;

	if (Singlystart->next == NULL)
	{
		printf("Delete Before Element Not Done, List Is Empty..\n");
		return;
	}

	node = Singlystart->next;
	prev = Singlystart;

	printf("Enter Element to Delete  = ");
	fflush(stdin);
	scanf("%d", &elem);

	while (node != NULL)
	{
		if (node->info == elem)
		{
			// remove link & node
			prev->next = node->next;
			free(node);
			break;
		}
		else
		{
			node = node->next;
			prev = prev->next;
		}
	}

	SinglydisplayList();

	fflush(stdin);
}

void SinglydelAfterPos()
{
	struct Singlylist *node, *prev;
	int i = 0, pos, data;

	if (Singlystart->next == NULL)
	{
		printf("Delete After Position Not Done, List Is Empty..\n");
		return;
	}

	node = Singlystart->next;
	prev = Singlystart;

	printf("Enter Position to Delete value after it = ");
	scanf("%d", &pos);

	SinglycountNode();

	if (pos > Singlycount)
	{
		printf("Wrong Position..\n");
		return;
	}

	while (i <= Singlycount)
	{
		if (i == pos)
		{
			// remove link & node
			prev->next = node->next;
			free(node);

			// display the Singlylist
			SinglydisplayList();

			break;
		}
		else
		{
			node = node->next;
			prev = prev->next;
			i++;
		}
	}

	fflush(stdin);
}

void SinglydelAfterElem()
{
	int elem;
	struct Singlylist *prev, *node;

	if (Singlystart->next == NULL)
	{
		printf("Delete After Element Not Done, List Is Empty..\n");
		return;
	}

	node = Singlystart->next;
	prev = Singlystart;

	printf("Enter Element to Delete value after it = ");
	scanf("%d", &elem);

	while (node != NULL)
	{
		if (node->info == elem)
		{
			if (node->next != NULL)
			{
				node = node->next;
				prev = prev->next;

				// delete links
				prev->next = node->next;
				free(node);
				break;
			}
			else
			{
				printf("There is No Any Node to Delete..\n");
				break;
			}
		}
		else
		{
			prev = prev->next;
			node = node->next;
		}
	}

	SinglydisplayList();
	fflush(stdin);
}

void Singlysearch()
{
	struct Singlylist *node;
	int found = 0, val, i;

	if (Singlystart->next == NULL)
	{
		printf("Search Not Done, List Is Empty..\n");
		return;
	}

	node = Singlystart->next;

	printf("Enter Value To Search =");
	scanf("%d", &val);

	i = 0;
	while (node != NULL)
	{
		if (node->info == val)
		{
			found = 1;
			printf("Value = %d Founded At Node %d ..\n", val, (i + 1));
		}
		node = node->next;
		i++;
	}

	if (!found)
	{
		printf("Value = %d not Found..\n", val);
	}

	fflush(stdin);
}

/* function definition for
  B. circular singly linked list
*/

void CLcreateList()
{
	struct Clist *node, *new1;

	CLstart = (struct Clist *)malloc(sizeof(struct Clist));
	CLstart->next = NULL;

	node = CLstart;
	do
	{
		new1 = (struct Clist *)malloc(sizeof(struct Clist));

		// create links
		node->next = new1;
		node = node->next;
		node->next = CLstart;

		printf("Enter Info For New Node = ");
		scanf("%d", &new1->info);

		CLdisplayList();

		fflush(stdin);
		printf("you want to create another node (y/n)? = ");

	} while ((getchar()) == 'y');
}

void CLdisplayList()
{
	struct Clist *node;
	node = CLstart->next;

	if (CLstart->next == NULL)
	{
		printf("Display Is Not Possible, List Is Empty..\n");
		return;
	}

	printf("\n ----------------------------------- \n");

	while (node != CLstart)
	{
		printf(" %d \t", node->info);
		node = node->next;
	}
	printf("\n ----------------------------------- \n");
}

void CLcountNode()
{
	struct Clist *node;
	if (CLstart->next == NULL)
	{
		CLcount = 0;
		return;
	}
	else
	{
		CLcount = 0;
		node = CLstart;
		while (node->next != CLstart)
		{
			CLcount++;
			node = node->next;
		}
	}
	fflush(stdin);
}

/* new function for circular linked Clist */

void CLinsBegin()
{
	struct Clist *new1;
	int data;

	if (CLstart->next == NULL)
	{
		new1 = (struct Clist *)malloc(sizeof(struct Clist));
		printf("Enter Data For New Node = ");
		scanf("%d", &data);

		new1->info = data;
		new1->next = CLstart;

		CLstart->next = new1;

		// display Clist
		CLdisplayList();
	}
	else
	{
		new1 = (struct Clist *)malloc(sizeof(struct Clist));
		printf("Enter Data For New Node = ");
		scanf("%d", &data);

		new1->info = data;
		new1->next = CLstart->next;
		CLstart->next = new1;
		// display Clist

		CLdisplayList();
	}
}

void CLinsEnd()
{
	struct Clist *new1, *node;
	int data;

	node = CLstart;

	while (node->next != CLstart) // note: here in circular linkedd Clist condition is changed..
	{
		node = node->next;
	}

	new1 = (struct Clist *)malloc(sizeof(struct Clist));
	printf("Enter Data For New Node = ");
	scanf("%d", &data);

	new1->info = data;
	node->next = new1;
	new1->next = CLstart;

	// display Clist
	CLdisplayList();
}

void CLinsBeforePos()
{
	struct Clist *node, *new1;
	int i = 0, pos, data;

	if (CLstart->next == NULL)
	{
		printf("Insert Before Position Not Done, List Is Empty..\n");
		return;
	}

	node = CLstart;

	printf("Enter Position to insert value Before it = ");
	scanf("%d", &pos);

	CLcountNode();

	if (pos > CLcount)
	{
		printf("Wrong Position..\n");
		return;
	}

	while (i <= CLcount)
	{
		if (i == (pos - 1))
		{
			new1 = (struct Clist *)malloc(sizeof(struct Clist));
			printf("Enter Data To Insert = ");
			scanf("%d", &data);

			new1->info = data;
			new1->next = node->next;
			node->next = new1;

			CLdisplayList();

			break;
		}
		else
		{
			node = node->next;
			i = i + 1;
		}
	}
	fflush(stdin);
}

void CLinsBeforeElem()
{
	int elem, data;
	struct Clist *prev, *new1, *node;

	if (CLstart->next == NULL)
	{
		printf("Insert Before Element Not Done, List Is Empty..\n");
		return;
	}

	prev = CLstart;

	printf("Enter Element to insert value Before it = ");
	scanf("%d", &elem);

	while (prev->next != CLstart)
	{
		node = prev->next;
		if (node->info == elem)
		{
			new1 = (struct Clist *)malloc(sizeof(struct Clist));
			printf("Enter Data To Insert = ");
			scanf("%d", &data);

			new1->info = data;
			new1->next = prev->next;
			prev->next = new1;

			CLdisplayList();

			break;
		}
		else
		{
			prev = prev->next;
			node = node->next;
		}
	}

	fflush(stdin);
}

void CLinsAfterPos()
{
	struct Clist *node, *new1;
	int i = 0, pos, data;

	node = CLstart;

	printf("Enter Position to insert value after it = ");
	scanf("%d", &pos);

	CLcountNode();

	if (pos > CLcount)
	{
		printf("Wrong Position..\n");
		printf("Insert After Position Not Done..\n");
		return;
	}
	else
	{
		while (i <= CLcount)
		{
			if (i == pos)
			{
				new1 = (struct Clist *)malloc(sizeof(struct Clist));
				printf("Enter Data To Insert = ");
				scanf("%d", &data);

				new1->info = data;

				// if list is empty
				if (CLstart->next == NULL)
				{
					new1->next = CLstart;
					CLstart->next = new1;
				}
				else
				{
					new1->next = node->next;
					node->next = new1;
				}

				CLdisplayList();

				break;
			}
			else
			{
				node = node->next;
				i = i + 1;
			}
		}
	}
	fflush(stdin);
}

void CLinsAfterElem()
{
	int elem, data, found = 0;
	struct Clist *node, *new1;

	if (CLstart->next == NULL)
	{
		printf("Insert After Element Not Done, List Is Empty..\n");
		return;
	}

	node = CLstart->next;

	printf("Enter Element to insert value after it = ");
	scanf("%d", &elem);

	while (node != CLstart)
	{
		if (node->info == elem)
		{
			new1 = (struct Clist *)malloc(sizeof(struct Clist));
			printf("Enter Data To Insert = ");
			scanf("%d", &data);

			new1->info = data;
			new1->next = node->next;
			node->next = new1;

			found = 1;
			CLdisplayList();

			break;
		}
		else
		{
			node = node->next;
		}
	}

	if (!found)
	{
		printf("Unsuccessfull Insert !!!\n");
	}

	fflush(stdin);
}

void CLsortList()
{
	struct Clist *prev, *node;
	int temp;

	if (CLstart->next == NULL)
	{
		printf("Sorting Not Done, List Is Empty..\n");
		return;
	}

	CLcountNode();

	if (CLcount > 1)
	{
		prev = CLstart->next;
		while (prev != CLstart)
		{
			node = prev->next;
			while (node != CLstart)
			{
				if (prev->info > node->info)
				{
					temp = prev->info;
					prev->info = node->info;
					node->info = temp;
				}
				node = node->next;
			}
			prev = prev->next;
		}
	}
	CLdisplayList();

	fflush(stdin);
}

void CLdelBegin()
{
	struct Clist *node;

	if (CLstart->next == NULL)
	{
		printf("Delete From Start Not Done, List Is Empty..\n");
		return;
	}

	node = CLstart->next;

	if (node->next == CLstart)
	{
		CLstart->next = NULL;
		free(node);
	}
	else
	{
		CLstart->next = node->next;
		free(node);
	}
	// display the Clist
	CLdisplayList();
	fflush(stdin);
}

void CLdelEnd()
{
	struct Clist *prev, *node;

	if (CLstart->next == NULL)
	{
		printf("Delete From End Not Done, List Is Empty..\n");
		return;
	}
	prev = CLstart;
	node = CLstart->next;

	// if only one node is remaining in Clist
	if (node->next == CLstart)
	{
		CLstart->next = NULL;
		free(node);
	}
	else
	{
		// goto the last node
		while (node != CLstart)
		{
			if (node->next == CLstart)
			{
				prev->next = CLstart;
				free(node);

				break;
			}
			node = node->next;
			prev = prev->next;
		}
	}
	CLdisplayList();
	fflush(stdin);
}

void CLdelBeforePos()
{
	struct Clist *node, *prev;
	int i = 0, pos, data;

	if (CLstart->next == NULL)
	{
		printf("Delete Before Position Not Done, List Is Empty..\n");
		return;
	}

	node = CLstart->next;
	prev = CLstart;

	printf("Enter Position to Delete = ");
	scanf("%d", &pos);

	CLcountNode();

	if (pos > CLcount)
	{
		printf("Wrong Position..\n");
		return;
	}

	while (i <= CLcount)
	{
		if (i == (pos - 1))
		{
			if (node->next == CLstart)
			{
				// if only one node is remaining
				prev->next = CLstart;
				free(node);
				break;
			}
			else
			{
				// remove link & node
				prev->next = node->next;
				free(node);
				break;
			}
		}
		else
		{
			node = node->next;
			prev = prev->next;
			i++;
		}
	}
	CLdisplayList();
	fflush(stdin);
}

void CLdelBeforeElem()
{
	int elem, found = 0;
	struct Clist *node, *prev;

	if (CLstart->next == NULL)
	{
		printf("Delete Before Element Not Done, List Is Empty..\n");
		return;
	}

	node = CLstart->next;
	prev = CLstart;

	printf("Enter Element to Delete  = ");
	fflush(stdin);
	scanf("%d", &elem);

	while (node != CLstart)
	{
		if (node->info == elem)
		{
			found = 1;
			if (node->next != CLstart)
			{
				// remove link & node
				prev->next = node->next;
				free(node);
				break;
			}
			else
			{
				// remove if only one node is remaining
				prev->next = CLstart;
				free(node);
				break;
			}
		}
		else
		{
			node = node->next;
			prev = prev->next;
		}
	}

	if (!found)
	{
		printf("Element Not Found..\n");
	}
	else
	{
		CLdisplayList();
	}

	fflush(stdin);
}

void CLdelAfterPos()
{
	struct Clist *node, *prev;
	int i = 0, pos, data;

	node = CLstart->next;
	prev = CLstart;

	printf("Enter Position to Delete value after it = ");
	scanf("%d", &pos);

	CLcountNode();

	if (pos >= CLcount)
	{
		printf("Delete After Position Not Done..\n");
		printf("Wrong Position..\n");
		return;
	}
	else
	{
		while (i <= CLcount)
		{
			if (i == pos)
			{
				// remove link & node
				prev->next = node->next;
				free(node);

				// display the Clist
				CLdisplayList();
				break;
			}
			else
			{
				node = node->next;
				prev = prev->next;
				i++;
			}
		}
	}
	fflush(stdin);
}

void CLdelAfterElem()
{
	int elem, found = 0;
	struct Clist *prev, *node;

	if (CLstart->next == NULL)
	{
		printf("Delete After Element Not Done, List Is Empty..\n");
		return;
	}

	node = CLstart->next;
	prev = CLstart;

	printf("Enter Element to Delete value after it = ");
	scanf("%d", &elem);

	while (node->next != CLstart)
	{
		if (node->info == elem)
		{
			if (node->next != CLstart)
			{
				node = node->next;
				prev = prev->next;
				// delete links
				prev->next = node->next;
				free(node);

				found = 1;
				break;
			}
		}
		else
		{
			prev = prev->next;
			node = node->next;
		}
	}

	if (!found)
	{
		printf("Element Not Found..\n");
		return;
	}
	else
	{
		CLdisplayList();
	}
	fflush(stdin);
}

void CLsearch()
{
	struct Clist *node;
	int found = 0, val, i;

	if (CLstart->next == NULL)
	{
		printf("Linked List Is Empty..\n");
		return;
	}
	node = CLstart->next;

	printf("Enter Value To Search =");
	scanf("%d", &val);

	i = 0;
	while (node != CLstart)
	{
		if (node->info == val)
		{
			found = 1;
			printf("Value = %d Founded At Node %d ..\n", val, (i + 1));
		}
		node = node->next;
		i++;
	}

	if (!found)
	{
		printf("Value = %d not Found..\n", val);
	}
	fflush(stdin);
}

/* C - -
 * doubly linked list
 *
 */

void DcreateList()
{
	struct Dlist *node, *new1;

	node = Dstart;

	do
	{
		new1 = (struct Dlist *)malloc(sizeof(struct Dlist));

		// create links
		node->next = new1;
		new1->prev = node;
		new1->next = NULL;
		node = node->next;

		printf(" Enter Info For New Node = ");
		scanf("%d", &node->info);

		DdisplayList();

		printf(" you want to create another node (y/n)? = ");
		fflush(stdin);

	} while ((getchar()) == 'y');

	fflush(stdin);
}

void DdisplayList()
{
	struct Dlist *node;

	if (Dstart->next == NULL)
	{
		printf("\n Display Is Not Possible, List Is Empty..\n");
		return;
	}
	else
	{
		node = Dstart->next;
		printf("\n List----->\n ---------------------------------------------- \n");
		while (node != NULL)
		{
			printf(" %d \t", node->info);
			node = node->next;
		}
		printf("\n ---------------------------------------------- \n\n");
	}
	fflush(stdin);
}

void DinsBegin()
{
	struct Dlist *new1;

	if (Dstart->next == NULL)
	{
		new1 = (struct Dlist *)malloc(sizeof(struct Dlist));
		Dstart->next = new1;
		new1->prev = Dstart;
		new1->next = NULL;

		printf("Enter Info For New Node = ");
		scanf("%d", &new1->info);
	}
	else
	{
		new1 = (struct Dlist *)malloc(sizeof(struct Dlist));

		printf("Enter Info For New Node = ");
		scanf("%d", &new1->info);

		new1->prev = Dstart;
		new1->next = Dstart->next;
		Dstart->next = new1;
		new1->next->prev = new1;
	}
	// display the Dlist
	DdisplayList();

	fflush(stdin);
}

void DinsEnd()
{
	struct Dlist *node, *new1;

	node = Dstart;
	while (node->next != NULL)
	{
		node = node->next;
	}

	new1 = (struct Dlist *)malloc(sizeof(struct Dlist));
	printf("Enter Info For New Node = ");
	scanf("%d", &new1->info);

	node->next = new1;
	new1->prev = node;
	new1->next = NULL;

	fflush(stdin);
	DdisplayList();
	fflush(stdin);
}

void DdelBegin()
{
	struct Dlist *node;

	if (Dstart->next == NULL)
	{
		printf("Delete From Start Not Done, List Is Empty..\n");
		return;
	}
	else
	{
		node = Dstart->next;
		DcountNode();
		if (Dcount > 1)
		{
			Dstart->next = node->next;
			node->next->prev = Dstart;
			free(node);
		}
		else
		{
			Dstart->next = node->next;
			free(node);
		}
	}
	// display the Dlist
	DdisplayList();
	fflush(stdin);
}

void DdelEnd()
{
	struct Dlist *node, *delNode;

	if (Dstart->next == NULL)
	{
		printf("\n Delete At End Not Done, List Is Empty..\n");
		return;
	}
	else
	{
		node = Dstart;
		while (node->next != NULL)
		{
			node = node->next;
		}

		delNode = node;

		node = node->prev;
		node->next = NULL;

		free(delNode);
	}
	DdisplayList();
	fflush(stdin);
}

void DcountNode()
{
	struct Dlist *node;
	Dcount = 0;

	if (Dstart->next == NULL)
	{
		Dcount = 0;
		return;
	}

	node = Dstart->next;

	while (node != NULL)
	{
		Dcount++;
		node = node->next;
	}
}

void DdelAfterElem()
{
	struct Dlist *node, *delNode;
	int elem = 0;

	// check condition for empty list
	if (node->next == NULL)
	{
		printf(" Delete After Element Not Done, List Is Empty..\n");
		return;
	}
	else
	{
		node = Dstart;

		printf(" Enter Element To Delete Node After It = ");
		scanf("%d", &elem);

		while (node->info != elem)
		{
			node = node->next;
		}

		// delete node and links
		delNode = node->next;

		if (node->next->next != NULL)
		{
			node = node->next;
			node->prev->next = node->next;
			node->next->prev = node->prev;
		}
		else
		{
			node = node->next;
			node->prev->next = node->next;
		}

		free(delNode);
		DdisplayList();
		fflush(stdin);
	}
}

void DdelBeforeElem()
{
	struct Dlist *node, *delNode;
	int elem = 0;

	if (Dstart->next == NULL)
	{
		printf(" Delete Before Element Not Done, List Is Empty..\n");
		return;
	}
	else
	{
		node = Dstart;
		printf(" Enter Element To Delete Node Before It = ");
		scanf("%d", &elem);

		while (node->info != elem)
		{
			node = node->next;
		}
		// delete node and links
		delNode = node->prev;

		node = node->prev;
		node->prev->next = node->next;
		node->next->prev = node->prev;

		free(delNode);
		DdisplayList();
		fflush(stdin);
	}
	fflush(stdin);
}

void DinsAfterElem()
{
	struct Dlist *node, *new1;
	int elem = 0, found = 0;

	if (Dstart->next == NULL)
	{
		printf(" Insert After Element Not Done, List Is Empty..\n");
		return;
	}
	else
	{
		printf("Enter Element Value to Insert Node After It = ");
		scanf("%d", &elem);

		node = Dstart;
		// increment pointer

		while (node->next != NULL)
		{
			if (node->info == elem)
			{
				new1 = (struct Dlist *)malloc(sizeof(struct Dlist));
				found = 1;

				// create links
				new1->prev = node;
				new1->next = node->next;
				node->next = new1;
				node = node->next;
				node->next->prev = new1;

				printf("Enter Data For New Node = ");
				scanf("%d", &new1->info);

				DdisplayList();

				break;
			}
			else
			{
				node = node->next;
			}
		}
	}

	if (!found)
	{
		printf("Element Not Found..\n");
	}

	fflush(stdin);
}

void DinsBeforeElem()
{
	struct Dlist *node, *new1;
	int elem = 0;

	if (Dstart->next == NULL)
	{
		printf("Insert Before Element Not Done, List Is Empty..\n");
		return;
	}
	else
	{
		// if linked Dlist is not empty
		printf("Enter Element Value to Insert Node Before It = ");
		scanf("%d", &elem);

		// increment pointer
		while (node->info != elem)
		{
			node = node->next;
		}

		new1 = (struct Dlist *)malloc(sizeof(struct Dlist));

		// create links
		new1->prev = node->prev;
		new1->next = node;
		node->prev = new1;
		node = node->prev;
		node->prev->next = new1;

		printf("Enter Data For New Node = ");
		scanf("%d", &new1->info);

		DdisplayList();
	}
	fflush(stdin);
}

void DsortList()
{
	struct Dlist *prev, *node;
	int temp;

	if (Dstart->next == NULL)
	{
		printf("Sorting Not Done, List Is Empty..\n");
		return;
	}

	prev = Dstart->next;
	while (prev != NULL)
	{
		node = prev->next;
		while (node != NULL)
		{
			if (prev->info > node->info)
			{
				temp = prev->info;
				prev->info = node->info;
				node->info = temp;
			}
			node = node->next;
		}
		prev = prev->next;
	}
	DdisplayList();
	fflush(stdin);
}

void Dsearch()
{
	struct Dlist *node;
	int found = 0, val, i;

	if (Dstart->next == NULL)
	{
		printf("Linked List Is Empty..\n");
		return;
	}
	else
	{
		node = Dstart->next;
		printf("Enter Value To Search =");
		scanf("%d", &val);

		i = 0;
		while (node != NULL)
		{
			if (node->info == val)
			{
				found = 1;
				printf("Value = %d Founded At Node %d ..\n", val, (i + 1));
			}
			node = node->next;
			i++;
		}
	}

	if (!found)
	{
		printf("Value = %d not Found..\n", val);
	}
	fflush(stdin);
}

void DinsAfterPos()
{
	struct Dlist *node, *new1;
	int i = 0, pos, data;

	printf("Enter Position to insert value after it = ");
	scanf("%d", &pos);

	DcountNode();

	if (pos > Dcount)
	{
		printf("Insert After Position Not Done, List Is Empty..\n");
		return;
	}
	else
	{
		while (i <= Dcount)
		{
			if (i == pos)
			{
				new1 = (struct Dlist *)malloc(sizeof(struct Dlist));
				printf("Enter Data To Insert = ");
				scanf("%d", &data);

				new1->info = data;
				new1->next = node->next;
				node->next = new1;
				new1->prev = node;
				new1->next->prev = new1;
				DdisplayList();
				break;
			}
			else
			{
				node = node->next;
				i = i + 1;
			}
		}
	}
	fflush(stdin);
}

void DinsBeforePos()
{
	struct Dlist *node, *new1;
	int i = 0, pos, data;

	printf("Enter Position to insert value Before it = ");
	scanf("%d", &pos);

	DcountNode();

	if (pos > Dcount)
	{
		printf("Insert Before Position Not Done, List Is Empty..\n");
		return;
	}
	else
	{
		while (i <= Dcount)
		{
			if (i == (pos - 1))
			{
				new1 = (struct Dlist *)malloc(sizeof(struct Dlist));
				printf("Enter Data To Insert = ");
				scanf("%d", &data);

				new1->info = data;
				new1->next = node->next;
				node->next = new1;
				new1->prev = node;
				new1->next->prev = new1;

				DdisplayList();
				break;
			}
			else
			{
				node = node->next;
				i = i + 1;
			}
		}
	}

	fflush(stdin);
}

void DdelBeforePos()
{
	struct Dlist *node, *delNode;
	int i = 0, pos, data;

	node = Dstart;

	printf("Enter Position to Delete value Before it = ");
	scanf("%d", &pos);

	DcountNode();

	if (pos > Dcount)
	{
		printf("Delete Before Position Not Done..\n");
		printf("Wrong Position..\n");
		return;
	}
	else
	{
		while (i <= Dcount)
		{
			if (i == pos)
			{
				break;
			}
			else
			{
				node = node->next;
				i++;
			}
		}
		// remove link & node

		delNode = node->prev;
		node->prev = delNode->prev;
		delNode->prev->next = delNode->next;

		free(delNode);
		// display the Dlist
		DdisplayList();
	}
	fflush(stdin);
}

void DdelAfterPos()
{
	struct Dlist *node, *delNode;
	int i = 0, pos, data;

	printf("Enter Position to Delete value after it = ");
	scanf("%d", &pos);

	DcountNode();

	node = Dstart;

	if (pos > Dcount)
	{
		printf("Delete After Position Not Done..\n");
		printf("Wrong Position..\n");
		return;
	}
	else
	{
		while (i <= Dcount)
		{
			if (i == pos)
			{
				break;
			}
			else
			{
				node = node->next;
				i++;
			}
		}
		// remove link & node

		// if the last node to delete
		if (node->next->next == NULL)
		{
			delNode = node->next;
			node->next = NULL;

			free(delNode);
		}
		else
		{
			delNode = node->next;
			node->next = delNode->next;
			delNode->next->prev = delNode->prev;

			free(delNode);
		}
		// display the Dlist
		DdisplayList();
	}
	fflush(stdin);
}

/* D
 * circular doubly linked list
 *
 */

void CDcreateList()
{
	struct CDlist *temp, *new1;

	CDstart = (struct CDlist *)malloc(sizeof(struct CDlist));
	CDstart->next = NULL;
	CDstart->prev = NULL;

	temp = CDstart;

	do
	{
		new1 = (struct CDlist *)malloc(sizeof(struct CDlist));

		// create links
		temp->next = new1;
		new1->prev = temp;
		temp = temp->next;

		temp->next = CDstart;
		printf(" Enter Info For New Node = ");
		scanf("%d", &temp->info);

		CDdisplayList();

		printf(" you want to create another node (y/n)? = ");
		fflush(stdin);

	} while ((getchar()) == 'y');

	fflush(stdin);
}

void CDdisplayList()
{
	struct CDlist *temp;

	if (!CDstart)
	{
		printf("\n Linkded List Is Not Created...\n");
		return;
	}

	if (CDstart->next == NULL)
	{
		printf("\n List is Empty..\n");
		return;
	}
	else
	{
		temp = CDstart->next;
		printf("\n list----->\n ---------------------------------------------- \n");
		while (temp != CDstart)
		{
			printf(" %d \t", temp->info);
			temp = temp->next;
		}
		printf("\n ---------------------------------------------- \n\n");

		fflush(stdin);
	}
	fflush(stdin);
}

void CDinsBegin()
{
	struct CDlist *temp, *new1;
	temp = CDstart;

	if (!CDstart)
	{
		printf("List Created Succesfully..\n");
		CDstart = (struct CDlist *)malloc(sizeof(struct CDlist));
		CDstart->next = NULL;
		CDstart->prev = NULL;
		temp = CDstart;
	}

	if (temp->next == NULL)
	{
		new1 = (struct CDlist *)malloc(sizeof(struct CDlist));
		CDstart->next = new1;
		new1->prev = CDstart;
		new1->next = CDstart;

		printf("Enter Info For New Node = ");
		scanf("%d", &new1->info);
	}
	else
	{
		new1 = (struct CDlist *)malloc(sizeof(struct CDlist));

		printf("Enter Info For New Node = ");
		scanf("%d", &new1->info);

		new1->prev = CDstart;
		new1->next = CDstart->next;
		CDstart->next = new1;
		new1->next->prev = new1;
	}

	// display the CDlist
	CDdisplayList();

	fflush(stdin);
}

void CDinsEnd()
{
	struct CDlist *temp, *new1;

	temp = CDstart;

	if (!CDstart)
	{
		printf("List Created Succesfully..\n");
		CDstart = (struct CDlist *)malloc(sizeof(struct CDlist));
		CDstart->next = NULL;
		CDstart->prev = NULL;
		temp = CDstart;
	}

	if (temp->next == NULL)
	{
		new1 = (struct CDlist *)malloc(sizeof(struct CDlist));
		printf("Enter Info For New Node = ");
		scanf("%d", &new1->info);

		new1->next = CDstart;
		CDstart->next = new1;
		new1->prev = CDstart;

		fflush(stdin);
		CDdisplayList();
		return;
	}
	else
	{
		while (temp->next != CDstart)
		{
			temp = temp->next;
		}

		new1 = (struct CDlist *)malloc(sizeof(struct CDlist));
		printf("Enter Info For New Node = ");
		scanf("%d", &new1->info);

		temp->next = new1;
		new1->prev = temp;
		new1->next = CDstart;

		fflush(stdin);
		CDdisplayList();
		return;
	}
	fflush(stdin);
}

void CDdelBegin()
{
	struct CDlist *temp;

	if (!CDstart)
	{
		printf("Linked List Is Not Created...\n");
		return;
	}

	temp = CDstart->next;

	if (CDstart->next == NULL)
	{
		printf("Linked List Is Empty..\n");
		return;
	}
	else
	{
		if (CDcount > 1)
		{
			CDstart->next = temp->next;
			temp->next->prev = CDstart;
			free(temp);
		}
		else
		{
			CDstart->next = temp->next;
			free(temp);
		}
	}
	// display the CDlist
	CDdisplayList();
	fflush(stdin);
}

void CDdelEnd()
{
	struct CDlist *temp, *delNode;

	if (!CDstart)
	{
		printf("Linked List Is Not Created...\n");
		return;
	}

	temp = CDstart;

	if (CDstart->next == NULL)
	{
		printf("\n CDlist Is Empty..\n");
		return;
	}
	else
	{
		while (temp->next != CDstart)
		{
			temp = temp->next;
		}

		delNode = temp;

		temp = temp->prev;
		temp->next = CDstart;

		free(delNode);
	}
	CDdisplayList();
	fflush(stdin);
}

void CDcountNode()
{
	struct CDlist *temp;
	CDcount = 0;

	if (!CDstart)
	{
		CDcount = 0;
		return;
	}

	temp = CDstart->next;

	while (temp != CDstart)
	{
		CDcount++;
		temp = temp->next;
	}
}

void CDdelAfterElem()
{
	struct CDlist *temp, *delNode;
	int elem = 0;

	if (!CDstart)
	{
		printf("Linked List Is Not Created...\n");
		return;
	}

	temp = CDstart;

	// check condition for empty list
	if (temp->next != CDstart)
	{
		printf(" Enter Element To Delete Node After It = ");
		scanf("%d", &elem);

		while (temp->info != elem)
		{
			temp = temp->next;
		}

		// delete node and links
		delNode = temp->next;

		if (temp->next->next != CDstart)
		{
			temp = temp->next;
			temp->prev->next = temp->next;
			temp->next->prev = temp->prev;
		}
		else
		{
			temp = temp->next;
			temp->prev->next = temp->next;
		}

		free(delNode);

		CDdisplayList();

		fflush(stdin);
	}
	else
	{
		printf(" CDlist Is Empty...\n");
		return;
	}
	fflush(stdin);
}

void CDdelBeforeElem()
{
	struct CDlist *temp, *delNode;
	int elem = 0;

	if (!CDstart)
	{
		printf("Linked List Is Not Created...\n");
		return;
	}

	temp = CDstart;

	// check condition for empty list
	if (temp->next != CDstart)
	{
		printf(" Enter Element To Delete Node Before It = ");
		scanf("%d", &elem);

		while (temp->info != elem)
		{
			temp = temp->next;
		}

		// delete node and links
		delNode = temp->prev;

		temp = temp->prev;
		temp->prev->next = temp->next;
		temp->next->prev = temp->prev;

		free(delNode);

		CDdisplayList();

		fflush(stdin);
	}
	else
	{
		printf(" CDlist Is Empty...\n");
		return;
	}

	fflush(stdin);
}

void CDinsAfterElem()
{
	struct CDlist *temp, *new1;
	int elem = 0;

	if (!CDstart)
	{
		printf("Linked List Is Not Created...\n");
		return;
	}

	temp = CDstart;

	// check condition for empty list
	if (temp->next != CDstart)
	{
		// if linked CDlist is not empty
		printf("Enter Element Value to Insert Node After It = ");
		scanf("%d", &elem);

		// increment pointer
		while (temp->info != elem)
		{
			temp = temp->next;
		}
		new1 = (struct CDlist *)malloc(sizeof(struct CDlist));

		// create links
		new1->prev = temp;
		new1->next = temp->next;
		temp->next = new1;
		temp = temp->next;
		temp->next->prev = new1;

		printf("Enter Data For New Node = ");
		scanf("%d", &new1->info);

		CDdisplayList();
	}
	else
	{
		printf(" List Is Empty ..\n");
		return;
	}

	fflush(stdin);
}

void CDinsBeforeElem()
{
	struct CDlist *temp, *new1;
	int elem = 0;

	if (!CDstart)
	{
		printf("Linked List Is Not Created...\n");
		return;
	}

	temp = CDstart;

	// check condition for empty CDlist
	if (temp->next != CDstart)
	{
		// if linked CDlist is not empty
		printf("Enter Element Value to Insert Node Before It = ");
		scanf("%d", &elem);

		// increment pointer
		while (temp->info != elem)
		{
			temp = temp->next;
		}

		new1 = (struct CDlist *)malloc(sizeof(struct CDlist));

		// create links
		new1->prev = temp->prev;
		new1->next = temp;
		temp->prev = new1;
		temp = temp->prev;
		temp->prev->next = new1;

		printf("Enter Data For New Node = ");
		scanf("%d", &new1->info);

		CDdisplayList();
	}
	else
	{
		printf(" List Is Empty ..\n");
		return;
	}

	fflush(stdin);
}

void CDsortList()
{
	struct CDlist *prev, *next;
	int temp;

	if (!CDstart)
	{
		printf("Linked List Is Not Created...\n");
		return;
	}

	prev = CDstart->next;
	while (prev != CDstart)
	{
		next = prev->next;
		while (next != CDstart)
		{
			if (prev->info > next->info)
			{
				temp = prev->info;
				prev->info = next->info;
				next->info = temp;
			}
			next = next->next;
		}
		prev = prev->next;
	}

	CDdisplayList();

	fflush(stdin);
}

void CDsearch()
{
	struct CDlist *temp;
	int found = 0, val, i;

	if (!CDstart)
	{
		printf("Linked List Is Not Created...\n");
		return;
	}

	temp = CDstart->next;

	if (CDstart->next == NULL)
	{
		printf("Linked CDlist Is Empty..\n");
		return;
	}

	printf("Enter Value To Search =");
	scanf("%d", &val);

	i = 0;
	while (temp != CDstart)
	{
		if (temp->info == val)
		{
			found = 1;
			printf("Value = %d Founded At Node %d ..\n", val, (i + 1));
		}
		temp = temp->next;
		i++;
	}

	if (!found)
	{
		printf("Value = %d not Found..\n", val);
	}

	fflush(stdin);
}

void CDinsAfterPos()
{
	struct CDlist *temp, *new1;
	int i = 0, pos, data;

	if (!CDstart)
	{
		printf("Linked List Is Not Created...\n");
		return;
	}

	temp = CDstart;

	printf("Enter Position to insert value after it = ");
	scanf("%d", &pos);

	CDcountNode();

	if (pos > CDcount)
	{
		printf("Insertion Is Not Possible...\n");
		return;
	}

	while (i <= CDcount)
	{
		if (i == pos)
		{
			new1 = (struct CDlist *)malloc(sizeof(struct CDlist));
			printf("Enter Data To Insert = ");
			scanf("%d", &data);

			new1->info = data;
			new1->next = temp->next;
			temp->next = new1;
			new1->prev = temp;
			new1->next->prev = new1;

			CDdisplayList();

			break;
		}
		else
		{
			temp = temp->next;
			i = i + 1;
		}
	}

	fflush(stdin);
}

void CDinsBeforePos()
{
	struct CDlist *temp, *new1;
	int i = 0, pos, data;

	if (!CDstart)
	{
		printf("Linked List Is Not Created...\n");
		return;
	}

	temp = CDstart;

	printf("Enter Position to insert value Before it = ");
	scanf("%d", &pos);

	CDcountNode();

	if (pos > CDcount)
	{
		printf("Insertion Is Not Possible...\n");
		return;
	}

	while (i <= CDcount)
	{
		if (i == (pos - 1))
		{
			new1 = (struct CDlist *)malloc(sizeof(struct CDlist));
			printf("Enter Data To Insert = ");
			scanf("%d", &data);

			new1->info = data;
			new1->next = temp->next;
			temp->next = new1;
			new1->prev = temp;
			new1->next->prev = new1;

			CDdisplayList();

			break;
		}
		else
		{
			temp = temp->next;
			i = i + 1;
		}
	}
	fflush(stdin);
}

void CDdelBeforePos()
{
	struct CDlist *node, *delNode;
	int i = 0, pos, data;

	if (!CDstart)
	{
		printf("Linked List Is Not Created...\n");
		return;
	}

	node = CDstart;

	printf("Enter Position to Delete value Before it = ");
	scanf("%d", &pos);

	CDcountNode();

	if (pos > CDcount)
	{
		printf("Deletion Is Not Possible...\n");
		return;
	}
	else
	{
		while (i <= CDcount)
		{
			if (i == pos)
			{
				break;
			}
			else
			{
				node = node->next;
				i++;
			}
		}
		// remove link & node

		delNode = node->prev;
		node->prev = delNode->prev;
		delNode->prev->next = delNode->next;

		free(delNode);
		// display the CDlist
		CDdisplayList();
	}

	fflush(stdin);
}

void CDdelAfterPos()
{
	struct CDlist *node, *delNode;
	int i = 0, pos, data;

	if (!CDstart)
	{
		printf("Linked List Is Not Created...\n");
		return;
	}

	printf("Enter Position to Delete value after it = ");
	scanf("%d", &pos);

	CDcountNode();

	node = CDstart;

	if (pos > CDcount)
	{
		printf("Deletion Is Not Possible...\n");
		return;
	}
	else
	{
		while (i <= CDcount)
		{
			if (i == pos)
			{
				break;
			}
			else
			{
				node = node->next;
				i++;
			}
		}
		// remove link & node

		// if the last node to delete
		if (node->next->next == CDstart)
		{
			delNode = node->next;
			node->next = CDstart;

			free(delNode);
		}
		else
		{
			delNode = node->next;
			node->next = delNode->next;
			delNode->next->prev = delNode->prev;

			free(delNode);
		}
		// display the CDlist
		CDdisplayList();
	}
	fflush(stdin);
}

void removeList(char da)
{
	struct Singlylist *temp, *next;
	struct Clist *ctemp, *cnext;
	struct Dlist *dtemp, *dnext;
	struct CDlist *cdtemp, *cdnext;

	if (da == 's')
	{
		if (Singlystart->next == NULL)
		{
			return;
		}
		else
		{
			temp = Singlystart->next;
			while (temp != NULL)
			{
				next = temp->next;
				free(temp);
				temp = next;
			}
			Singlystart->next = NULL;
		}
	}
	else if (da == 'c')
	{
		if (CLstart->next == NULL)
		{
			return;
		}
		else
		{
			ctemp = CLstart->next;
			while (ctemp != CLstart)
			{
				cnext = ctemp->next;
				free(ctemp);
				ctemp = cnext;
			}
			CLstart->next = NULL;
		}
	}
	else if (da == 'd')
	{
		if (Dstart->next == NULL)
		{
			return;
		}
		else
		{
			dtemp = Dstart->next;
			while (dtemp != NULL)
			{
				dnext = dtemp->next;
				free(dtemp);
				dtemp = dnext;
			}
			Dstart->next = NULL;
		}
	}
	else if (da == 'e')
	{
		if (CDstart->next == NULL)
		{
			return;
		}
		else
		{
			cdtemp = CDstart->next;
			while (dtemp != NULL)
			{
				cdnext = cdtemp->next;
				free(cdtemp);
				cdtemp = cdnext;
			}
			CDstart->next = NULL;
		}
	}
}
/* end of linnked list master program */
