#include<bits/stdc++.h>
using namespace std;

class node{
public:
    int data;
    node*next;
};

void deleteList(node**head_ref)
{
    node*current=*head_ref;
    node*head=NULL;

    while(current!=NULL)
    {
        next=current->next;
        free(current);
        current=next;
    }
    *head_ref=NULL;
}

void push(Node** head_ref, int new_data)
{
    /* allocate node */
    Node* new_node = new Node();

    /* put in the data */
    new_node->data = new_data;

    /* link the old list off the new node */
    new_node->next = (*head_ref);

    /* move the head to point to the new node */
    (*head_ref) = new_node;
}

/* Driver code*/
int main()
{
    /* Start with the empty list */
    Node* head = NULL;

    /* Use push() to construct below list
    1->12->1->4->1 */
    push(&head, 1);
    push(&head, 4);
    push(&head, 1);
    push(&head, 12);
    push(&head, 1);

    cout << "Deleting linked list";
    deleteList(&head);

    cout << "\nLinked list deleted";
}
