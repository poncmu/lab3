#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    string a,b;
    cout<<"Enter the first text : ";
    cin>>a;
    cout<<"Enter the second text : ";
    cin>>b;
    int N;
    cout<<"Enter N : ";
    cin>>N;
    for(int i=1;i<=15;i++)
    {
        if(N%i==0)
        cout<<a<<" ";
        else
        cout<<b<<" ";
    }


    return 0;
}