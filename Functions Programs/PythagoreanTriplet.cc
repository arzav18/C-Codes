#include<iostream>
using namespace std;

bool check(int x, int y, int z)
{
    int b;
    int c;
    int a=max(a,max(b,c));

    if(a==x)
    {
        b=y;
        c=z;
    }
    else if(a==y)
    {
        b=x;
        c=z;
    }
    else
    {
        b=z;
        c=x;
    }
    if(a*a==(b*b)+(c*c))
        return true;
    else
        return false;
}

int main()
{
    int x,y,z;
    cin>>x>>y>>z;
    if(check(x,y,z))
        cout<<"It is a Pythagorean Triplet";
    else
        cout<<"It isn't";
    return 0;
}
