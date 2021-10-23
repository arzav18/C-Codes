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

void deleteNode(node**head_ref,int position )
{
    if(*head_ref==NULL)
        return;

    node*temp=*head_ref;

    if(position==0)
    {
        *head_ref=temp->next;
        free(temp);
        return;
    }

    for(int i=0;temp!=NULL && i<position-1;i++)
    {
        temp=temp->next;
    }
    if(temp==NULL || temp->next==NULL)
        return;

    node*next=temp->next->next;
    free(temp->next);
    temp->next=next;

}

void printList(node*head)
{
    node*temp=head;
    cout<<temp->data<<" ";
    temp=temp->next;
}

int main()
{

    // Start with the empty list
    node* head = NULL;

    push(&head, 7);
    push(&head, 1);
    push(&head, 3);
    push(&head, 2);
    push(&head, 8);

    cout << "Created Linked List: ";
    printList(head);
    deleteNode(&head, 4);
    cout << "\nLinked List after Deletion at position 4: ";
    printList(head);
    return 0;
}
