#include<iostream>
#define n 100
using namespace std;

class stack
{
private:
    int *a;
    int top;

public:
    stack()
    {
        a=new int[n];
        top=-1;

    }

    void push(int x)
    {
        if(top==n-1)
        {
            cout<<"Stack overflow"<<endl;
            return;
        }

        top++;
        a[top]=x;
    }

    void pop()
    {
        if(top==-1)
        {
            cout<<"no element to pop"<<endl;
            return;
        }
        top--;

    }

    void Top()
    {
        if(top==-1)
        {
            cout<<"no element in stack"<<endl;
            return ;
        }
        return a[top];

    }

    bool empty()
    {
        if(top==-1)
            return true;
        else
            return false;
    }

};

int main()
{
    stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    cout<<st.Top()<<endl;
    st.pop();
    cout<<st.Top()<<endl;
    return;
}

