#include<bits/stdc++.h>
using namespace std;


int solve()
{

int n,m; cin>>n>>m;
vector<int> a(n);
for(int i=0; i<n; i++)
{
    cin>>a[i];

}
sort(a.begin(),a.end());
for(int i=1; i<n; i++)
{
   a[i]=a[i]+a[i-1];
}
for(int i=0;i<m;i++)
{
    int x;
    cin>>x;
    int ans= upper_bound(a.begin(),a.end(),x)-a.begin();
    cout<<ans<<" ";

}
cout<<"\n";



}


signed main()
{
    ios_base::sync_with_stdio;cin.tie(0);cout.tie(0);
    int n;cin>>n;
    while(n--)
    solve();
}