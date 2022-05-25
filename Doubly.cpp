#include<iostream>

using namespace std;

#define TRUE 1
#define FALSE 0

typedef int BOOL;

struct node
{
    int data;
   struct node *next;
    struct node *Prev;
};

typedef struct node NODE;
typedef struct node * PNODE;

class Doubly_linkedList
{
    private:
        PNODE head;

            public:
                Doubly_linkedList();
                ~Doubly_linkedList();
                BOOL InsertFirst(int);
                BOOL InsertLast(int);
                BOOL InsertAtPosition(int,int);
                inline void Display();
                inline int Count();
                BOOL DeleteFirst();
                BOOL DeleteAtPosition(int);
                BOOL DeleteLast();

};

Doubly_linkedList :: Doubly_linkedList()
{
    head = NULL;
}

Doubly_linkedList :: ~Doubly_linkedList()
{
    PNODE Temp = head;

    if(head != NULL)
    {
        while(head != NULL)
        {
            head = head->next;
            delete Temp;
            Temp = head;
        }
    }
}

BOOL Doubly_linkedList :: InsertFirst(int no)
{
    PNODE newn = NULL;
    newn = new NODE;
    if(newn == NULL)
    {
        return FALSE;
    }

    newn->next = NULL;
    newn->Prev = NULL;
    newn->data = no;

    if(head == NULL)
    {
        head = newn;
    }
    else
    {
        head->Prev = newn;
        newn->next = head;
        head = newn;
    }
    return TRUE;
}

BOOL Doubly_linkedList :: InsertLast(int no)
{
    PNODE newn = NULL, temp = head;
    newn = new NODE;

    if(newn == NULL)
    {
        return FALSE;
    }
    newn->next = NULL;
    newn->Prev = NULL;
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
        newn->Prev = temp;
    }
    return TRUE;
}

BOOL Doubly_linkedList:: InsertAtPosition(int no,int pos)
{
    if((head == NULL) || (pos>Count()+1) || (pos <= 0))
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
        newn->Prev = NULL;
        newn->data = no;

        for(int i = 1; i<= (pos-2); i++)
        {
            temp = temp->next;
        }
        newn->next = temp->next;
        temp->next->Prev = newn;
        newn->Prev = temp;
        temp->next = newn;
    }
    return TRUE;
}

BOOL Doubly_linkedList:: DeleteFirst()
{
    PNODE temp = head;
    if(head == NULL)
    {
        return FALSE;
    }
    else
    {
        head = head->next;
        head->Prev = NULL;
        delete temp;
    }
    return TRUE;
}

BOOL Doubly_linkedList::DeleteLast()
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
        PNODE temp = head;
        while((temp->next)!=NULL)
        {
            temp = temp->next;
        }
        temp->Prev->next = NULL;
        delete temp;
    }
    return TRUE;
}

BOOL Doubly_linkedList::DeleteAtPosition(int pos)
{
    if((head == NULL) || (pos>Count()) || (pos <= 0))
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
        PNODE temp = head;
        
        for(int i = 1; i < (pos-2); i++)
        {
            temp = temp->next;
        }
        temp->next = temp->next->next;
        delete temp->next->Prev;
        temp->next->Prev = temp;
    }
    return TRUE;
}

void Doubly_linkedList :: Display()
{
    PNODE temp = head;

    while(temp != NULL)
    {
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL\n";
}

int Doubly_linkedList::Count()
{
    PNODE temp = head;
    int iCnt = 0;

    while(temp != NULL)
    {
        iCnt++;
        temp = temp->next;
    }
    return iCnt;
}


int main()
{
Doubly_linkedList obj1;
Doubly_linkedList *obj2 = new Doubly_linkedList();

obj1.InsertFirst(21);
obj1.InsertFirst(11);

obj1.Display();
cout<<"\nNumber of nodes : "<<obj1.Count()<<"\n";

obj1.InsertFirst(101);
obj1.InsertFirst(111);

obj1.Display();
cout<<"\nNumber of nodes : "<<obj1.Count()<<"\n";

obj1.InsertAtPosition(75,4);
obj1.InsertAtPosition(85,4);
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
cout<<"\nNumber of nodes : "<<obj1.Count()<<"\n";

delete obj2;

    return 0;
}


