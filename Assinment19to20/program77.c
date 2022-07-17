//write a progam which return second maximum element from singly lineer linked list.
//Input : |110|->|230|->|320|->|240|
//Output : 240

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

int SecMaximum(PNODE head)
{
    int iCnt = head->data,last = 0;
    while(head->next != NULL)
    {
        if((head->data) > iCnt)
        {
            last = head->next->data;
        }
        head = head->next;
    }
    return last;
}

int main()
{
    PNODE first = NULL;
    int iRet = 0;
    Insertlast(&first,110);
    Insertlast(&first,230);
    Insertlast(&first,320);
    Insertlast(&first,240);
   

   iRet =  SecMaximum(first);
    printf(" Maximum second Node is : %d\n",iRet);


    return 0;
}