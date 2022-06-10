#include<bits/stdc++.h>

using namespace std;


int solve()
{
map<int,pair<int,int>> mp;
int n; cin>>n;
for(int i =0; i<n; i++)
{
    int a ,b;
cin>>a>>b;
mp[-(a+b)]={a,b};

}
for(auto v:mp)
cout<<v.first<<"\n";
int sumA=0,sumB=0;
int i=0;
for(auto v:mp)
{
    if(i%2==0)
    sumA+=v.second.first;
    else
    sumB+=v.second.first;
    i++;
}
cout<<sumA<<" "<<sumB;


}

signed main()
{
    ios_base::sync_with_stdio;cin.tie(0);cout.tie(0);
    solve();
}