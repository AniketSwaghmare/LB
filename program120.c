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
    newn = (PNODE)malloc(sizeof(NODE));
    
    newn ->data = no;
    newn ->next = NULL;

        if(*head == NULL)
        {
            *head = newn;

        }
        else
        {
           
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

int main()
{   
    int iRet = 0;

    PNODE first = NULL;
    InsertFirst(&first,101);
    InsertFirst(&first,51);
    InsertFirst(&first,21);
    InsertFirst(&first,11);

    Display(first);
    iRet = Count(first);
    printf("Number of nodes are : %d\n",iRet);
    
    InsertFirst(&first,1);
    
     Display(first);
    iRet = Count(first);
    printf("Number of nodes are : %d\n",iRet);
    return 0;
}