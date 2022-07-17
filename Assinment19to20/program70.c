//write a program which search Last occurence of particular element from  singly liner linked list. 
//Function should return position at which element is found.
//Input Linked list : |10|->|20|->|30|->|40|->|50|->|30|->|70|
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

void InsertLast(PPNODE head,int no)
{
    PNODE newn = NULL;
    PNODE temp = NULL;
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
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next= newn;
    }

}
int Addition(PNODE head,int Value)
{
   PNODE temp = NULL;
   int iCnt = 0,last = 0;

    while(head->next != NULL)
    {
        iCnt++;
        if(head->data==Value)
        {
            last = iCnt;
        }
        head = head->next;
    }
    return last;  

    
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
    InsertLast(&first,10);
    InsertLast(&first,20);
    InsertLast(&first,30);
    InsertLast(&first,40);
    InsertLast(&first,50);
    InsertLast(&first,30);
    InsertLast(&first,70);

    
   Display(first);
   iRet = Addition(first,30);
   printf("\n The Last occurence At position : %d\n",iRet);


    return 0;
}