//In Data Structurre use Stack concpet


#include<iostream>
using namespace std;

template<class T>
struct node
{
    T data;
    struct node *next;
};

template<class T>
class Stack
{
    public:
        struct node<T> *Head;
        int Count;

        Stack();
        void Push(T);    //InsertFirst
        void Pop();        //DeleteFirst
        void InsertLast(T);
        void Display();
        int CountNode();
};

template<class T>
Stack<T>::Stack()
{
    Head = NULL;
    Count = 0;
}

template<class T>
void Stack<T>::Push(T no)
{
    struct node<T> *newn = NULL;
    newn = new node<T>;

    newn->data = no;
    newn->next = NULL;

   newn->next = Head;
    Head = newn;

    Count++;
}

 template<class T>
void Stack<T>::Pop()     //DeleteFirst.
 {
    T no;                       //no is new variable for show the deleted node

    if(Count == 0)  //Head == NULL;
    {
        cout<<"Stack is Empty"<<endl;
       
    }
    if(Count == 1)
    {
        no = Head->data;
        delete Head;
        Head = NULL;
        Count--;

        cout<<"Removed Element is :"<<no<<endl;
    }
                                                 //else
                                                // {
        no = Head->data;
        struct node<T>*temp = Head;
        Head = Head->next;
        delete temp;
        Count--;
        cout<<"Removed Elemet is :"<<no<<endl;
                                                  //}
 }

template<class T>
void Stack<T>::Display()
{
    cout<<"Elements from Stack are : "<<endl;
    struct node<T> *temp = Head;
    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

template<class T>
int Stack<T>::CountNode()
{
    return Count;
}

int main()
{
    Stack<char>obj1;
    obj1.Push('A');
    obj1.Push('B');
    obj1.Push('C');
    obj1.Push('D');

   
    obj1.Display();
    
    obj1.Pop();
    obj1.Pop();

    obj1.Display();
    
    obj1.Push('Z');
    obj1.Pop();
    
    return 0;

}