#include<bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node * nxt;
};

class LinkedList
{
public:
    node* head;
    int sz;

    LinkedList()
    {
        head =NULL;
        sz=0;
    }
    //Create a new node with Data = value & nxt=NULL
    node* CreateNewNode(int value)
    {
        node *newnode = new node;
        newnode -> data = value;
        newnode ->nxt = NULL;

        return newnode;
    }
    //Insert new value at Head
    void InsertAtHead(int value)
    {
        sz++;
        node *a = CreateNewNode(value);
        if(head == NULL)
        {
            head =a ;
            return;
        }
        a->nxt = head;
        head =a;
    }
    //Prints the link list
    void Traverse()
    {
        node* a= head;
        while (a !=NULL)
        {
            cout<<a->data<<" ";
            a= a->nxt;
        }
        cout<<"\n";
    }
    //Search for a single value
    int SearchDistinctValue(int value)
    {
        node* a=head;
        int index =0;
        while(a!= NULL)
        {
            if(a->data == value)
            {
                return index;
            }
            a= a->nxt;
            index ++;
        }
        return -1;

    }
    int getSize()
    {
        //O(1);



//     O(size of linked list) = O(n)
//        int sz=0;
//        node *a=head;
//        while(a!=NULL)
//        {
//            sz++;
//            a= a-> nxt;
//        }
        return sz;
    }
    void InsertAtAnyIndex(int index,int value)//O(n)
    {
        if(index ==0)
        {
            InsertAtHead(value);
            return;
        }
        sz++;
        node *a=head;
        int cur_index  = 0;
        while(cur_index != index-1)
        {
            a= a->nxt;
            cur_index++;
        }

        node *newnode = CreateNewNode(value);
        newnode ->nxt = a->nxt;
        a->nxt = newnode;
    }
    //search all possible occurrence
    void SearchAllValue(int value)
    {
        node* a=head;
        int index =0;
        while(a!= NULL)
        {
            if(a->data == value)
            {
                cout<<value<<"is found at index " <<index<<"\n";
            }
            a= a->nxt;
            index ++;
        }
    }
    void DeleteAtHead()
    {
        if(head==NULL)
        {
            return;
        }
        sz--;
        node *a = head;
        head = a->nxt;
        delete a;
    }
    void DeleteAnyIndex(int index)
    {
        if(index < 0||index>sz-1)
            return ;

        if(index==0)
        {
            DeleteAtHead();
            return ;
        }
        sz--;
        node *a=head;
        int cur_index =0;
        while(cur_index != 0)
        {
            a=a->nxt;
            cur_index++;
        }
        node *b = a->nxt;
        a->nxt = b->nxt;
        delete b;
    }
    void InsertAfterAnyValue(int value,int data)
    {
        node *a=head;
        while(a!=NULL)
        {
            if(a->data == value)
            {
                break;
            }
            a= a->nxt;
        }
        if(a==NULL)
        {
            cout<<value<<"doesn't Exist in the link list.\n";
            return;
        }
        sz++;
        node *newnode = CreateNewNode(data);
        newnode->nxt = a->nxt;
        a->nxt = newnode;
    }
    void ReversePrint2(node *a)
    {
        if(a==NULL)
        {
            return;
        }
        ReversePrint2(a->nxt);
        cout<<a->data<<" ";
    }
    void ReversePrint()
    {
        ReversePrint2(head);
        cout<<"\n";
    }

};

int main()
{
    LinkedList l;

    l.InsertAtHead(10);
    l.InsertAtHead(30);
    l.InsertAtHead(20);
    l.InsertAtHead(90);

    l.Traverse();

    cout<<"10 is in "<<l.SearchDistinctValue(10)<<"\n";
    cout<< "5 is in "<<l.SearchDistinctValue(5)<<"\n";
    cout<< "30 is in "<<l.SearchDistinctValue(30)<<"\n";

    cout<<"Sizee= "<<l.getSize()<<"\n";
    //l.SearchAllValue(30);

    // l.InsertAtAnyIndex(3,100);
    //l.DeleteAtHead();
    //l.DeleteAnyIndex(2);
    l.InsertAfterAnyValue(20,43);
    l.ReversePrint();
    l.Traverse();
    cout<<"Sizee= "<<l.getSize()<<"\n";


    return 0;
}
