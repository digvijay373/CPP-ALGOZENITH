#include<bits/stdc++.h>
using namespace std;
#define int long long




void solve()
{
   multiset<int> mt;
   int cur_ans=0;
   int n; cin>>n;
   for(int i=0; i<n;i++)
   {
       int x;
       cin>>x;
       if(x>cur_ans)
       mt.insert(x);
       
           
        while(*mt.begin()<=cur_ans && !mt.empty()){
                mt.erase(mt.begin());}
           
       
       if(mt.size()>cur_ans)
       cur_ans++;

       cout<<cur_ans<<" ";
   }
   
   cout<<"\n";

}







signed main()
{
    ios_base::sync_with_stdio;cin.tie(0);cout.tie(0);
    int q; cin>>q;
    while(q--)
    solve();
}