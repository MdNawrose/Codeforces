#include<iostream>
using namespace std;
int main()
{
    int t,a[10],d,b;
    cin>>t;
    for(int i=1; i<=t; i++)
    {
        int n=0;
        for(int i=0; i<3; i++)
        {
            cin>>a[i];
            n=n+a[i];
        }
        d=n*150/100;
        cout<<"Case "<<i<<": "<<150-d<<endl;
    }
    return 0;
}
