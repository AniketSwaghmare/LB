//write a progam which return largest elements from singly linear linked list.
//Input : |110|->|230|->|20|->|240|->|640|
//Output : 20.

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

int Minimum(PNODE head)
{
    int iCnt = head->data, last = head->data;

    while(head!= NULL)
    {
        if((head->data)<iCnt)
        {
            last = head->data;
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
    Insertlast(&first,20);
    Insertlast(&first,240);

    iRet = Minimum(first);
    printf("Minimum Number is  : %d\n",iRet);


    return 0;
}