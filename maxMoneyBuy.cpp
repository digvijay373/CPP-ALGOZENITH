#include<bits/stdc++.h>
using namespace std;


int solve()
{

int n,m; cin>>n>>m;
int a[n];
for(int i=0; i<n; i++)
{
    cin>>a[i];

}
sort(a,a+n);

int c=0;

for(int i=0; i<n;i++)
{
    if((m-a[i])>=0)
    {
        m-=a[i];
        c++;
    }
}
cout<<c<<"\n";
}


signed main()
{
    ios_base::sync_with_stdio;cin.tie(0);cout.tie(0);
    int n;cin>>n;
    while(n--)
    solve();
}