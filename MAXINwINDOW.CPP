#include<bits/stdc++.h>
using namespace std;


int solve()
{
multiset<int> mt;
int n,k; cin>>n>>k;
int arr[n];
for(int i=0; i<n;i++)
cin>>arr[i];

for(int i=0;i<k;i++)
mt.insert(arr[i]);
cout<<*mt.rbegin()<<" ";

for(int i=k;i<n;i++){
mt.erase(mt.find(arr[i-k]));
mt.insert(arr[i]);
cout<<*mt.rbegin()<<" ";
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