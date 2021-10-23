#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node*next;
};

void PrintnthNode(struct node*head,int n)
{
    int len=0;
    struct node*temp=head;

    while(temp!=NULL)
    {
        temp=temp->next;
        len++;
    }

    if(len<n)
        return;

    temp=head;

    for(int i=1;i<len-(n+1);i++)
    {
        temp=temp->next;
    }
    cout<<temp->data<<" ";
    return;
}

void push(struct node**head_ref,int new_data)
{
    struct node*new_node=new node();
    new_node->data=new_data;
    new_node->next=(*head_ref);
    (*head_ref)=new_node;
}

int main()
{
    struct node*head=NULL;

    push(&head,20);
    push(&head,10);
    push(&head,5);
    push(&head,35);

    PrintnthNode(head,4);
    return 0;
}
