#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string s1="akahkshfuskjskd";                         //converting lowercase to uppercase
    for(int i=0;i<s1.size();i++)
    {
        if(s1[i]>='a' && s1[i]<='z')
            s1[i]-=32;
    }
    cout<<s1<<endl;


    string s2="AHDKSGKRCSDLDLASID";                     //converting uppercase to lowercase
    for(int i=0;i<s2.size();i++)
    {
        if(s2[i]>='A' && s2[i]<='Z')
            s2[i]+=32;

    }
    cout<<s2<<endl;



    string s3="abcdfghjkloiuyt";                        //using in-built function
    transform(s3.begin(),s3.end(),s3.begin(),::toupper);
    cout<<s3<<endl;


    string s4="AKDLHJSKSAXMJDOQKDLA";
    transform(s4.begin(),s4.end(),s4.begin(),::tolower);
    cout<<s4<<endl;

}




