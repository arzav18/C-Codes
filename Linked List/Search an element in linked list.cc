#include<iostream>
using namespace std;

class node
{
public:


    int key;
    node*next;
};

void push(node**head_ref,int new_key)
{
    node*new_node=new node();
    new_node->key=new_key;
    new_node->next=(*head_ref);
    (*head_ref)=new_node;
}

bool search(node*head,int x)
{
    node*current=head;
    while(current!=NULL)
    {
        if(current->key==x)
            return true;
        current=current->next;
    }
    return false;
}

int main()
{
    node*head=NULL;
    int x=21;

    push(&head, 10);
    push(&head, 30);
    push(&head, 11);
    push(&head, 21);
    push(&head, 14);

    search(head, 21)? cout<<"Yes" : cout<<"No";
    return 0;

}
