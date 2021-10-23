#include<bits/stdc++.h>
using namespace std;

class node
{
public:

    int data;
    node(int d)
    {
        data=d;
    }
    node*ptr;
};

bool isPalin(node*head)
{
    node*temp=head;

    stack<int>s;
    while(temp!=NULL)
    {
        s.push(temp->data);
        temp=temp->ptr;
    }
    while(head!=NULL)
    {
        int i=s.top();
        s.pop();

        if(head->data!=i)
        {
            return false;
        }
        head=head->ptr;
    }
    return true;
}

int main()
{
    node one=node(1);
    node two=node(2);
    node three=node(3);
    node four=node(4);
    node five=node(5);

    five.ptr = NULL;
    one.ptr = &two;
    two.ptr = &three;
    three.ptr = &four;
    four.ptr = &five;
    node* temp = &one;

    int result = isPalin(&one);

    if(result == 1)
            cout<<"isPalindrome is true\n";
    else
        cout<<"isPalindrome is true\n";

    return 0;

}
