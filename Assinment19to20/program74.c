
//write a progam which Display all elements which are perfect  from singly linear linked list.
//Input : |11|->|28|->|17|->|41|->|6|->|89|
//Output : 6  28
#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};
typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void Insertlast(PPNODE head,int no)
{   
    PNODE newn = NULL;
    PNODE temp = NULL;
    newn= (PNODE)malloc(sizeof(NODE));
    newn->data=no;
    newn->next = NULL;

    if(*head == NULL)
    {
        *head= newn;
    }
    else
    {
            temp = *head;
        while(temp->next != NULL)
        {
            temp= temp->next;
        }
        temp->next = newn;
    }
}

int DisplayPerfect(PNODE head)
{
    int last,iCnt = head->data;

    while(head->next != NULL)
    {
        if((head->data) % iCnt)
        {
            printf("The Perfect Number from Linked List are : %d\n",head->data);
        }
        head = head->next;
    }
   
}

int main()
{
    PNODE first = NULL;
    int iRet = 0;
    Insertlast(&first,11);
    Insertlast(&first,28);
    Insertlast(&first,17);
    Insertlast(&first,41);
    Insertlast(&first,6);
    Insertlast(&first,89);

    DisplayPerfect(first);


    return 0;
}