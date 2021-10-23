#include<bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node*next;
};

void movetoFront(node**head_ref)
{
    if(*head_ref==NULL || (*head_ref)->next==NULL)
        return;

    node*secLast=NULL;
    node*Last=(*head_ref);

    while(Last->next!=NULL)
    {
        secLast=Last;
        Last=Last->next;
    }

    secLast->next=NULL;
    Last->next=*head_ref;
    *head_ref=Last;
}

void push(node** head_ref, int new_data)
{
    /* allocate node */
    node* new_node = new node();

    /* put in the data */
    new_node->data = new_data;

    /* link the old list off the new node */
    new_node->next = (*head_ref);

    /* move the head to point to the new node */
    (*head_ref) = new_node;
}


/* Function to print nodes in a given linked list */
void printList(node *head)
{
    node*temp=head;
    while(temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

/* Driver code */
int main()
{
    node *start = NULL;

    /* The constructed linked list is:
    1->2->3->4->5 */
    push(&start, 5);
    push(&start, 4);
    push(&start, 3);
    push(&start, 2);
    push(&start, 1);

    cout<<"Linked list before moving last to front\n";
    printList(start);

    movetoFront(&start);

    cout<<"\nLinked list after removing last to front\n";
    printList(start);

    return 0;
}
