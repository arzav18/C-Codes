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

int getNth(node*head,int index)
{
    node*current=head;
    int count=0;
    while(current!=NULL)
    {
        if(count==index)
            return (current->data);
        count++;
        current=current->next;
    }
    assert(0);
}

int main()
{
    node*head=NULL;
    push(&head,1);
    push(&head,2);
    push(&head,3);
    push(&head,4);
    push(&head,5);

    getNth(head,3);
    return 0;
}
