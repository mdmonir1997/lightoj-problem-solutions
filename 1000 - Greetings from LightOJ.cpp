#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b;
    cin>>n;
    if(n<=125)
    {
        for(int i=1; i<=n; i++)
        {
            cin>>a>>b;
            cout<<"Case "<<i<<": "<<a+b<<endl;
        }
    }
    return 0;
}
