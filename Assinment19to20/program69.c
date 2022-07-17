//write a program which search first occurence of particular element from  singly liner linked list. 
//Function should return position at which element is found.
//Input Linked list : |10|->|20|->|30|->|40|->|50|->|60|->|70|->|80|
//Input element : 30.

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

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
int SearchFirstOcc(PNODE head,int no)
{
   PNODE newn = NULL;
   PNODE temp = NULL;
   int iCnt;

    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = no;
    newn->next = NULL;
    
    if(*head == NULL)
    {
        *head = newn;
    }
    else
    {
        temp = *head;
        while(temp->next !NULL)
        {   
            iCnt++;
            if((head->data)==no)
            {
                break;
            }
        }
        if(head == NULL)
        {
            return 0;
        }
        else
        {
            return iCnt;
        }
        
    }
   
}

void Display(PNODE head)
{
    printf("The Linked List are : \n");
    while(head != NULL)
    {
        printf("|%d|->",head->data);
        head = head->next;
    }
}
int main()
{
    PNODE first = NULL;
    int iRet = 0;
    InsertFirst(&first,10);
    InsertFirst(&first,20);
    InsertFirst(&first,30);
    InsertFirst(&first,40);
    InsertFirst(&first,50);
    InsertFirst(&first,30);
    InsertFirst(&first,70);

    
   Display(first);
   iRet =  SearchFirstOcc(first,30);
   printf("\n The First occurence Number At position : %d\n",iRet);


    return 0;
}