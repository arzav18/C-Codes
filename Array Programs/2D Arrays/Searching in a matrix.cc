#include<iostream>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int target;
    cin>>target;
    int a[n][m];

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }

    int r=0,c=m-1;
    while(r<n && c>=0)
    {
        if(a[r][c]==target)
            return true;
        else if(a[r][c]> target)
            c--;
        else
            r++;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";

    }
    return 0;
}
