#include<bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node*next;
};

void removeDuplicates(node*head)
{
    node*temp=head;
    node*next_next;

    if(temp==NULL)
    {
        return;
    }

    while(temp->next!=NULL)
    {
        if(temp->data==temp->next->data)
        {
            next_next=temp->next->next;
            free(temp->next);
            temp->next=next_next;
        }
        else
            temp=temp->next;

    }


}

void push(node**head_ref,int new_data)
{
    node*new_node=new node();
    new_node->data=new_data;
    new_node->next=(*head_ref);
    (*head_ref)=new_node;
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
    /* Start with the empty list */
    node* head = NULL;

    /* Let us create a sorted linked list to test the functions
    Created linked list will be 11->11->11->13->13->20 */
    push(&head, 20);
    push(&head, 13);
    push(&head, 13);
    push(&head, 11);
    push(&head, 11);
    push(&head, 11);

    cout<<"Linked list before duplicate removal ";
    printList(head);

    /* Remove duplicates from linked list */
    removeDuplicates(head);

    cout<<"\nLinked list after duplicate removal ";
    printList(head);

    return 0;
}
