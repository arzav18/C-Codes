#include<iostream>
using namespace std ;

int firstocc(int a[], int n, int i, int key)
{
    if(i=n)
    {
        return -1;
    }
    if(a[i]==key)
    {
        return i;
    }
    return firstocc(a,n,i+1,key);
}
int lastocc(int a[], int n, int key, int i)
{
    if(i==n)
        return -1;
    int restArray=lastocc( a, n,  i+1, key);
    if(restArray!=-1)
    {
        return restArray;
    }
    if(a[i]==key)
        return i;
    else
        return -1;
}
int main()
{
    int a[]={1,2,3,4,5,6,7,8,1,2,3,4,5};
    int i,n,key;
    firstocc(a,n,i,key);
    lastocc(a,n,i,key);
    return 0;
}
