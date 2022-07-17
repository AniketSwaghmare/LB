//write a progam which return addition of all elements from singly linear linked list.
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

void InsertFirst(PPNODE head,int no)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = no;
    newn->next = NULL;
    
    if(*head == NULL)
    {
        *head = newn;
    }
    else
    {
    newn->next = *head;
    *head = newn;
    }
}

int Addition(PNODE head)
{
   int isum = 0;
   while(head != NULL)
   {
       isum = isum + head->data;
       head = head->next;
   }
   return isum;
}

int main()
{
    PNODE first = NULL;
  int iRet = 0;
    InsertFirst(&first,10);
    InsertFirst(&first,20);
    InsertFirst(&first,30);
    InsertFirst(&first,40);

    iRet = Addition(first);
    printf("addition is : %d\n",iRet);
    return 0;
}