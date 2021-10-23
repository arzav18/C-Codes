#include<bits/stdc++.h>
using namespace std;

class node
    {
    public:
        int data;
        node*next;
    };

    void printList(node*head)
    {
        node*temp=head;
        while(temp!=NULL)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }

    }


int main()
{
    node*head=NULL;
    node*second=NULL;
    node*third=NULL;

    head=new node();
    second=new node();
    third=new node();

    head->data=1;
    head->next=second;

    second->data=2;
    second->next=third;

    third->data=3;
    third->next=NULL;

    printList(head);

    return 0;

}

