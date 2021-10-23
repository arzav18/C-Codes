#include<bits/stdc++.h>
using namespace std;

class node
{
public:


    int data;
    node*next;
};

void push(node**head_ref,int new_data)
{
    node*new_node=new node();
    new_node->data=new_data;
    new_node->next=(*head_ref);
    (*head_ref)=new_node;
}

void deleteNode(node**head_ref,int key)
{
    node*temp=*head_ref;
    node*prev=NULL;

    if(temp!=NULL && temp->data==key)
    {
        *head_ref=temp->next;
        delete temp;
        return;
    }

    else
    {
        while(temp!=NULL && temp->data!=key)
        {
            prev=temp;
            temp=temp->next;
        }

        if(temp==NULL)
        {
            return;
        }
        prev->next=temp->next;
        delete temp;


    }

}

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
    push(&head,1);
    push(&head,2);
    push(&head,3);
    printList(head);
    deleteNode(&head,1);
    printList(head);
    return 0;
}
