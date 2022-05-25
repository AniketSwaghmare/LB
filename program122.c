#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node **PPNODE;

void Display(PNODE head)
{
    printf("Number of Linked List Nodes are : \n");
    while(head != NULL)
    {
        printf("|%d|->",head->data);
        head = head->next;
    }
}

int Count(PNODE head)
{
    int iCnt = 0;
    while(head != NULL)
    {
        iCnt++;
        head = head->next;
    }
    return iCnt;
}
void InsertFirst(PPNODE head,int no)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;

    if(*head == NULL)
    {
        *head = newn;
    }
    else
    {
        newn->next = (*head);
        (*head)->prev = newn;
        *head = newn;
    }
}

void InsertLast(PPNODE head,int no)
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;

    if(*head == NULL)
    {
        *head = newn;
    }
    else
    {
        temp = *head;

        while(temp->next->next != NULL)
        {
            temp = temp->next;
        }   
            temp->next = newn;
            newn->prev = temp;
    }

}
void DeleteFirst(PPNODE head)
{
    
    if(*head == NULL)
    {
        return;
    }
    else
    {
      *head = (*head)->next;
      free((*head)->prev);
      (*head)->prev = NULL;

    }

}

void DeleteLast(PPNODE head)
{
    PNODE temp = NULL;

     if(*head == NULL)
    {
        return;
    }
    else
    {
        temp = *head;
        while(temp->next->next != NULL)
        {
            temp = temp->next;
        }
        free(temp->next);
        temp->next = NULL;
    }
}

void InsertAtPos(PPNODE head,int no,int pos)
{
     PNODE newn = NULL;
     PNODE temp = NULL;
    int size = 0,iCnt = 0;

    size = Count(*head);

    if((pos < 1) || (pos > (size +1)))
    {
        printf("Invaild Position..\n");
        return;
    }

    if(pos == 1)
    {
        InsertFirst(head,no);
    }   
    else if(pos == (size + 1))
    {
        InsertLast(head,no);
    }
    else
    {
        temp = *head;
      newn = (PNODE)malloc(sizeof(NODE));

       newn->data = no;
        newn->next = NULL;
         newn->prev = NULL;

        for(iCnt = 1;iCnt < (pos-1); iCnt++)
        {
            temp = temp->next;
        }
        newn->next = temp->next;
        temp->next->prev = newn;
        temp->next= newn;
        newn->prev= temp;

    }
    
}

void DeleteAtPos(PPNODE head,int pos)
{
    PNODE temp = NULL;
    int size = 0,iCnt = 0;

    size = Count(*head);
     if((pos < 1) || (pos > (size+1)))
    {
        printf("Invaild Position...");
        return;
    }
    if(pos == 1)
    {
        DeleteFirst(head);
    }
    else if(pos == size)
    {
        DeleteLast(head);
    }
    else
    {
        temp = *head;
        for(iCnt = 1;iCnt < (pos-1); iCnt++)
        {
            temp = temp->next;
        }
        temp->next = temp->next->next;
        free(temp->next->prev);
        temp->prev = NULL;
    }



}
int main()
{
    PNODE first = NULL;
    int iRet = 0;
    InsertFirst(&first,101);
    InsertFirst(&first,51);
    InsertFirst(&first,30);
    InsertFirst(&first,21);
    InsertFirst(&first,11);

    Display(first);
    iRet = Count(first);
    printf("The Number of Nodes is : %d\n",iRet);

     InsertLast(&first,75);
      Display(first);
    iRet = Count(first);
    printf("The Number of Nodes is : %d\n",iRet);

    DeleteFirst(&first);
    Display(first);
    iRet = Count(first);
    printf("The Number of Nodes is : %d\n",iRet);

    DeleteLast(&first);
    Display(first);
    iRet = Count(first);
    printf("The Number of Nodes is : %d\n",iRet);

    InsertAtPos(&first,200,3);

 Display(first);
    iRet = Count(first);
    printf("The Number of Nodes is : %d\n",iRet);

    DeleteAtPos(&first,4);
    Display(first);
    iRet = Count(first);
    printf("The Number of Nodes is : %d\n",iRet);

    return 0;
}