#include<bits/stdc++.h>
using namespace std;


void solve()
{

int n , m;
cin>>n>>m;
vector<int> v1(n);

int x;
for(int i=0; i<n;i++){
cin>>x;
v1.push_back(x);
}
for(int i=0; i<m;i++){
cin>>x;
if(find(v1.begin(),v1.end(),x)!= v1.end()){
cout<<"YES"<<"\n";
}
else{
cout<<"NO"<<"\n";
v1.push_back(x);
}

}

}



signed main()
{
    ios_base::sync_with_stdio;cin.tie(0);cout.tie(0);
    int n;
    cin>>n;
    while(n--)
    solve();
}