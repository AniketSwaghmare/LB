#include<iostream>
using namespace std;

#define TRUE 1
#define FALSE 0


typedef int BOOL;

struct node
{
    int data;
    node *next;
};
typedef struct node NODE;
typedef struct node * PNODE;

class Singly_linkedList
{
    private:
        PNODE head;
    public:
        Singly_linkedList();
        ~Singly_linkedList();

        BOOL InsertFirst(int);
        BOOL InsertLast(int);
        BOOL InsertAtPosition(int,int);
        inline void Display();
        inline int Count();
        BOOL DeleteFirst();
        BOOL DeleteAtPosition(int);

        BOOL DeleteLast();
};

Singly_linkedList :: Singly_linkedList()
{
    head = NULL;
}

Singly_linkedList :: ~Singly_linkedList()
{
    PNODE Temp,Navigate;

    if(head !=NULL)
    {
        Navigate = head;
        while(Navigate != NULL)
        {
            Temp = Navigate->next;
            delete Navigate;
            Navigate = Temp;
        }
    }
}

BOOL Singly_linkedList :: InsertFirst(int no)
{
    PNODE newn = NULL;

    newn = new NODE;
    if(newn == NULL)
    {
        return FALSE;
    }
    newn->next = NULL;
    newn->data = no;

    if(head == NULL)
    {
        head = newn;
    }
    else
    {
        newn->next = head;
        head = newn;
    }
    return TRUE;
}

BOOL Singly_linkedList :: InsertLast(int no)
{
    PNODE newn = NULL, temp = head;
    newn = new NODE;

    if(newn == NULL)
    {
        return FALSE;

    }
    newn->next = NULL;
    newn->data = no;

    if(head == NULL)
    {
        head = newn;
    }
    else
    {
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newn;  
    }
    return TRUE;

}

BOOL Singly_linkedList :: InsertAtPosition(int pos,int no)
{
    if((head == NULL) || (pos >Count()+1) || (pos <= 0))
    {
        return FALSE;
    }
    if(pos == 1)
    {
        return(InsertFirst(no));
    }
    else if(pos == (Count())+1)
    {
        return(InsertLast(no));
    }
    else
    {
        PNODE newn = NULL, temp = head;
        newn = new NODE;

        if(newn == NULL)
        {
            return FALSE;
        }
        newn->next = NULL;
        newn->data = no;

        for(int i = 1; i<=(pos-2);i++)
        {
            temp = temp->next;
        }
        newn->next = temp->next;
        temp->next = newn;
    }
    return TRUE;
}

BOOL Singly_linkedList :: DeleteFirst()
{
    PNODE temp = head;

    if(head == NULL)
    {
        return FALSE;
    }
    else
    {
        head = head->next;
        free(temp);

    }
    return TRUE;
}

BOOL Singly_linkedList :: DeleteLast()
{
    if(head == NULL)
    {
        return FALSE;

    }
    else if(head->next == NULL)
    {
        delete head;
        head = NULL;

    }
    else    
    {
        PNODE temp1 = head,temp2 = NULL;
        while(temp1->next->next != NULL)
        {
            temp1 = temp1->next;
        }
        temp2 = temp1->next;
        temp1->next = NULL;
        free(temp2);

    }
    return TRUE;
}

BOOL Singly_linkedList :: DeleteAtPosition(int pos)
{
    if((head == NULL) || (pos > Count()) || (pos <= 0))
    {
        return FALSE;
    }
    else if(pos == 1)
    {
        DeleteFirst();
    }
    else if(pos == (Count()))
    {
        DeleteLast();
    }
    else
    {
        PNODE temp1 = head,temp2 = NULL;
        for(int i = 1; i<=(pos-2);i++)
        {
            temp1 = temp1->next;
            ++i;
        }
        temp2 = temp1->next;
        temp1->next = temp2->next;

        delete temp2;
    }
    return TRUE;
}



void Singly_linkedList :: Display()
{
    PNODE Temp = head;
    while(Temp != NULL)
    {
        cout<<Temp->data<<"->";
        Temp = Temp->next;
    }
    cout<<"NULL\n";
}

int Singly_linkedList :: Count()
{
    PNODE Temp = head;
    int iCnt = 0;

    while(Temp != NULL)
    {
        iCnt++;
        Temp = Temp->next;
    }
    return iCnt;
}

int main()
{
Singly_linkedList obj1;
Singly_linkedList*obj2 = new Singly_linkedList();

obj1.InsertFirst(51);
obj1.InsertFirst(21);
obj1.InsertFirst(11);

obj1.Display();

cout<<"\nNumber of nodes : "<<obj1.Count()<<"\n";

obj1.InsertFirst(101);
obj1.InsertFirst(111);
    
    obj1.Display();

cout<<"\nNumber of nodes : "<<obj1.Count()<<"\n";

obj1.InsertAtPosition(74,4);
obj1.Display();

cout<<"\nNumber of nodes : "<<obj1.Count()<<"\n";

obj1.DeleteFirst();

obj1.Display();

obj1.DeleteLast();
obj1.Display();

obj2->InsertFirst(501);
obj2->InsertFirst(511);
obj2->InsertFirst(521);

obj2->Display();

obj2->InsertLast(551);
obj2->InsertAtPosition(601,3);

obj2->Display();
cout<<"\nNumber of nodes : "<<obj2->Count()<<"\n";

delete obj2;
    
    return 0;
}