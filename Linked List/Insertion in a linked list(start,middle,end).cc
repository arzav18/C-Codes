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

//INSERT AT HEAD//
//4 STEPS TO FOLLOW:
// 1) Allocate the new node ,
// 2) Put data into the new node,
// 3) Make next of the new node as head,
// 4) Move the head to point to the new node

void push(node**head_ref,int new_data)
{
    node*new_node = new node();
    new_node->data=new_data;
    new_node->next=(*head_ref);
    (*head_ref)=new_node;
}



//INSERT AFTER A NODE//
//5 STEOS TO FOLLOW:
// 1) Check if the given prev_node is NULL,
// 2) Allocate the new node
// 3) Insert data in new node
// 4) make the next of new node as the next of prev node
// 5) move the next of prev node as new node


void insertAfter(node*prev_node,int new_data)
{
    if(prev_node==NULL)
        cout<<"The given previous node cannot be NULL"<<endl;

    node*new_node= new node();
    new_node->data=new_data;
    new_node->next=prev_node->next;
    prev_node->next=new_node;

}


//Insert at END
//6 STEPS TO FOLLOW:
// 1) allocate
// 2) insert data
// 3) make the next of the new node null
// 4) if the linked list is empty, make the new node as head
// 5) else,traverse till the last node
// 6) change the next of the last node

void append(node**head_ref,int new_data)
{
    node*new_node=new node();
    node*last=*head_ref;
    new_node->data=new_data;
    new_node->next=NULL;
    if(*head_ref==NULL)
    {
        *head_ref=new_node;
        return;
    }

    while(last->next!=NULL)
    {
        last=last->next;
    }
    last->next=new_node;
    return;
}

int main()
{
    node*head=NULL;
    push(&head,1);
    append(&head,3);
    insertAfter(head->next,2);
    printList(head);
    return 0;
}
