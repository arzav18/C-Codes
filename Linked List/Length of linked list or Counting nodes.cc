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
    (*head_ref) = new_node;

}

void getCount(node*head)
{
    int count=0;
    node*current=head;
    while(current!=NULL)
    {
        count++;
        current=current->next;
    }
}

int main()
{
    /* Start with the empty list */
    node* head = NULL;

    /* Use push() to construct below list
    1->2->1->3->1 */
    push(&head, 1);
    push(&head, 3);
    push(&head, 1);
    push(&head, 2);
    push(&head, 1);

    /* Check the count function */
    getCount(head);
    return 0;
}
