//write a progam which return addition of all even element from singly lineer linked list.
//Input : |11|->|20|->|32|->|41|
//Output : 52

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

int AdditionEven(PNODE head)
{
    int iCnt = 0, isum = 0;

    while(head->next != NULL)
    {
        if((head->data) % 2 == 0)
        {
            isum += head->data;
        }
        head= head->next;
    }
    return isum;
}

int main()
{
    PNODE first = NULL;
    int iRet = 0;
    Insertlast(&first,11);
    Insertlast(&first,20);
    Insertlast(&first,32);
    Insertlast(&first,41);
   

   iRet =  AdditionEven(first);
    printf(" Addition of Even nodes is : %d\n",iRet);


    return 0;
}