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
    //Allocate Memory for node(Diynamically)
    //Initialise that node
    //chec whether LL is empty or not
    //if LL is empty then new node is the first node so update its address in first pointer through head.
    // if LL is not empty then store the address of first node in the next pointer of our new node
    //update the first pointer through head.
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));
    
    newn ->data = no;
    newn ->next = NULL;

        if(*head == NULL)
        {
            *head = newn;

        }
        else
        {
            newn ->next = *head;
            *head = newn;

        }

}
void InsertLast(PPNODE head,int no)
{   
    //Allocate Memory for node(Diynamically)
    //Initialise that node
    //chec whether LL is empty or not
    //if LL is empty then new node is the first node so update its address in first pointer through head.
    // if LL is not empty then
    //travel til last node of LL
    //store address of new node in the next pointer of last node

    PNODE newn = NULL;
    PNODE temp = NULL;
    newn = (PNODE)malloc(sizeof(NODE));
    
    newn ->data = no;
    newn ->next = NULL;

        if(*head == NULL)
        {
            *head = newn;

        }
        else
        {
            temp = *head;
            while(temp->next != NULL)
            {
                temp = temp->next;
            }
            temp ->next = newn;
           
        }

}

void Display(PNODE head)
{

    printf("Elements form linked list are : \n");

    while(head != NULL)
    {
        printf("|%d|->",head->data);
        head = head->next;
    }
    printf("NULL\n");
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

void DeleteFirst(PPNODE head)
{
    PNODE temp = NULL;

    if(*head == NULL)
    {
        return;
    }
    else
    {
        temp = *head;
        *head = temp->next;
        free(temp);
    }
}

void DeleteLast(PPNODE head)
{
    PNODE temp = NULL;
    if(*head == NULL) //LL is empty then return
    {
        return;
    }   
    else if((*head)->next==NULL) //LL contains one node
    {
        free(*head);
        *head = NULL;
    }
    else    //LL contains more than one node then travel till second last node and delete last node.
    {
         temp = *head;
        while(temp->next->next!=NULL)
        {   
            temp = temp->next;

        }
        free(temp->next);
        temp->next=NULL;
    }
}

void InsertAtPos(PPNODE head, int no,int pos)
{
    int size = 0,iCnt =0;
    PNODE temp = NULL;
    size = Count(*head);

    if((pos < 1) || (pos >(size+1)))
    {   
        printf("Position is invalid\n");
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

       PNODE newn = NULL;

        newn = (PNODE)malloc(sizeof(NODE));

        newn ->data = no;
        newn ->next = NULL;

        temp = *head;

        for(iCnt = 1; iCnt<pos-1 ;iCnt++)
        {
            temp = temp->next;
        }

        newn ->next = temp ->next;
        temp ->next = newn;

    }

}

void DeleteAtpos(PPNODE head,int pos)
{

//consider no of nodes are 4
//if position is invalid then return directly(<1 or >4)
//if position is 1 then call deletefirst
//if position is N then call delete(position is 4)
    int size = 0,iCnt =0;
    PNODE temp = NULL;
    PNODE tempdelete = NULL;
    size = Count(*head);

    if((pos < 1) || (pos >size))
    {   
        printf("Position is invalid\n");
        return;
    }

    if(pos == 1)
    {
        DeleteFirst(head);
    }
    else if(pos == (size))
    {
        DeleteLast(head);
    }
    else
    {
        temp = *head;

        for(iCnt = 1; iCnt<pos-1 ;iCnt++)
        {
            temp ->next= temp->next ->next;
        }
        tempdelete = temp ->next;
        temp->next = temp->next->next;
        free(tempdelete);
    }

}


int main()
{   
    int iRet = 0;

    PNODE first = NULL;
    InsertFirst(&first,101);
    InsertFirst(&first,51);
    InsertFirst(&first,21);
    InsertFirst(&first,11);

    InsertAtPos(&first,75,3);
    
    DeleteAtpos(&first,3);
    
    Display(first);
    iRet = Count(first);
    printf("Number of nodes are : %d\n",iRet);
    
    InsertFirst(&first,1);
    
     Display(first);
    iRet = Count(first);
    printf("Number of nodes are : %d\n",iRet);
 
    InsertLast(&first,111);
    InsertLast(&first,121);

    Display(first);
    iRet = Count(first);
    printf("Number of nodes are : %d\n",iRet);
    
    DeleteFirst(&first);
    DeleteFirst(&first);
    

    Display(first);
    iRet = Count(first);
    printf("Number of nodes are : %d\n",iRet);

     DeleteLast(&first);
    
    Display(first);
    iRet = Count(first);
    printf("Number of nodes are : %d\n",iRet);

    return 0;
}